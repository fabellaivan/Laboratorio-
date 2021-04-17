#include <stdio.h>
#include <stdlib.h>
#include "tp01.h"
int main()
{
    int flagPrimerOp=0;
    int flagSegundoOp=0;
    int flagCalculos=0;
    int num1;
    int num2;
    int rResta;
	int rSuma;
	int rMult;
	int rFactA;
	int rFactB;
	float rDivicion;
    int opcion;
    char salir;

    do{
    system("cls");
    printf(" 1-Ingresar 1er operando: (A=");
    if(!flagPrimerOp)
    {
        printf("x)\n");
    }
    else
    {
        printf("%d)\n",num1);
    }
    printf(" 2-Ingresar 2do operando: (B=");

    if(!flagSegundoOp)
    {
        printf("x)\n ");
    }
    else
    {
       printf("%d)\n ",num2);
    }

    printf("3-Calcular\n");
    printf(" 4-Informar resultados\n ");
    printf(" 5-salir\n");
    scanf("%d",&opcion);

    switch(opcion)
    {
    case 1:
            printf("Ingrese primer operando\n ");
            scanf("%d",&num1);

            flagPrimerOp=1;
            break;
    case 2:
            printf("Ingrese segundo operando\n ");
            scanf("%d",&num2);
            flagSegundoOp=1;
            break;
    case 3:
            if(flagPrimerOp&&flagSegundoOp)
            {
                suma(num1, num2, &rSuma);
                resta(num1, num2,&rResta);
                mult(num1, num2, &rMult);
                divic(num1, num2, &rDivicion);
                factA(num1, &rFactA);
                factB(num2, &rFactB);

                flagCalculos=1;

            }
            else
            {
                printf("Tiene que cargar ambos operadores antes de proceder a los calculos.\n ");
                system("pause");
            }
            break;
    case 4:
            if(flagPrimerOp&&flagSegundoOp&&flagCalculos)
            {
                mostrarResultado(num1, num2, rSuma, rResta, rMult, rDivicion, rFactA, rFactB);
                system("Pause");
                flagPrimerOp=0;
                flagSegundoOp=0;
                flagCalculos=0;
            }
            else
            {
                printf("Tiene que cargar ambos operadores antes de proceder a los resultados\n. ");
                system("pause");
            }

            break;
    case 5:
            printf("Confirma que desea salir ? ");
            fflush(stdin);
            scanf("%c",&salir);
            break;
    default :
        printf("Ingrese una operacion correcta\n");
        system("pause");
    }

    }while(salir!='s');
    return 0;
}
