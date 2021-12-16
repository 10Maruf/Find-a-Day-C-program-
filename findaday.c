#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
 int main()
{
   system("color 0d");
    int year,month,day;
    int x,a,b,s;
    
    printf("Enter a year(1900 to 2099):-");
    scanf("%d",&year);
    x=year-1900;
    a=x/4;
     printf("Enter a month:-");
    scanf("%d",&month);
    if (month==1)
    {
        b=1;
    }
    else if (month==2)
    {
        b=4;
    }
     else if (month==3)
    {
        b=4;
    }
 else if (month==4)
    {
        b=0;
    }
     else if (month==5)
    {
        b=2;
    }
 else if (month==6)
    {
        b=5;
    }
     else if (month==7)
    {
        b=0;
    }
     else if (month==8)
    {
        b=3;
    }
     else if (month==9)
    {
        b=6;
    }
     else if (month==10)
    {
        b=1;
    }
     else if (month==11)
    {
        b=4;
    }
     else if (month==12)
    {
        b=6;
    }
    else
    {
    printf("Invaild Month..!!\n Try again!");
    exit(0);
    }
     printf("Enter a day:-");
    scanf("%d",&day);
    if (day>31||(month==2&&day>29))
    {
        printf("Invaild Day..!!\n Try Again!!!");
        exit(0);
    }
     if ((x%4==0)&&(month==1||month==2))
     {
        s=(x+a+b+day)%7;
        s=s-1;
     }
     else
    s=(x+a+b+day)%7;
switch (s)
{
case 0:
   printf("It's Saturday.\nHave a nice day.");
    break;
    case 1:
   printf("It's Sunday.\nHave a nice day.");
    break;
    case 2:
   printf("It's Monday.\nHave a nice day.");
    break;
    case 3:
   printf("It's Tuesday.\nHave a nice day.");
    break;
    case 4:
   printf("It's Wednesday.\nHave a nice day.");
    break;
    case 5:
   printf("It's Thursday.\nHave a nice day.");
    break;
    case 6:
   printf("It's Friday.\nHave a nice day.");
    break;
}
 getch();
    
     
}
