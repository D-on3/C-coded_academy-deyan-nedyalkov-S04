/*Задача 10*.  Представете служителите във фирма в 
структура с членове: пореден номер, име, презиме, фамилия, позиция, трудов стаж в 
години, заплата в лева, указател към структурата, описващ неговия началник. 
Напишете програма, която въвежда 10 служителя, които се съхраняват в масив от 
описаните структури. Въвеждането на служителите може да стане на два паса, 
първо въвеждане на всички данни без указателя към началника и на втори пас,
 указване на всеки служител кой е неговият началник.
*/
#include<stdio.h>
#define size 10

typedef struct Company co;

struct Boss{
    char firstName[15];
    char sirName[15];    

    
};
typedef struct Boss boss;

struct Employee{
    char firstName[15];
    char middleName[15];
    char sirName[15];    
    char position[15];
    int id;
    int workingPeriod;
    int salary;
    boss *currentBoss;

};
typedef struct Employee emp;

emp init_Employee(void){

    emp employee ={};
    printf("Enter employee id: \n");
    scanf("%d",&employee.id);
    printf("Enter first name: \n");
    scanf("%s",employee.firstName);
    printf("Enter middle name: \n");
    scanf("%s",employee.middleName);
    printf("Enter sirname: \n");
    scanf("%s",employee.sirName);
    printf("Enter position: \n");
    scanf("%s",employee.position);
    printf("Enter working expirience in years \n");
    scanf("%d",&employee.workingPeriod);
    printf("Enter salary: \n");
    scanf("%d",&employee.salary);
    return employee;
}


void init_Employee_Boss(emp *currentEmployee){

    printf("Enter employee boss's first name : \n");
    scanf("%s",currentEmployee->currentBoss->firstName);
    printf("Enter employee boss's first name : \n");
    scanf("%s",currentEmployee->currentBoss->sirName);
}


void represent_Employees_and_bosses(emp *employee){

    printf("Employee name full name : %s %s %s | With boss: %s %s",employee->firstName,employee->middleName, employee->sirName,employee->currentBoss->firstName,employee->currentBoss->sirName);

}


int main(){
    emp company[size]= {};

    for(int i = 0;i < size;i++){
        company[i]= init_Employee();}
    for(int i = 0;i < size;i++){
        init_Employee_Boss(&company[i]);}
    for(int i = 0;i < size;i++){
        represent_Employees_and_bosses(&company[i]);
        }




    

    return 0;
}



