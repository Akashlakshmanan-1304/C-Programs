#include<stdio.h>
int main(){
int rem,tot=0,i=0,n;
float n1;
printf("Enter a two digit number:");
scanf("%f",&n1);

if(-n1*10>100)
{
n=n1;

}
else
n=n1*10;

if(n>0){
while(n>0){
rem=n%10;
tot+=rem;
n=n/10;
i++;
}
}
else
{
rem=n%10;
n=n/10;
tot=n-rem;
}
printf("Answer:%d",tot);
//printf("\nFloat\n");

}
/*
Output:
Enter a two digit number:1234
Answer:10%        
*/