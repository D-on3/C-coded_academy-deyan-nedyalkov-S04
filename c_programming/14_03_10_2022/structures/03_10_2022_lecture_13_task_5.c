/*Задача 5. Напишете произволна програма, 
която демонстрира уменията ви да боравите с указатели към структури. 
Нека декларираната от вас структура(и) съдържа указател към собствения си тип.
*/
/*Напишете програма, която да изчислява средния успех на 
всеки студент и целия курс, използвайки структури. Входните данни за 
студентите трябва да бъдат въведени от потребителя. 
Принтирайте резултатите за всеки студент поотделно, както и за целия курс.*/
#include <stdio.h>


typedef struct Student{
    char name[15];
    int first_grade;
    int second_grade;
    int third_grade;
    int forth_grade;
    int fifth_grade;
    int sixth_grade;
    double avarage_grade;
}Student; 


Student init_Student(){
    Student toReturn={};
    printf("Enter name of the student: \n");
    scanf("%s",toReturn.name);
    printf("Enter grades for the six disciplines:  \n");

    scanf("%d",&toReturn.first_grade);
    scanf("%d",&toReturn.second_grade);
    scanf("%d",&toReturn.third_grade);
    scanf("%d",&toReturn.forth_grade);
    scanf("%d",&toReturn.fifth_grade);
    scanf("%d",&toReturn.sixth_grade);
    return toReturn;
}

void calc_avarage(Student *student){
    student->avarage_grade = ((double)(student->first_grade +student->second_grade +student->third_grade + student->forth_grade + student->fifth_grade + student->sixth_grade )) / 6; 
}

double representForIndivdual(Student *student){
    printf("Name of the student: %s \n",student->name);
    printf("Grade 1: %d, Grade 2: %d, Grade 3: %d, Grade 4: %d,Grade 5: %d ,Grade 6: %d \n",student->first_grade,student->second_grade,student->third_grade,student->forth_grade,student->fifth_grade,student->sixth_grade);
    //calc for the avarage
    calc_avarage(student);
    printf("Avarage grade for the semester : %.2lf \n",student->avarage_grade);
}
//it can be done with argc (giving us the number of the arguments)
void avarageForAll(Student *first , Student *second,Student *third){

    printf("Students in course : %s %s %s \n",first->name,second->name,third->name);
    double avarageForAllStudents = (first->avarage_grade + second->avarage_grade + third->avarage_grade) / 3;
    printf("Avarage grade of all the students in the course : %.2lf \n",avarageForAllStudents);

}

// try with array of structs 
// with input for the students in the course
// call the init function inside for loop
// put the grades inside array also 
//Disciplines are not needed 
//Make the student struct nested in the course struct

int main(){

    Student pesho={};
    Student gosho={};
    Student n00n3={};

    pesho = init_Student();
    gosho = init_Student();
    n00n3 = init_Student();
    
    representForIndivdual(&pesho);
    representForIndivdual(&gosho);
    representForIndivdual(&n00n3);
    avarageForAll(&pesho,&gosho,&n00n3);
    return 0;
}