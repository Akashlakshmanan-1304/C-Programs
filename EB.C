#include<stdio.h>
//#include<conio.h>
int main()
{
int sno;
float lmr,amt,netamt,cmr,unit,tax,disc;
char name[50];
//clrscr();
printf("Enter the serial number:");
scanf("%d",&sno);
printf("Enter customer name:");
scanf("%s",name);
printf("Enter last month Units:");
scanf("%f",&lmr);
printf("Enter current month Units:");
scanf("%f",&cmr);
if(lmr>cmr)
unit=lmr-cmr;
else if(lmr<cmr)
unit=cmr-lmr;
else
unit=cmr;
if(unit<=100)
amt=unit*0.70;
else if((unit>100)&&(unit>=200))
amt=70+(unit-100)*1.00;
else if((unit>200)&&(unit>=500))
amt=70+100+(unit-200)*1.50;
else if((unit>500)&&(unit>=1000))
amt=70+100+450+(unit-500)*1.70;
else
amt=unit*1.40;
tax=amt*7/100;
disc=amt*13/100;
netamt=amt+tax-disc;
//clrscr();
printf("\n------------------------------\n");
printf("\tElectric bill");
printf("\n------------------------------\n");
printf("\nSerial no:%d",sno);
printf("\nCustomer name:%s",name);
printf("\nLast month Units:%.2f",lmr);
printf("\nCurrent month Units:%.2f",cmr);
printf("\nUnit:%.2f",unit);
printf("\nAmount:%.2f",amt);
printf("\nTax:%.2f",tax);
printf("\nDiscount:%.2f",disc);
printf("\nNet amount:%.2f",netamt);
printf("\n------------------------------\n");
//getch();
}
/*
Output:
akash1304@Akashs-MacBook-Air old % ./a.out
Enter the serial number:12345
Enter customer name:Akash
Enter last month Units:230
Enter current month Units:260

------------------------------
	Electric bill
------------------------------

Serial no:12345
Customer name:Akash
Last month Units:230.00
Current month Units:260.00
Unit:30.00
Amount:21.00
Tax:1.47
Discount:2.73
Net amount:19.74
------------------------------
*/
