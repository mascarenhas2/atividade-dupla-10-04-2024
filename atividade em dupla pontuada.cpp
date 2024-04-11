#include <stdio.h>
#include <locale.h>
#define SIZE 200

int main(){
	
	setlocale(LC_ALL,"");
	//Declaração de Variaveis
	float notas[3][3],peso[3];
	char disciplinas[3][SIZE];
	float media[3],soma,somadepesos=0;
	
	int i,j;
	
	//Solicitando dados do usuario
	for(i=0;i<3;i++){
		printf("Insira a %dª Disciplina: ",i+1);
		scanf("%s",&disciplinas[i][SIZE]);
		fflush(stdin);
		soma=0;
		
		
		
	for(j=0;j<3;j++){
		printf("Insira a %dª Nota: ",j+1);
		scanf("%f",&notas[i][j]);
		printf("Insira o peso: ");
		scanf("%f",&peso[j]);
			fflush(stdin);
		
			
			if(notas[i][j]>=0 && notas[i][j] <= 10){
					soma+=notas[i][j];
			
			}else{
				printf("\nNota Invalida!\n");
				break;
			}
			if(somadepesos!=10){
			printf("\nSomatoria de Pesos Invalida!\n");
			break;
			}else{
					somadepesos+=peso[j];
			}
			}
			
		
		media[i]=(soma*peso[j])/10;
}

	
	
	
	
	
	for(i=0;i<3;i++){
		printf("%dª Disciplina: %s \n",i+1,disciplinas[i]);
		fflush(stdin);
			
		
	for(j=0;j<3;j++){
		printf("\n%dª Nota: %.1f \n",j+1,notas[i][j]);
		fflush(stdin);
		
	
	
	
               }
	printf("\n\nMedia Ponderada:%.1f \n",media[i]);
		fflush(stdin);

                    }
    }
