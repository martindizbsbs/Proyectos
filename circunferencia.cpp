//escriba un programa que calcule el perimetro de una circunferencia 
#include <stdio.h>
int main(){
#define PI 3.1416
float radio;
printf("ingrese el radiop de la circunferencia:" );
scanf ("%f",&radio);
float perimetro=2*PI * radio;
printf("el perimetro de la circunferencia es:%.2f", perimetro);
return 0;
}

