#include <stdio.h>

int main()
{
    int opcion;
    int num;
    do
    {
        printf("Bienvenido al sistema de calculadora del cuadrado!");
        printf("1. Calcular cuadrado de un numero\n");
        printf("2. Salir\n");
        printf("Elige una opcion: ");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            printf("Ingresa un numero: ");
            scanf("%d", &num);
            printf("El resultado es: %d\n", num * num);
            break;
        case 2:
            printf("Gracias por usarme gracias!\n");
            break;
        default:
            printf("Opcion no valida\n");
        }
    } while (opcion != 2);
    return 0;
}