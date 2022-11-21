#include<stdio.h>

  

int main(void;) 
{
    typedef char text[50];

    text nome[3];
    text cidade[3];
    int tel[3];
                

    for(int i = 0;i < 3;i++)
    {
        printf("escreva seu nome: ");
        fflush(stdin);
		gets(nome[i]);
		
		printf("Digite sua cidade: ");
        fflush(stdin);
		gets(cidade[i]);
		
 		printf("Seu telefone: ");
        fflush(stdin);
		scanf("%i", &tel[i]);
    }
    int j = 0;
    do
    {
        printf("%i tem o nome de %s, da cidade %s e o telefone %i.\n", j + 1, nome[j], cidade[j], tel[j]);
        j++;
    } while (j<3);
    
      
}

