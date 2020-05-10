/* Este es un programa para hacer conversiones de Grados centigrados
a Grados Farenheit y viceversa */

#include <stdio.h>

int main()
{
  float g, con;// g es la variable que guarda la temperatura
  int opc;     //con es para realizar la conversion

  printf("Conversiones de grados de temperatura\n");
  printf("[1] ºF - ºC\n");
  printf("[2] ºC - ºF\n");
  printf("Selecciona una opcion: ");
  scanf("%d", &opc);

  if(opc == 1)
  {
    printf("Introduce los ºF: ");
    scanf("%f", &g);
    con = (g-32)/1.8;
    printf("%f ºF = %f ºC",g ,con);
  }
  else
  {
    printf("Introduce los ºC: ");
    scanf("%f", &g);
    con = g *1.8 + 32;
    printf("%f ºC = %f ªF", g, con);
  }

  return 0;
}

