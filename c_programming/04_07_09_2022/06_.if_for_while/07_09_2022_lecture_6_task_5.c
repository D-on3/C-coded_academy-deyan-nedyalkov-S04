/*
5. Напишете C програма, която въвежда оценките по 5 предмета, като спазва следните
условия
If percentage >= 90% : Grade A
If percentage >= 80% : Grade B
If percentage >= 70% : Grade C
If percentage >= 60% : Grade D
If percentage >= 40% : Grade E
If percentage < 40% : Grade F
 * */
#include <stdio.h>


int main(){
    int iGrade=0, iGrade2=0 , iGrade3=0 , iGrade4=0 , iGrade5=0;
    printf("Enter the grades for the five subjects: \n");
    scanf("%d %d %d %d %d",&iGrade,&iGrade2,&iGrade3,&iGrade4,&iGrade5);
    int iSum = 0;
    iSum = iGrade + iGrade2 + iGrade3 + iGrade4 + iGrade5;
    iSum /= 5;
    if(iSum >= 90  ){printf("Grade A\n");}

    else if(iSum >= 80  ){printf("Grade B\n");}

    else if(iSum >= 70  ){printf("Grade C\n");}

    else if(iSum >= 60  ){printf("Grade D\n");}

    else if(iSum >= 40  ){printf("Grade E\n");}

    else if(iSum < 40  ){printf("Grade F\n");}


    return 0;



}