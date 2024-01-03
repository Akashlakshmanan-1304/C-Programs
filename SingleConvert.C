#include<stdio.h>
//#include<conio.h>
int main()
{
int s=0,r=0,n,i,a;
//clrscr();
printf("Enter n:");
scanf("%d",&n);
add:
while(n>0)
{
r=n%10;
s=s+r;
n=n/10;
}
if(s>9)
{
n=s;
s=0;
goto add;
}
printf("Output=%d",s);
//getch();
}
/*Output:
akash1304@Akashs-MacBook-Air old % ./a.out  
Enter n:199
Single digit by sum=1%                                                          akash1304@Akashs-MacBook-Air old % ./a.out
Enter n:239 
Single digit by sum=5%       
Logic:
given:199
1+9+9=19
19>9
1+9=10
10>9
1+0=1
1<9
ans:1
*/