#include<stdio.h>
#include<conio.h>

void main()
{
    int day;
  
    printf("enter the week day : ");
    scanf("%d",&day);
    switch(day)
    {
        case 1:
        printf("Monday");
        break;
    
         case 2:
        printf("Tuesday");
        break;

         case 3:
        printf("Wednesday");
        break;

         case 4: 
        printf("Thursday");
        break;

         case 5:
        printf("friday");
        break;

         case 6:
        printf("saturday");
        break;

        default:
        printf("wrong number  : ");
    }
   
}