//String Ascending Dictionary
#include<stdio.h>
#include<string.h>
int main()
{
char a[100][50],t[100];
int n,i,j;

printf("Enter the n numbers:");
scanf("%d",&n);
printf("Enter the %d number of strings:\n",n);
for(i=0;i<n;i++)
{
scanf("%s",a[i]);
}
printf("Given strings:\n");
for(i=0;i<n;i++)
{
printf("\n%s\t",a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(strcmp(a[i],a[j])>0)
{
strcpy(t,a[i]);
strcpy(a[i],a[j]);
strcpy(a[j],t);
}
}
}
printf("\nString in Dicy=tionary Order:\n");
for(i=0;i<n;i++)
{
printf("\n%s\t",a[i]);
}
}
/*
Output:
akash1304@Akashs-MacBook-Air untitled % ./a.out      
Enter the n numbers:5
Enter the 5 number of strings:
apple
ornge
ant
addresss
zebra
Given strings:

apple	
ornge	
ant	
addresss	
zebra	
String in Dictionary Order:

addresss	
ant	
apple	
ornge	
zebra	%               
*/