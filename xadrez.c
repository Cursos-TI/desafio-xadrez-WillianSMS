#include <stdio.h>

// Função recursiva Torre 
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
	
}

// Função recursiva Rainha 
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
   
}

// Função recursiva que imprime "Cima" e "Direita" (movimento do Bispo)
void moverBispoInterno(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverBispoInterno(casas - 1);
}

// Função recursiva com loop aninhado: Bispo (5 casas na diagonal "Cima, Direita")
void moverBispo(int casas) {
    if (casas == 0) return;
    printf("Cima\n");
    moverBispoInterno(1); // 1 passo para direita por linha (diagonal)
    moverBispo(casas - 1);
}
// o uso do return serve como controle pra evitar um loop infinito

int main() {
    // Movimento da Torre (recursivo)
    moverTorre(5);
    printf("\n");

    // Movimento do Bispo (recursivo + loop aninhado)
    moverBispo(5);
    printf("\n");

    // Movimento da Rainha (recursivo)
    moverRainha(8);
    printf("\n");
	
	//Assim como pedido não foi usado uma função recursiva para o cavalo
	//foi criado variáveis para  realizar o movimento do cavalo, utilizando loops
	//foi dada a opção de acrescentar ou não acrecentar condições mais complexas nos loops
	//optei por não acrescentar, já que não havia a necessidade para tal
	//se eu acrescentasse seria como os professores costumam falar o famoso "encher linguiça"

    int i, j; // variaveis aleatória para auxiliar no for e while
    int movimentoCima = 2;     // Duas casas para cima
    int movimentoDireita = 1;   // Uma casa para a direita

    // Loop externo: movimento para cima
    for (i = 0; i < movimentoCima; i++) {
        if (i == 1) {
            printf("Cima\n");
        } else {
            printf("Cima\n");
        }

        // Se ainda não for o último passo para cima, continua o loop externo
        if (i < movimentoCima - 1) {
            continue;
        }

        // Ao chegar no último para cima, ativa o loop para direita
        j = 0;
        while (j < movimentoDireita) {
            if (j == 1) {
                //condição colocada apenas para o uso do break
				//como só a uma casa para direita a função nunca seria execultada
                break;
            }

            printf("Direita\n");
            j++;

            // Se completou o passo, sai do while
            if (j == movimentoDireita) {
                break;
            }
        }

        // Saída opcional para indicar fim do movimento
        break;
    }


    return 0;
}
