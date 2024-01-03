#include<stdio.h>
struct name{
    char name[20];
    int age;
}n;
int main(){
struct name *ptr;
ptr=&n;
printf("Enter name:");
scanf("%s",n.name);
printf("Enter age:");
scanf("%d",&n.age);
printf("Name:%s\nAge:%d",ptr->name,ptr->age);
}
/*Output:
akash1304@Akashs-MacBook-Air c % ./a.out              
Enter name:Akash
Enter age:19
Name:Akash
Age:19%   
*/