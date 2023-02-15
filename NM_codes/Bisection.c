#include <stdio.h>
#include<math.h>
float f(float x)
{
    return x*x*x-x-4;
}

int main()
{
    float x,a,b,fx,x1,e=.0000005;
    printf("output\n");
    printf("supply values for a, b");
    scanf("%f%f",&a,&b);
    do
    {
        x=(a+b)/2;
        fx=f(x);
        if(fx>0)
            b=x;
            else
            a=x;
            
            x1=(a+b)/2;
    }while(fabs(x1-x)>e);
    printf("the root is %.4f",x);

    return 0;
}
