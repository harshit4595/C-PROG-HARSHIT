#include<stdio.h>
int main() {
int choice;
printf("Enter choice from 1 to 4 : ");
scanf("%d", &choice);

switch(choice) {
case 1:
printf("Red\n");
break;
case 2:
printf("Yellow\n");
break;
case 3:
printf("Green\n");
break;
case 4:
printf("Black\n");
break;
default:
printf("Bad choice\n");
}
return 0;
}

