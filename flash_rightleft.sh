if [ $# -lt 2 ]
then
    echo "usage: ./flash_jwav.sh {left/right} {port}"
else
    echo "side: ${1}"
    echo "port: ${2}"
    # avrdude -p atmega32u4 -P $1 -c avr109 -U eeprom:w:"./quantum/split_common/eeprom-${2}hand.eep"
    avrdude -p atmega32u4 -P $2 -c avr109 -U eeprom:w:"./quantum/split_common/eeprom-${1}hand.eep"
    # echo "./quantum/split_common/eeprom-${2}hand.eep"
fi

