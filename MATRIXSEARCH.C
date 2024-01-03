#include<stdio.h>
//#include<conio.h>
int main()
{
int i,j,r,c,a[10][10],s;
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
printf("Enter search number:");
scanf("%d",&s);
printf("The given matrix:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",a[i][j]);

}
printf("\n");
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if(s==a[i][j])
{
printf("Position: %d,%d",i+1,j=1);
}
}
}
//getch();
}
/*Output:
akash1304@Akashs-MacBook-Air old % ./a.out      
Enter the number of rows:3
Enter the number of columns:3
Enter the 9 elements:
1
2
3
4
5
6
7
8
9
Enter search number:4
The given matrix:
1	2	3	
4	5	6	
7	8	9	
Position: 2,1%             
*/

