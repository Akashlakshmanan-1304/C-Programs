#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Bank{
char name[20];
long int acc;
float balance;
}b[200];
void add(int i){
printf("Enter name:");
    scanf("%s",b[i].name);
    printf("Enter Account Number:");
    scanf("%ld",&b[i].acc);
    printf("Enter Balance:");
    scanf("%f",&b[i].balance);
    printf("Data Added Successfully");
}
void balance(int i){
int j;
printf("Name\tAccount No\tBalance\n");
for(j=0;j<i;j++){
    if(b[j].balance<100)
    {
        printf("%s\t%ld\t\t%f\n",b[j].name,b[j].acc,b[j].balance);
    }
}
}
void deposit(int i){
int ch,j;
long int accno;
float am;
printf("Enter 0 for Withdrawal and 1 for Deposit:");
scanf("%d",&ch);
if(ch==1||ch==0){
    switch(ch){
        case 0:
        printf("Enter Account Number:");
        scanf("%ld",&accno);
        printf("Enter Amount:");
        scanf("%f",&am);
        for(j=0;j<i;j++){
            if(accno==b[j].acc){
                b[j].balance=b[j].balance-am;
                printf("\nClosing Available Balance:%.2f",b[j].balance);
            }
        }
        break;
        case 1:
        printf("Enter Account Number:");
        scanf("%ld",&accno);
        printf("Enter Amount:");
        scanf("%f",&am);
        for(j=0;j<i;j++){
            if(accno==b[j].acc){
                b[j].balance=b[j].balance+am;
                printf("\nClosing Available Balance:%.2f",b[j].balance);
            }
        }
    }
}
else
{
    printf("Wrong Input");
    deposit(i);
}
}
int main(){
int ch,i=0;
do{
    printf("\n1.Add\n2.Balance less than 100\n3.Withdrawal/Deposit\n4.Exit\n");
printf("\nEnter your choice:");
scanf("%d",&ch);
switch(ch){
    case 1:
    add(i);
    i++;
    break;
    case 2:
    balance(i);
    break;
    case 3:
    deposit(i);
    break;
    case 4:
    exit(0);
}
}while(ch!=4);
}
/*
OUTPUT:
akash1304@Akashs-MacBook-Air c % ./a.out                

1.Add
2.Balance less than 100
3.Withdrawal/Deposit
4.Exit

Enter your choice:1
Enter name:Akash
Enter Account Number:0778010
Enter Balance:5789
Data Added Successfully
1.Add
2.Balance less than 100
3.Withdrawal/Deposit
4.Exit

Enter your choice:1
Enter name:Lakshmanan
Enter Account Number:987654 
Enter Balance:30 
Data Added Successfully
1.Add
2.Balance less than 100
3.Withdrawal/Deposit
4.Exit

Enter your choice:2
Name	Account No	Balance
Lakshmanan	987654		30.000000

1.Add
2.Balance less than 100
3.Withdrawal/Deposit
4.Exit

Enter your choice:3
Enter 0 for Withdrawal and 1 for Deposit:0
Enter Account Number:0778010
Enter Amount:789

Closing Available Balance:5000.00
1.Add
2.Balance less than 100
3.Withdrawal/Deposit
4.Exit

Enter your choice:3
Enter 0 for Withdrawal and 1 for Deposit:1
Enter Account Number:987654
Enter Amount:1000

Closing Available Balance:1030.00
1.Add
2.Balance less than 100
3.Withdrawal/Deposit
4.Exit

Enter your choice:2
Name	Account No	Balance

1.Add
2.Balance less than 100
3.Withdrawal/Deposit
4.Exit

Enter your choice:4
*/