#include<stdio.h>

int main(void) {

    printf("\n");
    printf(" 1-Abrir Netflix\t2-Abrir HBO\t3-Abrir Amazon Prime\t4-Abrir Globo Play\t5-Sair do Menu\n");

    int menu = 0;
    printf("Escolha uma op%c%co: ",135,198);
    fflush(stdin);
    scanf("%i", &menu);
    printf(" -----------------------------------------------------------------------------------------------------\n");

    switch (menu)
    {
    case 1:
        printf(" Ok! Abrir Netflix\n");
        break;
    case 2:
        printf(" Ok! Abrir HBO\n");    
        break;
    case 3:
        printf(" Ok! Abrir Amazon Prime\n");    
        break;
    case 4:
        printf(" Ok! Abrir Glogo Play\n");    
        break;
    case 5:
        printf("Saindo do Menu...\n");    
        break;            
    default:
        printf("Escolha entre 1 e 5!\n");
        break;
    }
}