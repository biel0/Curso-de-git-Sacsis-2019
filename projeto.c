#include <stdio.h>
#include <stdlib.h>

int soma(int a, int b){
	return a + b;
}

int subtracao(int a, int b){
	return a - b;
}

int main(){
	int a, b, c, d;
	printf ("Digite 1�: \n");
	scanf ("%d", &a);
	printf ("Digite 2�: \n");
	scanf ("%d", &b);
	c = soma (a,b);
	d = subtracao (a,b);
	printf("Soma: %d\n", c);
	printf("Subtracao: %d\n", d);
	return 0;
	
}
