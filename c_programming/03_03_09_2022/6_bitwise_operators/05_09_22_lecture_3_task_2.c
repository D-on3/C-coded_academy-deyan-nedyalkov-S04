/*
2.За да направим на 0 съответния бит на n-та позиция, трябва да
използваме побитово &
int a = 35; в двоичен вид това е числото 0010 0011
Ако искаме да променим единицата на пета позиция, правим маска
0010 0000, като шифтнем 1 << 5; пъти. След това приложим побитово
отрицание ~ на маската, за да получим 1101 111. След това, като приложим
побитов оператор И, получаваме от 1 нула на 5-та позиция:
0010 0011
&
1101 1111
= 0000 0011
*/
