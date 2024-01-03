#include<stdio.h>
//#include<conio.h>
int main()
{
int n,s;
int series(int);
//clrscr();
printf("Enter Limit:");
scanf("%d",&n);
printf("Odd Numbers:\n");
s=series(n);
printf("\nSum=%d",s);
//getch();
}
int series(int n)
{
int s=0,i;
for(i=1;i<=n;i++)
{
if(i%2!=0)
{
s=s+i;
printf("%d\n",i);
}
}
return(s);
}
/*
Output:
akash1304@Akashs-MacBook-Air C % ./a.out                            
Enter Limit:20
Odd Numbers:
1
3
5
7
9
11
13
15
17
19

Sum=100
*/