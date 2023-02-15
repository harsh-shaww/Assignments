#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
   {
    float a;
    a=1/(1+pow(x,2));
    return a;
   }
void main()
   {
    int n,i;
    float a,b,h,sum,integral;
    printf("\n Enter the lower limit: ");
    scanf ("%f",&a);
    printf("\n Enter the upper limit: ");
    scanf ("%f",&b);
    printf("\n Enter the interval: ");
    scanf ("%d",&n);
    h=(b-a)/n;
    sum=f(a)+f(b);
    i=2;
    while(i<=n)
    {
        sum=sum+2*f(a+(i-1)*h);
        i++;
    }
    integral=h*sum/2;
    printf("\n Answer is: %f",integral);
    
    getch();
}
