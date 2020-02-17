#include<stdio.h>
#include<math.h>
float f(float);
float f_prima(float);
int main()
{
    float x,a,e,maxiter,err;
    int i=1;
    printf("\nNEWTON-RAPHSON");
    printf("\nPrograma para calcular la raiz de 2x^2-x-5=0");
    printf("\nIndicar el valor inicial de x: ");
	scanf("%f",&x);
    printf("\nIndicar el valor del error permitido: ");
	scanf("%f",&e);
	printf("\nIndicar el valor de las iteraciones maximas: ");
	scanf("%f",&maxiter);
	printf("i \t raiz \t\t error \n");
    printf("0 \t %0.6f \n",x);
while(i<=maxiter)
    {

        a=x;
        x=x-f(x)/f_prima(x);
        err=fabs(x-a);
        printf("%d \t %1.6f \t %0.6f\n", i,x,err);

        if(err<=e)
        {
             i=maxiter+1;
        }
            else
            {
                i=i+1;
            }
}
printf("\nEl valor de la raiz es %0.6f",x);
}
float f(float x)
{
	return 2*pow(x,2)-x-5;
}
float f_prima(float x)
{
    return 4*x-1;
}
