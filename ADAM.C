 #include<stdio.h>
 int main()
 {
 int n,s1=0,s2=0,s3=0,s4=0,r,s=0,temp;
 //clrscr();
 printf("enter num:");
 scanf("%d",&n);
 temp=n;
 s1=n*n;
 while(n>0)
 {r=n%10;
 s2=(s2*10)+r;
 n=n/10;
 }
 printf("Reverse:%d\n",s2);

 s3=s2*s2;
 printf("Square:%d\n",s3);
 while(s3>0)
 {r=s3%10;
 s4=(s4*10)+r;
 s3=s3/10;
 }
 printf("Reverse Square:%d\n",s4);
 if(s4==s1)
 printf("%d is adam",temp);
 else
 printf("%d is not adam",temp);
 //getch();
 }
 /*Output:
akash1304@Akashs-MacBook-Air untitled % ./a.out  
enter num:13
Reverse:31
Square:961
Reverse Square:169
13 is adam%        
 */