/* TP #1 "Tabla Fahrenheit-Celsius"
*Ignacio Francisco Ferrari
*28/04/15
*/
#include <stdio.h>
 
int main(void){
 
int fahr;
  
 const int inferior = 0;
 const int mayor = 300; 
 const int salto = 20;
 

for (fahr = inferior; fahr <= mayor; fahr = fahr + salto)
printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32)); 

            }

