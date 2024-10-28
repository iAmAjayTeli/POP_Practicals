#include<stdio.h>
#include<string.h>

int main(){

float totalAmt,charges;
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