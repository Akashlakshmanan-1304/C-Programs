#include<stdio.h>
#include<stdlib.h>
int add(int a[],int i,int n){
 //   printf("A:%d,I:%d,N:%d",a[i],i,n);
    if(i<n){
        
    return (a[i]+add(a,i+1,n));
    }
    else 
    return 0;
}
int main(){
    int n,i=0,a[10],sum;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Enter %d numbers:",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    i=0;
    sum=add(a,i,n);
    printf("Sum:%d",sum);
    return 0;
}
/*Output
akash1304@Akashs-MacBook-Air C % ./a.out        
Enter a number:5
Enter 5 numbers:1
2
3
4
5
Sum:15% 
*/
