#include<stdio.h>
int main(){
    float salary,TA,DA,HRA,total_salary;
printf("Enter base salary : ");
scanf("%f",&salary);
printf("Enter HRA : ");
scanf("%f",&HRA);
printf("Enter base TA : ");
scanf("%f",&TA);
printf("Enter base DA : ");
scanf("%f",&DA);
total_salary=salary+HRA+TA+DA;
printf("Total salary is : %.2f",total_salary);
}
