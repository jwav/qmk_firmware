#!/bin/bash
cp ~/Downloads/vee_lily.json ./
qmk json2c ./vee_lily.json -o generated_keymap.h
