/* TP #1 "Tabla Fahrenheit-Celsius usando funciones, GetCelsius, For y const"
*Ignacio Francisco Ferrari
*28/04/15
*/
#include <stdio.h>


float getCelsius(float fahr);
int main(void){
 
int fahr;
  
 const int inferior = 0;
 const int mayor = 300; 
 const int salto = 20;
 

   for (fahr = inferior; fahr <= mayor; fahr = fahr + salto)
     printf("%3d %6.1f\n", fahr, getCelsius(fahr)); 

}

float getCelsius (float fahr){
      
	return (5.0/9.0) * (fahr-32.0);
}

