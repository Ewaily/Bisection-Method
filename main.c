/*
    * Muhammad Ashraf Ewaily        14101380
    * Numerical Methods | Bisection Method
 */

#include <stdio.h>
#include <stdlib.h>

float fn(float x){

        float fn = x*x - 2* x-3 ;

return fn;


}


int main()
{
    float a,b,Es=0.001,c,cx;
    int i = 1,f=0;

    printf("Enter the value of a: ");
    scanf("%f",&a);
    printf("Enter the value of b: ");
    scanf("%f",&b);
    c = ( a + b ) / 2.0;

        printf("Iteration #%d\n a = %f \t b = %f || \t c = %f || \t F(a) = %f || \t F(b) = %f  || \t F(c) = %f \n\n",i,a,b,c,fn(a),fn(b),fn(c));


    while ( fabs(fn(c)) >=0.001 ){





        if ( (fn(a) * fn(c) < 0  )){

            b = c;

            c = ( a + b ) / 2;

        }
        else if ( (fn(a) * fn(c) > 0 )){


            a = c;

        //    b = b;
            c = ( a + b ) / 2;

        }

        else if ( fn(a) * fn(c) == 0 ){
            f = 1;
            break;
        }

        i ++;
                printf("Iteration #%d\n a = %f \t b = %f || \t c = %f || \t F(a) = %f || \t F(b) = %f  || \t F(c) = %f \n\n",i,a,b,c,fn(a),fn(b),fn(c));


    }



        printf("\nThe approximate root = %f\n",c);



    return 0;
}
