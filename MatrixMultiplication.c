#include<stdio.h>
int main(){
    int arow, acol, brow, bcol;
    printf("Enter row and colum of matrix1:\n");
    scanf("%d %d",& arow, &acol);
    printf("Enter row and colum of matrix2:\n");
    scanf("%d %d",& brow, &bcol);
    
    int matrix1[arow][acol], matrix2[brow][bcol], result[brow][bcol];
    
    printf("Enter the elements of matrix1:\n");
    for(int i=0; i<arow; i++){
        for(int j=0; j<acol; j++){
            scanf("%d", &matrix1[i][j]);
        }
    }
    
     printf("Enter the elements of matrix2:\n");
    for(int i=0; i<brow; i++){
        for(int j=0; j<bcol; j++){
            scanf("%d", &matrix2[i][j]);
        }
    }
    
    int sum=0;
    
    for(int i=0; i<arow; i++){
        for(int j=0; j<bcol; j++){
           
            for(int k=0; k<brow; k++){
               sum+=matrix1[i][k] * matrix2[k][j];
            }
            
            result[i][j]=sum;
            sum=0;
        }
    }
    
     printf("Result:\n");
    for(int i=0; i<brow; i++){
        for(int j=0; j<bcol; j++){
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}
