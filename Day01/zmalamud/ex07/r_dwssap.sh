cat /etc/passwd | sed '/^#/d' | cut -d ':' -f 1 | awk '{if(NR %2)print}' | rev | sort -r | tr "\n" "," | sed 's/,/, /g' | rev | sed 's/,/./' | rev
