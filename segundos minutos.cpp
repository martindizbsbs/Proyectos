//escriba un programa que pida el tiempo en segundos y lo cobierta en minutos segundos 
#include <stdio.h>
int main(){
int segundos,tiempo ;
int minutos;
printf("ingresa los segundos" );
scanf ("%d",&segundos);
minutos=segundos%60;
tiempo=segundos/60;
printf("%d loa segundos convertidos sn %d minutos con %d segundos",segundos,tiempo,minutos);
return 0;
}

