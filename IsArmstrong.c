#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool isArmstrong (int num){
    int power=0, resultNum=0;
     
     int temp=num;
     
     while(temp!=0){
         temp/=10;
         power++;
     }
     
     temp=num;
     while(temp!=0){
         int rem=temp%10;
         resultNum+=pow(rem, power);
         temp/=10;
     }
    
    return resultNum==num;
}

int main(){
    int num=153;
    
    if(isArmstrong(num)){
       printf("%d is Armstrong number", num);
    }
    else{
         printf("%d is not Armstrong number", num);
    }
}
