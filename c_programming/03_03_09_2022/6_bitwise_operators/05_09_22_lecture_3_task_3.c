/*
3.За да обърнем n-тия bit на променливата а на 1, трябва да
използваме побитово XOR
int a = 15; в двоичен вид това е числото 0000 1111
Ако искаме да обърнем нулата на пета позиция, правим маска
0010 0000, като шифтнем 1 << 5; пъти. След това прилагаме
побитово XOR на променливата и маската:
0000 1111
^
0010 0000
= 0010 1111
*/
