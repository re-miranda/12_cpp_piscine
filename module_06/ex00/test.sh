./exn 0 nan 42.0f
./exn {-2..256} | grep -e char -e input
./exn INF NaN 0x7fffffff -inff -inf +inff +inf nan
./exn c a 0 -42 42 0.0f -4.2f 4.2f -inff +inff -inf +inf nan
