#include<stdio.h>
void Binario(int decimal){
	int conciente, binario[30], i;
	i=0;
	do
	{
		conciente=decimal/2;
		binario[i]=decimal%2;
		i++;
		decimal=conciente;
			
	}while (conciente!=1);
	
	binario[i]=1;
	
	for(i;i>=0;i--){
		printf("%d",binario[i]);
	}
};
int main(){
	int numero;
	printf("escriba el numero a transformar a binario : ");
	scanf("%i",&numero);
	Binario(numero);
	return 0;		
}
