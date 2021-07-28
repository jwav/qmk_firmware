#!/bin/bash
cp ~/Downloads/vee_crkbd.json ./

# OLD WAY
## inserting the content of definitions.c at the beginning of keymap.c
# qmk json2c ./vee_lily.json -o keymap.c
# cat definitions.c > temp.c
# cat keymap.c >> temp.c
# mv temp.c keymap.c

# TRYOUT: 
# insert the content of definitions.c at the beginning of keymap.c 
# and then append the content of combos.c
qmk json2c ./vee_crkbd.json -o my_keymap.h
python3 keypos.py
# cat definitions.c > temp.c
# cat keymap.c >> temp.c
# cat my_combos.h >> temps.c
# mv temp.c keymap.c

qmk compile --keyboard crkbd --keymap jwav
exit 0

