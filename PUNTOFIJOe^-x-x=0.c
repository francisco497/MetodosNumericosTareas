#include<stdio.h>
#include<math.h>
float f(float);
int main()
{
    float x,a,e,maxiter,err;
    int i=1;
    printf("\nPUNTO FIJO");
    printf("\nPrograma para calcular la raiz de e^-x-x=0");
    printf("\nIndicar el valor inicial de x: ");
	scanf("%f",&x);
    printf("\nIndicar el valor del error permitido: ");
	scanf("%f",&e);
	printf("\nIndicar el valor de las iteraciones maximas: ");
	scanf("%f",&maxiter);
	printf("i \t raiz \t\t error \n");
    printf("0 \t %f \n",x);
while(i<=maxiter)
    {

        a=x;
        x=f(a);
        err=fabs(x-a);
        printf("%d \t %1.4f \t %0.4f\n", i,x,err);

        if(err<=e)
        {
             i=maxiter+1;
        }
            else
            {
                i=i+1;
            }

    }
    printf("\nEl valor de la raiz es %f",x);
}
float f(float x)
{
	return exp(-x);
}

