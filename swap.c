#include<stdio.h>
int main()
{
char  employee_name[40];
int employ_id;
int age;
float height;
double salary;
char grade;
char gender;
printf("enter employee_name");
scanf("%[^\n]", employee_name);

printf("enter employ_id");
scanf("%d", &employ_id);

printf("Enter age:");
scanf("%d", &age);

printf("Enter height:");
scanf("%f", &height);

printf("Enter salary:");
scanf("%lf",&salary);

printf("Enter grade:");
scanf("%c", &grade);

printf("Employ name=%s\n", employ id);

printf("Employ Id=%d\n", employ id);

printf("\n---Details---\n");

printf("Age = %d\n",age);

printf("Height= %2f\n", height);

printf("Salary = %.2f\n", height);

printf("Salary = %.2f\n", salary);

printf("Grade=%c\n", grade);

printf("Gender=%c\n", gender);
return 0;
}
