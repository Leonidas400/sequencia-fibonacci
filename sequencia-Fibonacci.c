/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main()
{
    
    int i, n, a = 0, b = 1, pt = 0;
    printf("digite um numero para ter uma sequencia fibonacci: ");
    scanf("%d", & n);
    i = 1;
    do{
        if(i == 1){
            b = 0;
        }
        if(i == 2){
            a = 0;
            b = 1;
        }
        if(i == 3){
            a = 0;
            b = 1;
        }
        
        pt = a + b;
        a = b;
        b = pt;
        i = i + 1;
        printf("%d ", pt);
    }while( i < n && pt < n);
    
    do{
        if(i == 1){
            b = 0;
        }
        if(i == 2){
            a = 0;
            b = 1;
        }
        if(i == 3){
            a = 0;
            b = 1;
        }
        if(n >= 1 && n <= 6){
            pt = a+b;
            a=b;
            b=pt;
            i = i + 1;
            printf("%d ", pt);
            
        }
    }while(i>n && pt<n);
    
    

    return 0;
}