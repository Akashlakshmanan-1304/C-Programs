#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct original{
char name[100];
int age;
char roll[100];
}o;
void calling(struct original *ptr){
printf("Name:%s",ptr->name);
printf("Age:%d",ptr->age);
printf("Roll Number:%s",ptr->roll);
}
int main(){
printf("Enter name:");
fgets(o.name,sizeof(o.name),stdin);
printf("Enter roll number:");
fgets(o.roll,sizeof(o.roll),stdin);
printf("ENter Age:");
scanf("%d",&o.age);
calling(&o);
}
