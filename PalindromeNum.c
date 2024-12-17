#include<stdio.h>
#include<stdbool.h>
bool isPalindrome(int num){
    int originalNum=num,reverseNum=0;
    while(num!=0){
        int remainder= num%10;
        reverseNum= reverseNum*10+remainder;
        num/=10;
    }
    
    return originalNum==reverseNum;
}

int main(){
    int num=123;
    if(isPalindrome(num)){
        printf("%d is Palindrome numebr", num);
    }
    else{
         printf("%d is not Palindrome numebr", num);
    }
}
