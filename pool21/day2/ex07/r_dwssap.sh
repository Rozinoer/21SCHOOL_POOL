FT_LINE1=7
FT_LINE2=15

cat /etc/passwd | grep -v '\#' | cut -d ':' -f1 | rev | sort -r | awk "FNR>=$FT_LINE1 && FNR<=$FT_LINE2" | paste -s -d "," - | sed 's/,/, /g' | sed 's/$/./'
