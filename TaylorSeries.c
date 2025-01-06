#include<stdio.h>
#include<math.h>
void main(){
    int degree;
    printf("Enter degree:\n");
    scanf("%d", &degree);
    float x= degree*(3.14/180), nume=x, deno=1, i=1, sum=0, term;
    do{
         term=nume/deno;
        sum+=term;
        i+=2;
        nume=-nume*x*x;
        deno= deno*(i-1)*i;
    }while(fabs(term)>=0.00001);
    
    printf("Sin%d using taylor series is %f", degree, sum);
    printf("Sin%d using the built in function is %f", degree, sin(x));
}
