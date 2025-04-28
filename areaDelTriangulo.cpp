#include <stdio.h>
int main(){ //el area del triangulo con una base de y con una altura de 
int b,h;
double area;
printf ("ingrese el valor de la base");
scanf("%d",&b);
printf ("ingrese el valor de altura ");
scanf("%d",&h);
area=(double)(b*h)/2;
printf ("el area del triangulo de base %d",b);
printf ("y el altura %d es: %10.2f ",h,area);
return 0;

}
