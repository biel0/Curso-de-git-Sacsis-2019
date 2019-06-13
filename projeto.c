#include <stdio.h>
#include <stdlib.h>

int soma(int a, int b){
	int d = int a + int b;
	return d;
}

int main(){
	int a, b, c;
	printf ("Digite 1º: \n");
	scanf ("%d", &a);
	printf ("Digite 2º: \n");
	scanf ("%d", &b);
	c = soma (a,b);
	printf("Soma: %d", c);
	return 0;
	
}
