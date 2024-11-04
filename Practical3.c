/*An electricity board charges the following rates for the use of electricity:
 for the first 200 units 80 paise per unit:for the next 100 units 90 paise per unit: 
 beyond 300 units Rs 1 per unit. All users are charged a minimum of Rs. 100 as meter charge.
  If the total amount is more than Rs 400,then an additional surcharge of 15% of total amount is charged.
   Write a program to read the name of the user,number of units consumed and print out the charges.
   */

#include<stdio.h>
#include<string.h>
int main(){

float totalAmt;
Char name[20];
int unit;

printf("Enter your name:");
scanf("%s", &name);
printf("Enter total units:");
scanf("%d",&unit);
 
if(unit<=200){
totalAmt= unit*0.8+100;
}
else if(unit<=300){
totalAmt= 200*0.8+ (unit-200)*0.9+100;
}
else{
  totalAmt= 200*0.8 + 100*0.9+ ((unit-300)*1) +100;
}

if(totalAmt>400){
totalAmt= totalAmt+ (0.15*totalAmt);
}

printf("The total Amt is:", totalAmt);

}