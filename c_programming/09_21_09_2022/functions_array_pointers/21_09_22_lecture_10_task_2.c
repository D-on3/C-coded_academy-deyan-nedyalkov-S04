/*Задача 2. Напишете функцията double atof(char *s), която преобразува стринг в число с десетична запетая.
*/

#include <stdio.h>
#include <math.h>

double atof(char *s)
{
    static double num = 0;
    static int count = 0;
 
    if (*s == '\0')
        return num / pow(10, count - 1);

    if ( *s == 46)// 46 ascii value
    {
        count++;
    }
    else
    {
      num = num * 10 + ( *s - 48);

      if (count > 0)
      {
        count++;
      }

    }

    return atof(s+1);
}

int main()
{
    printf("%lf", atof("3.14"));

    return 0;
}

