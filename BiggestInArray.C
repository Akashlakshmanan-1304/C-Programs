#include<stdio.h>

int main()
{
int n,i,b,a[100];

printf("Enter the no. of elements:");
scanf("%d",&n);
printf("Enter %d numbers:\n",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

b=a[0];
for(i=0;i<n;i++)
{
if(b<a[i])
b=a[i];
}
printf("Biggest number:%d",b);
return 0;
}
/*Output
akash1304@Akashs-MacBook-Air old % ./a.out      
Enter the no. of elements:5
Enter 5 numbers:
2
7
3
1
9
Biggest number:9%    
*/