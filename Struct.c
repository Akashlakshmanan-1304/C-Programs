#include <stdio.h>
#include<stdlib.h>
struct Student{
char name[20];
int age;
char roll[20];
}s[20];
int main() {
int n,i;
printf("Enter number of Students:");
scanf("%d",&n);
getchar();
for(i=0;i<n;i++){
printf("Enter Student %d roll number:",i+1);
fgets(s[i].roll,sizeof(s[i].roll),stdin);
 printf("Enter Student %d name:",i+1);
fgets(s[i].name,sizeof(s[i].name),stdin);
printf("En1ter Student %d age:",i+1);
scanf("%d",&s[i].age);
getchar();
}
printf("Given data\n");
for(i=0;i<n;i++){
printf("Student %d\n",i+1);
printf("Student %d Name       :%s\n",i+1,s[i].name);
printf("Student %d roll number:%s\n",i+1,s[i].roll);
printf("Enter Student %d age  :%d\n",i+1,s[i].age);
}
return 0;
}
/*
Output:
akash1304@Akashs-MacBook-Air c % ./a.out    
Enter number of Students:3
Enter Student 1 roll number:08
Enter Student 1 name:Akash
En1ter Student 1 age:19
Enter Student 2 roll number:18
Enter Student 2 name:Ashwin
En1ter Student 2 age:19
Enter Student 3 roll number:32
Enter Student 3 name:GokulRaj
En1ter Student 3 age:19

Given data:
Student 1
Student 1 Name       :Akash
Student 1 roll number:08
Enter Student 1 age  :19

Student 2
Student 2 Name       :Ashwin
Student 2 roll number:18
Enter Student 2 age  :19

Student 3
Student 3 Name       :GokulRaj
Student 3 roll number:32
Enter Student 3 age  :19
*/