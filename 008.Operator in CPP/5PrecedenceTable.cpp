/*
    What will be the result below according to the precedence table.

    1. 2*3-48==5/4*6
    ans. 2*3 → 6
         5/4 → 1.25
         1.25*6 → 7.5
         6-48 → -42
         -42==7.5 → false

    2. 6<<2-4*8/2
    ans. 4*8 → 32
         32/2 → 16
         2-16 → -14
         6<<-14 → 6<<18 (since negative shifts are converted to positive by adding 32)
         6<<18 → 1572864

    3. 5>4<3/2-8%4+5
    ans. 3/2 → 1.5
         8%4 → 0
         1.5-0 → 1.5
         1.5+5 → 6.5
         5>4 → true (which is 1 in numeric context)
         1<6.5 → true

    4. 14-8+92>>2+70
    ans. 14-8 → 6
         6+92 → 98
         2+70 → 72
         98>>72 → 98>>8 (since shifts are modulo 32)
         98>>8 → 0
*/