reset

set term gif animate delay 1 size 720,720
set output "teste.gif"
set xrange [-20000:20000]
set yrange [-20000:20000]

do for [i=0:500] {plot 'orbita.dat' using ($1):($2) every ::i::i with points pt 7 ps 6 lc 5, 'orbita.dat' using ($3):($4) every ::i::i with points pt 7 ps 2 lc 14}
