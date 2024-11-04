/*Aim:- write a c program to display the following by reading the number of rows as input.
         
           1
        1  2  1
     1  2  3  2  1
  1  2  3  4  3  2  1

*/

#include <stdio.h>

int main()
{
   int row;
   printf("Enter the row:");
   scanf("%d", &row);
   
   for(int i=1; i<=row; i++){//row
       for(int spaces=1; spaces<=row-i; spaces++){ //spaces
          printf(" ");
       }
       
       for(int j=1; j<=i; j++){ //increasing number
           printf("%d",j);
       }
       
       for(int k=i-1; k>=1; k--){ //decreasing number
          printf("%d",k);
       }
       
       printf("\n"); //new line after every row
   }

    return 0;
}