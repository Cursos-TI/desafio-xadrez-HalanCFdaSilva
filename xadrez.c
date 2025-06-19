#include <stdio.h>
#include <stdlib.h>
#include<unistd.h>
void escreve_linha_e_para(char string[]) {
    printf("%s\n", string);
    sleep(1);
}
void pula_duas_linhas() {
    printf("\n\n");
}

void mover_torre() {
    int contador = 0;
    escreve_linha_e_para("Movendo a Torre:");
    for (int contador = 0; contador < 5; contador++) {
        escreve_linha_e_para("Direita");
    }
    escreve_linha_e_para("Parando de mover a torre.");
}
void mover_bispo() {
    int contador = 0;
    escreve_linha_e_para("Movendo o bispo:");
    while (contador < 5) {
        escreve_linha_e_para("Cima");
        escreve_linha_e_para("Direita");
        contador++;
    }
    escreve_linha_e_para("Parando de mover o bispo.");
}
void mover_rainha() {
    int contador = 0;
    escreve_linha_e_para("Movendo a rainha:");
    do{
        escreve_linha_e_para("esquerda");
        contador++;
    }while (contador < 5);
    escreve_linha_e_para("Parando de mover a rainha.");
}
void mover_cavalo() {
    int contador = 2;
    escreve_linha_e_para("Movendo o cavalo:");
    do {
        for (; contador > 0; contador--)
            escreve_linha_e_para("Baixo");
        escreve_linha_e_para("esquerda");
    }while (contador);
    escreve_linha_e_para("Parando de mover cavalo.");

}

int main(void) {
    printf("                Jogo de xadrez maluco\n");
    printf("Nele as peças se movem sozinhas.\nSo sente e observe.\n");
    pula_duas_linhas();
    sleep(2);

    mover_torre();
    printf("\n");

    mover_bispo();
    printf("\n");

    mover_rainha();
    printf("\n");

    mover_cavalo();
    pula_duas_linhas();

    sleep(2);
    escreve_linha_e_para("              FIM DO JOGO!");
    escreve_linha_e_para("Foi divertido joga lo com voce.\n Espero te ver novamente.");

    system("pause");
    return 0;
}
