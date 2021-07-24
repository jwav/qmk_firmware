#!/bin/bash
cp ~/Downloads/vee_crkbd.json ./
qmk json2c ./vee_crkbd.json -o generated_keymap.h
