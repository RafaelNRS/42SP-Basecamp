#!/usr/bin/bash
echo "obase=13; ibase=5; $FT_NBR1 + $FT_NBR2" | tr "'m" "0" | sed 's/\\/1/g' | tr "r" "1" | tr '\"d' '2' | tr "?o" "3" | tr "\!c" "4" | sed 's/3base/obase/'  | bc | tr "0123456789ABC" "gtaio\ luSnemf"
