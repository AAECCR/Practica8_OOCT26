/*Cortés Romero ALberto Emiliano
ejemplo de for*/
#include <stdio.h>
int main()
{
  int enteroNUmeroAlumnos=5;
  float realcalif =0.0, realPromedio=0.0;
  printf("\t Promedio de calificaciones\n");
  for (int indice=0; indice<enteroNUmeroAlumnos; indice++)
  {
      printf("\n Ingrese la calificacion del alumno %d\n",indice+1);
      scanf("%f",&realcalif);
      realPromedio=realPromedio+realcalif; //se puede hacer realPromedio += realcalif;
  }
  printf("\n El promedio de las calificaciones ingresadas es : %f\n", realPromedio/enteroNUmeroAlumnos);
    return 0;
}
  
  
