#include <stdio.h>

void EsperaEnter(){ // Definição de função "EsperarEnter"
    int tecla;
    printf("Pressione ENTER\n");
    do{
        tecla = getchar();
        if (tecla !=13){ // Se nao For ENTER
            printf("Voce nao digitou ENTER, Por favor Digite ENTER\n");
        }
    } while(tecla !=13); // 13 é o codigo ASCII do ENTER
}

void main(){
    EsperaEnter(); // Chamada da função definida antes
    // .........
    EsperaEnter(); // Chamada da função definida antes
    // .........
    EsperaEnter(); // Chamada da função definida antes
    // .........
}