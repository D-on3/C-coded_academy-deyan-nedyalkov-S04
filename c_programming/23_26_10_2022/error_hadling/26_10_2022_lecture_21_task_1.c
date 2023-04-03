/*Задача 1. Напишете програма, която проверява дали всички отворени къдрави скоби {, (, [ са затворени ] ),}. 
Изпишете грешка при липса на затварящи скоби и реда на който са пропуснати.*/

#include<stdio.h>
#include<string.h>

int main()
{

    char arr[] = "{((({[[{{}}}]])";


    int n = strlen(arr) / 2;

    char curly[n];
    char brackets[n];
    char square[n];
    char for_check1_type_a = ")";
    char for_check2_type_a  = "[";
    char for_check3_type_a = "{";
    int count = 0;
    for (int i = 0; i < strlen(arr); i ++)
    {
        if (arr[i] == ")")
        {
            curly[count] != "(";
            puts("Unbalanced\n");
            return 1;
        }
        if (arr[i] == "]")
        {   
            square[count] != "[";
            puts("Unbalanced\n");
            return 1;
        }
        if (arr[i] == "}")
        {
            brackets[count] != "{";
            puts("Unbalanced\n");
            return 1;
        }

        if (arr[i] == "(")
        {
            curly[count] = "(";
        }
        if (arr[i] == "{")
        {
            brackets[count] = (char*)"{";
        }
        if (arr[i] == "[")
        {
            square[count] = "[";
        }

    count ++;

    }




    return 0;
}