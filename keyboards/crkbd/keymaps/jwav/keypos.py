import re

NBROWS = 3
NBCOLS = 12

def num2chr(num) -> str:
    if num < 10:
        return str(num)
    else:
        return chr(ord('a') + num -10)

def generate_defines():
    layers = [0,1,2,3]
    nbrows = NBROWS
    nbcols = NBCOLS
    output_file = 'keypos.txt'
    f = open(output_file, 'w')
    for layer in layers:
        for row in range(nbrows):
            for col in range(nbcols):
                name = f'k{layer}{row}{num2chr(col)}'
                original = f'keymaps[{layer}][{row}][{col}]'
                f.write(f'#define {name} {original}\n')
    f.close()

def parse_keymap() -> list:
    output_file = 'my_keypos_aliases.h'

    f = open('my_keymap.h')
    text = '\n'.join(f.readlines())
    f.close()
    tokstart = 'LAYOUT('
    tokend   = '),'
    result = re.search(f'{tokstart}(.*){tokend}', text)
    matches = re.findall(f'{tokstart}(.*){tokend}', text)
    # print([m for m in matches])

    layers_str = [m[0].strip('()') for m in matches]
    # print('\n---\n'.join(layers_str))

    layers = [ls.split(',') for ls in layers_str]
    for i,l in enumerate(layers):
        print(i, l)
        print('---\n')

    nbrows = NBROWS
    nbcols = NBCOLS

    f = open(output_file, 'w')

    f.write('#ifndef MY_KEYPOS_ALIASES\n')
    f.write('#define MY_KEYPOS_ALIASES\n')
    for layerid,layer in enumerate(layers):
        for row in range(nbrows):
            for col in range(nbcols):
                keyid = row * nbcols + col

                # print(f'row={row} col={col} -> keyid={keyid}')
                name = f'k{layerid}{row}{num2chr(col)}'
                mirrorcol = nbcols - col -1
                mirrorname = f'km{layerid}{row}{num2chr(col)}'
                mirrorkeyid = row * nbcols + mirrorcol 
                f.write(f'#define {name} {layers[layerid][keyid]}\n')
                f.write(f'#define {mirrorname} {layers[layerid][mirrorkeyid]}\n')
                # print(f'#define {name} {layers[layerid][keyid]}\n')
        # if layerid == 1:
        #     break
    f.write('#endif\n')
    f.close()
    return


    for m in matches:
        print(type(m), len(m), m)
        print('')
        for x in m:
            print('xxx', x)
        
    return


    print(result.group())
    print('----')
    print(result.group(1))
    print('----')
    print(result.group(2))


if __name__ == '__main__':
    # generate_defines()
    parse_keymap()

