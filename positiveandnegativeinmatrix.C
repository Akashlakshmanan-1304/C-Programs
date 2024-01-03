#include<stdio.h>
//#include<conio.h>
int main()
{
int i,j,r,c,a[10][10],p=0,ne=0;
//clrscr();
printf("Enter the number of rows:");
scanf("%d",&r);
printf("Enter the number of columns:");
scanf("%d",&c);
printf("Enter the %d elements:\n",r*c);
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("The given matrix:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",a[i][j]);
if(a[i][j]<0)
{
ne++;
}
else
p++;
}
printf("\n");
}
printf("\nNegative numbers:%d",ne);
printf("\nPositive numbers:%d",p);
//getch();
}
/*
Output:
akash1304@Akashs-MacBook-Air C % ./a.out                         
Enter the number of rows:3
Enter the number of columns:3
Enter the 9 elements:
1
-2
3
-4
5
6
-7
8
9
The given matrix:
1	-2	3	
-4	5	6	
-7	8	9	

Negative numbers:3
Positive numbers:6
*/