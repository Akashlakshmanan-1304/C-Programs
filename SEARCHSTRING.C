#include<stdio.h>
//#include<conio.h>
#include<string.h>
int main()
{
char a[100][50],s[100],r[100];
int n,i;
//clrscr();
printf("Enter the number of Strings:");
scanf("%d",&n);
printf("Enter the %d number of Strings:\n",n);
for(i=0;i<n;i++)
{
scanf("%s",a[i]);
}
printf("Enter search string:\n");
scanf("%s",s);
printf("Enter replace string:\n");
scanf("%s",r);
printf("Given strings:\n");
for(i=0;i<n;i++)
{
printf("\n%s\t",a[i]);
if(strcmp(s,a[i])==0)
strcpy(a[i],r);
}
printf("\nString after replacement:\n");
for(i=0;i<n;i++)
{
printf("\n%s",a[i]);
}
}
/*
Output:
akash1304@Akashs-MacBook-Air c % ./a.out          
Enter the number of Strings:5
Enter the 5 number of Strings:
Apple
Orange
Banana
Carrot
Mango
Enter search string:
Carrot
Enter replace string:
Kiwi
Given strings:

Apple	
Orange	
Banana	
Carrot	
Mango	
String after replacement:

Apple
Orange
Banana
Kiwi
Mango
*/