#include<stdio.h>
#include<conio.h>

void main()
{
int ch;
clrscr(); 
printf(“Enter number of week’s day(1-7):”);
scanf(“%d”,&ch);

switch(ch)
{
case 1: printf(“Sunday”);
        printf("False");
break;
case 2: printf(“nMonday”);
        printf("True");
break;
case 3: printf(“nTuesday”);
        printf("True");
break;
case 4: printf(“nWednesday”);
        printf("True");
break;
case 5: printf(“nThursday”);
        printf("True");
break;
case 6: printf(“nFriday”);
        printf("true");
break;
case 7: printf(“nSaturday”);
        printf("False");
break;
}
getch(); //to stop the screen
}


