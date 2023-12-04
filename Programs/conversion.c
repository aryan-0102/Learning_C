// Program to convert kilometers into meter ,feets , mile , inches , centimeter

#include <stdio.h>
int main(){
int dist_km;

printf("Enter Distance int kilometers ");

scanf("%d",&dist_km);

printf(" %d kilometers is \n ",dist_km);

printf(" %d  meters \n ",dist_km*1000);

int feets = dist_km* 3280.84;

printf(" %d  feets \n ",feets);

int miles  = dist_km*(0.62);
printf(" %d  miles\n",miles);

printf(" %d  inches\n",dist_km*39370);

printf(" %d centimeters",dist_km*100000);

return 0 ;
}