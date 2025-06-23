/*digite um numero em celcius e retornara em fareheight*/
#include <stdio.h>
int main(){
    int t =0;
         printf("digite uma temperatura em Celcius para sabelo em Fareinheight: ");
         scanf("%i", &t);
    float tf = ((float) t * 9/5)+32;
        printf("%i celcius em fareiheight e %.2f .", t , tf);
    return 0; 
}