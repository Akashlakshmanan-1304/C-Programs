#include<stdio.h>
void Reverse(){
    char c;
scanf("%c",&c);
if(c!='\n')
{
    Reverse();
    printf("%c",c);
}
}
int main(){
  printf("Enter String:");
  Reverse(); 
}
/*Output:
akash1304@Akashs-MacBook-Air desktop % ./a.out                       
Enter String:Hello World
dlroW olleH%      
*/