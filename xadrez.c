#include <stdio.h>
#include <stdlib.h>
#include<unistd.h>
void escreve_linha_e_para(char string[]) {
    printf("%s\n", string);
    sleep(1);
}

void mover_direita(int numero_repeticoes) {
    if (numero_repeticoes > 1) {
        mover_direita(--numero_repeticoes);
    }
    escreve_linha_e_para("Direita");
}

void mover_esquerda(int numero_repeticoes) {
    if (numero_repeticoes > 1) {
        mover_esquerda(--numero_repeticoes);
    }
    escreve_linha_e_para("Esquerda");
}
mover_cima_direita(int numero_repeticoes) {
    if (numero_repeticoes > 1) {
        mover_cima_direita(--numero_repeticoes);
    }
    for (int i = 1; i > 0;){
        escreve_linha_e_para("Cima");
        while (i) {
            mover_direita(--i);
        }
    }

}

void pula_duas_linhas() {
    printf("\n\n");
}

void mover_torre(int numero_repeticoes) {
    escreve_linha_e_para("Movendo a Torre:");
    mover_direita(numero_repeticoes);
    escreve_linha_e_para("Parando de mover a torre.");
}

void mover_bispo(int numero_repeticoes) {
    escreve_linha_e_para("Movendo o bispo:");
    mover_cima_direita(numero_repeticoes);
    escreve_linha_e_para("Parando de mover o bispo.");
}

void mover_rainha(int numero_repeticoes) {

    escreve_linha_e_para("Movendo a rainha:");
    mover_esquerda(numero_repeticoes);
    escreve_linha_e_para("Parando de mover a rainha.");
}
void mover_cavalo() {

    escreve_linha_e_para("Movendo o cavalo:");
    for (int i = 2, j=0; i > 0; i--,j++) {
        escreve_linha_e_para("Cima");
        if (i == j)
            mover_direita(0);
    }
    escreve_linha_e_para("Parando de mover cavalo.");

}

int main(void) {
    printf("                Jogo de xadrez maluco\n");
    printf("Nele as peças se movem sozinhas.\nSo sente e observe.\n");
    pula_duas_linhas();
    sleep(2);

    mover_torre(5);
    printf("\n");

    mover_bispo(5);
    printf("\n");

    mover_rainha(8);
    printf("\n");

    mover_cavalo();
    pula_duas_linhas();

    sleep(2);
    escreve_linha_e_para("              FIM DO JOGO!");
    escreve_linha_e_para("Foi divertido joga lo com voce.\nEspero te ver novamente.");

    system("pause");
    return 0;
}
