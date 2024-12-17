#include<stdio.h>
int reverse(int num){
    int originalNum=num,reverseNum=0;
    while(num!=0){
        int remainder= num%10;
        reverseNum= reverseNum*10+remainder;
        num/=10;
    }
    
    return reverseNum;
}

int main(){
    int num=123;
    printf("Reverse of %d is %d", num, reverse(num));
}
