#!/bin/sh

cat /etc/passwd | cut -d "#" -f1 | grep . | cut -d ":" -f1 | sed -n 'n;p' |
rev | sort -r |  sed -n -e ${FT_LINE1},${FT_LINE2}p | tr '\n' ',' | sed 's/,/, /g' | sed 's/, $/./' | tr -d '\n'
