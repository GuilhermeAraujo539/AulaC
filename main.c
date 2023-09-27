#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(int argc, char *argv[]) {
setlocale(LC_ALL, "portuguese");

	int operacao;
    float numero1;
    float numero2;
    float opcao;
    float total;
    
    
    opcao=1;
    while(opcao ==1){
    	printf ("digite um numero:\n");
    	scanf ("%f",&numero1);
    	printf ("digite outro numero:\n");
    	scanf ("%f",&numero2);
    	printf ("digite 1 para somar os valores anteriores \n digite 2 para subtrair \n digite 3 para multiplicar \n digite 4 para dividir:\n");
    	scanf ("%d",&operacao);
	
	
	switch (operacao){
		
		case 1:
		total = numero1 + numero2;
		break;
		
		case 2:
		total = numero1 - numero2;
		break;
		
		case 3:
		total = numero1 * numero2;
		break;
		
		case 4:
		total = numero1 / numero2;
		break;
		
		
	}
	printf ("o resultado da operação e:\n %.2f", total);
	}
	return 0;
}
