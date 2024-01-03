#include<stdio.h>
//#include<conio.h>
int main()
{
int i,j,r,c,a[10][10],rtol=0,ltor=0;
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
int temp=c;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",a[i][j]);
if(j==temp-1)
{
rtol+=a[i][j];;
temp--;
}
if(i==j){
    ltor+=a[i][j];
}
}
printf("\n");
}
printf("Left to Right Diagonal Sum:%d\n",ltor);
printf("Right to Left Diagonal Sum:%d\n",rtol);
//getch();
}
/*Output:
akash1304@Akashs-MacBook-Air old % ./a.out
Enter the number of rows:3
Enter the number of columns:3
Enter the 9 elements:
1
9
3
6
2
5
2
8 
9
The given matrix:
1	9	3	
6	2	5	
2	8	9	
Left to Right Diagonal Sum:12
Right to Left Diagonal Sum:7

*/

