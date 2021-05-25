#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(void) 
{
    typedef int entero_t;
    typedef char caracter_t;
    typedef float decimal_t;
    
    entero_t var1,var2,var3;
    caracter_t letra1,letra2;
    decimal_t decimal1;
    
    decimal1=0.1+90+3.14;
    var1=5;
    var2=6;
    var1=+var2;
    letra1='a';
    printf ("El número es %d \n"),var1;
    printf ("La letra es %c \n"),letra1;    
    printf ("El decimal es %f \n"),decimal1;

    
    
    
    
    
    return 0;
}
