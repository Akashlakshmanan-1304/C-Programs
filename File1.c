#include<stdio.h>
#include<stdlib.h>
int main(){
    int num;
    FILE *fptr;
    fptr=fopen("/Users/akash1304/Documents/Training/File.txt","r");
    if(fptr==NULL){
    printf("Error");
    exit(1);
    }
    //printf("Enter Number:");
    //scanf("%d",&num);
    fscanf(fptr,"%d",&num);
    printf("Enter Number:%d",num);
    fclose(fptr);
    return 0;
    }