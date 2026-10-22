/*Cortés Romero ALberto Emiliano
ejemplo de for*/
#include <stdio.h>
int main()
{
    char op= 'n';
    double sum=0, calif=0;
    int veces=0;
    do 
    {
        printf("\t Suma de calificaciones\n");
        printf("Ingrese la calificacion\n");
        scanf("%lf",&calif);
        veces++;
        sum = sum + calif;
        printf("¿Desea sumar otra? S/N\n");
        setbuf(stdin,NULL);
        scanf("%c",op); //getchar y scanf obtienen informacion, pero getchar "bota" la informacion, scanf no, y por eso puede seguir el programa.
        //getchar();
        
    }
    while (op == 's' || op== 's'); // do while usa esta llave
    printf("El promedio de las calificaciones es %lf\n");
    return 0;
}
  
  
