#include <stdio.h>
int main (int argc, char const *argv[]){
   int x, y = 1;
   while(y != 0){             	// Kjør mens y ikke er 0
   	printf("Sjekk om to tall er delelige. F.eks 6/3:\n");
   	x, y = 0;   
   	scanf("%d / %d", &x, &y);
   	sjekkDeling(x, y);         // Kjør funksjonen sjekkDeling()
   }
   
   return 0;
}

// Selve funksjonen:
int sjekkDeling(int x, int y){
   if(x % y == 0)             // Hvis tallene er delelige med hverandre, altså rest 0 så...
   	printf("\nTallene er delelige med hverandre!\n\n\n");
   else 
	   printf("\nTallene er ikke delelige med hverandre.\n\n\n"); 	// Hvis ikke...
   
   return 0;
}