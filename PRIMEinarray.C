#include<stdio.h>
//#include<conio.h>
int main()
{
int a[10],n,c=0,i,j;
//clrscr();
printf("Enter number of elements:");
scanf("%d",&n);
printf("Enter %d elements:\n",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Prime Numbers in Given Array:");
for(i=0;i<n;i++)
{
c=0;
for(j=2;j<a[i];j++)
{
if(a[i]%j==0)
c++;
}
if(c==0){
if(a[i]!=1)
printf("%d ",a[i]);

}
}
//getch();
}
/*Output:
Enter number of elements:5
Enter 5 elements:
2
1
4
5
8
Prime Numbers in Given Array:2 5    
*/