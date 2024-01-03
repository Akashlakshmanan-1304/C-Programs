#include<stdio.h>
#include<stdlib.h>
int main()
{
int ch,n;
void arm(int);
//clrscr();
do
{
printf("\n1.Armstrong\n2.Exit\n");
printf("Enter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("Enter a number:");
scanf("%d",&n);
arm(n);
break;
case 2:
exit(0);
break;
}
}while(ch<3);
//getch();
}
void arm(int n)
{
int r=0,s=0,m=0;
m=n;
while(n>0)
{
r=n%10;
s=s+(r*r*r);
n=n/10;
}
if(m==s)
printf("Armstrong");
else
printf("Not Armstrong");
}
/*
Output:
akash1304@Akashs-MacBook-Air untitled % ./a.out      

1.Armstrong
2.Exit
Enter your choice:1
Enter a number:153
Armstrong
1.Armstrong
2.Exit
Enter your choice:1
Enter a number:123
Not Armstrong
1.Armstrong
2.Exit
Enter your choice:2
*/