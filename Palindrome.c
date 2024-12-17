// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

bool isPalindrome(char str[10]){
     int len=strlen(str);
     
     for(int i=0; i<len/2; i++){
        char start=str[i];
        int endIndex=strlen(str)-1-i;
        char end=str[endIndex];
        
        start= tolower(start);
        end=tolower(end);
        
        if(start!=end){
            return false;
        }
    }
    
    return true;
}

int main() {
    
    char str[10]="Civic";
    if(isPalindrome(str)){
        printf("%s is Palindrome", str);
    }
    else{
          printf("%s is not Palindrome", str);
    }
   
    return 0;
}
