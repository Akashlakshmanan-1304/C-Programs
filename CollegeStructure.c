#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct College{
    char name[20];
    int age;
    int roll;
    int year;
    long int admission_number;
}s[45];
void add(int i){
printf("Enter name:");
    scanf("%s",s[i].name);
    printf("Enter Age:");
    scanf("%d",&s[i].age);
    printf("Enter Roll Number:");
    scanf("%d",&s[i].roll);
    printf("Enter Year of Joining:");
    scanf("%d",&s[i].year);
    printf("Enter Admission number:");
    scanf("%li",&s[i].admission_number);
    printf("\nData Added Successfully\n");
    printf("\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
}
void searchroll(int i,int rolll){
    
    int j;

for(j=0;j<i;j++)
{
if(s[j].roll==rolll){    
printf("Name:%s\nAge:%d\nYear:%d\nAdmisiion Number:%ld\n",s[j].name,s[j].age,s[j].year,s[j].admission_number);
}
}
}
void yearr(int i,int year){
    int j;

printf("-------------------------------------\n");
printf("Name\tAge\tRoll\tAdmisiion Number\n");
printf("-------------------------------------\n");
for(j=0;j<i;j++)
{
if(s[j].year==year){    
printf("%s\t%d\t%d\t%ld\n",s[j].name,s[j].age,s[j].roll,s[j].admission_number);
}
}
}
int main(){
int ch,i=0,year,rolll;
do{
printf("\n1.Add\n2.Search roll number\n3.Search year\n4.Exit\n");
printf("Enter your choice:");
scanf("%d",&ch);
switch(ch){
case 1:{
   add(i); 
i++;
break;
}
case 2:
{
    printf("Enter search Roll Number:");
scanf("%d",&rolll);
searchroll(i,rolll);
break;
}
case 3:
{
printf("Enter search Year:");
scanf("%d",&year);
yearr(i,year);
break;
}
case 4:{
exit(0);
break;
}
}
}while(ch!=4);
}
/*
Output:
akash1304@Akashs-MacBook-Air c % ./a.out              

1.Add
2.Search roll number
3.Search year
4.Exit
Enter your choice:1
Enter name:Akash
Enter Age:19
Enter Roll Number:8
Enter Year of Joining:2020
Enter Admission number:123

Data Added Successfully

-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

1.Add
2.Search roll number
3.Search year
4.Exit
Enter your choice:1
Enter name:Eric
Enter Age:21
Enter Roll Number:1
Enter Year of Joining:2018
Enter Admission number:134

Data Added Successfully

-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

1.Add
2.Search roll number
3.Search year
4.Exit
Enter your choice:1
Enter name:Ashwin
Enter Age:22
Enter Roll Number:2
Enter Year of Joining:2018
Enter Admission number:135

Data Added Successfully

-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

1.Add
2.Search roll number
3.Search year
4.Exit
Enter your choice:2
Enter search Roll Number:2
Name:Ashwin
Age:22
Year:2018
Admisiion Number:135

1.Add
2.Search roll number
3.Search year
4.Exit
Enter your choice:3
Enter search Year:2018
-------------------------------------
Name	Age	Roll	Admisiion Number
-------------------------------------
Eric	21	1	    134
Ashwin	22	2	    135

1.Add
2.Search roll number
3.Search year
4.Exit
Enter your choice:4
*/