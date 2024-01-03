#include<stdio.h>
#include<stdlib.h>
//#include<conio.h>
int main()
{
int ch,n;
void perfect(int);
//clrscr();
do
{
printf("\n1.Perfect\n2.Exit\n");
printf("Enter your choice:");
scanf("%d",&ch);

switch(ch)
{
case 1:
printf("Enter a number:");
scanf("%d",&n);
perfect(n);
break;
case 2:
exit(0);
}
}while(ch!=3);
//getch();
}
void perfect(int n)
{
int i,s=0,m=0;
m=n;
for(i=0;i<n;i++)
{
if(n%i==0)
{
s=s+i;
}
}
if(m==s)
printf("Perfect");
else
printf("Not Perfect");
}
/*
Output:
akash1304@Akashs-MacBook-Air C % ./a.out     

1.Perfect
2.Exit
Enter your choice:1
Enter a number:12
Not Perfect
1.Perfect
2.Exit
Enter your choice:1
Enter a number:6
Perfect
1.Perfect
2.Exit
Enter your choice:2

*/