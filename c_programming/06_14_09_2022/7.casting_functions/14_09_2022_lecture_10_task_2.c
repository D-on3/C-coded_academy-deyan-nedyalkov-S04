#include <stdio.h>

/*
Когато присвояваме по-малък тип към по-голям тип имаме автоматично
преобразуване – размерът се вдига без да имаме загуба на данни:

*/

#include <stdio.h>
main() {
 int i = 17;
 char c = 'c'; /* ascii value is 99 */
 int sum;
 sum = i + c;
 printf("Value of sum : %d\n", sum );
 return 0;
}