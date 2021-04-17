#include "tp01.h"
int long long factA(int numa, int* rFactA)
{
    int aux;
    int fact =1;
    int vuelta=0;
    if(numa>0)
    {
        for(aux=numa;aux>1;aux--)
        {
        fact=fact*aux;
        }
        *rFactA=fact;
        vuelta=1;
    }

    return vuelta;
}
int long long factB(int numb, int* rFactB)
{
    int aux;
    int fact=1;
    int vuelta=0;
    if(numb>0)
    {
        for(aux=numb;aux>1;aux--)
        {
        fact=fact*aux;
        }
        *rFactB=fact;
        vuelta=1;
    }

    return vuelta;
}
int suma(int numa, int numb, int* rSuma)
{
    *rSuma=numa+numb;
    return 0;
}
int resta(int numa, int numb, int* rResta)
{
    *rResta = numa-numb;
    return 0;
}
int mult(int numa, int numb, int* rMult)
{
    *rMult=numa*numb;
    return 0;
}
float divic(int numa, int numb, float* rDivicion)
{
    int vuelta=0;
    if(numb!=0)
    {
        *rDivicion=(float)numa/numb;
    vuelta=1;
    }
    return vuelta;
}
void mostrarResultado(int num1, int num2, int rSuma, int rResta, int rMulti, float rDivicion, int long long rFactA, int long long rFactB)
{
    printf("El resultado de la suma es %d\n",rSuma);
    printf("El resultado de la resta es %d\n",rResta);
    printf("El resultado de la mnult es %d\n",rMulti);
    if(factA(num1, &rFactA))
    {
        printf("El resultado de factorizado a es %I64u\n",rFactA);
    }
    else
    {
        printf("No se puede factorizar a 0 o numeros negativos\n");
    }


    if(factB(num2, &rFactB))
    {
        printf("El resultado de factorizado b es %I64u\n",rFactB);
    }
    else
    {
        printf("No se puede factorizar a 0 o numeros negativos\n");
    }

    if(divic(num1, num2, &rDivicion))
    {
        printf("El resultado de la divicion es %5f\n",rDivicion);
    }
    else
    {
        printf("No se puede dividir por 0\n");
    }

}
