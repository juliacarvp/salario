#include <stdio.h>
#include <stdlib.h>

int main()
{
	// Programa que receba 12 sal�rios mensais, faz um somat�rio dos mesmos e apresenta o total de sal�rios recebidos no ano, o maior sal�rio e o menor sal�rio. 

	int cont=0;
	float salario=0, somatorio=0, maior=0, menor=0;
	
	for(cont=0; cont<12; cont++)
	{
		printf ( "Digite o %d sal%crio: ", cont+1, 160);
		scanf ("%f", &salario);
		
		somatorio = somatorio + salario;
		
		if(cont==0)
		{
			menor = salario;
			maior = salario;
		}	
		else if(maior < salario)
		{
			maior = salario;
		}	
		else if(menor > salario)
		{
			menor = salario;
		}
	}
	
	printf("\nO total de sal%crios recebidos no ano foi de: R$ %.2f", 160, somatorio);
	printf("\nMaior sal%crio: R$ %.2f", 160, maior);
	printf("\nMenor sal%crio: R$ %.2f\n\n", 160, menor);
	
	system ("pause");
	return (0);
}

