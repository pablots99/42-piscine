cat /etc/passwd | sed -e '/^#/d' | cut -d':' -f1 | sed -n 'n;p' | rev | sort -r | awk "NR >= $FT_LINE1 && NR <= $FT_LINE2" | tr '\n' ' ' | sed 's/ /, /g' | sed 's/\(.*\), /\1./' | tr -d '\n'
