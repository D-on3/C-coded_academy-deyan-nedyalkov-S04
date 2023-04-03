/*Задача 6. Напишете програма, която да изчислява средния успех на 
всеки студент и целия курс, използвайки структури. Входните данни за 
студентите трябва да бъдат въведени от потребителя. 
Принтирайте резултатите за всеки студент поотделно, както и за целия курс.*/
#include <stdio.h>
#define size 3


typedef struct CourseGrades{
    int first_grade;
    int second_grade;
    int third_grade;
    int forth_grade;
    int fifth_grade;
    int sixth_grade;
}Course;


typedef struct Student{
    char name[15];
    int facNum;
    double avarage_grade;
    Course iD;
}Student; 

typedef Student students[size];

Student init_Student(){
    Student toReturn= {};

    printf("Enter name of the student: \n");
    scanf("%s",toReturn.name);
    
 printf("Enter grades for the six disciplines:  \n");

    scanf("%d",&toReturn.iD.first_grade);
    scanf("%d",&toReturn.iD.second_grade);
    scanf("%d",&toReturn.iD.third_grade);
    scanf("%d",&toReturn.iD.forth_grade);
    scanf("%d",&toReturn.iD.fifth_grade);
    scanf("%d",&toReturn.iD.sixth_grade);
    return toReturn;
}

void calc_avarage(Student *student){
    student->avarage_grade = ((double)(student->iD.first_grade +student->iD.second_grade +student->iD.third_grade + student->iD.forth_grade + student->iD.fifth_grade + student->iD.sixth_grade )) / 6; 
}

double representForIndivdual(Student *student){
    printf("Name of the student: %s \n",student->name);
    printf("Grade 1: %d, Grade 2: %d, Grade 3: %d, Grade 4: %d,Grade 5: %d ,Grade 6: %d \n",student->iD.first_grade,student->iD.second_grade,student->iD.third_grade,student->iD.forth_grade,student->iD.fifth_grade,student->iD.sixth_grade);
    //calc for the avarage
    calc_avarage(student);
    printf("Avarage grade for the semester : %.2lf \n",student->avarage_grade);
}

void avarageForAll(Student first, Student second, Student third){
    double avarageForAllStudents = 0;
    printf("Students in course : ");
    Student arr[size]={first,second,third}; 
    for(int i =0;i<size;i++){
            printf(" %s ,",arr[i].name);
            avarageForAllStudents += arr[i].avarage_grade;
    }
    printf(".");
    avarageForAllStudents /= 3;

    printf("Avarage grade of all the students in the course : %.2lf \n",avarageForAllStudents);

}


int main(){
    Student pesho,gosho,n00n3={};
    Student arr[size]={pesho,gosho,n00n3}; 
    
for(int i = 0;i <size;i++){
    arr[i] = init_Student();
    representForIndivdual(&arr[i]);
}



    avarageForAll(arr[0],arr[1],arr[2]);
    
    return 0;
}