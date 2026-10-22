/* Cortés Romero Alberto Emiliano 
ejemplo de while*/


#include <stdio.h>
int main ()
{
  int num,cont=0;
  printf("\a---- Tabla de multiplicar----");
  printf("Ingrese un número: \n");
  scanf("%d",&num);
  while(cont<10)
  {
    printf("%d x %d=%d\n",num,cont,num*cont); //cuidar el orden al momento de escribir las variables en la impresión
    cont++;
  }
  return 0;
}
