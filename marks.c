#include<stdio.h>
int main() {
int marks;
printf("Enter marks : ");
scanf("%d", &marks) ;

if(marks >=91) {
if(marks <=100) {
printf("A grade\n");
}
}
else if(marks >=71) {
if(marks <= 90) {
printf("B grade\n");
}
}
else if(marks >= 51) {
if(marks <= 70) {
printf("C grade\n");
}
}
else {
printf("Fail\n");
}
return 0;
}
