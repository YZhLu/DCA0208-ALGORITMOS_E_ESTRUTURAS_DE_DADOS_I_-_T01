#include "selectionSort.h"

//selectionSort in-Place
void selectionSort(int* v, int tamanho) {
    
    // Percorre todo o vetor
    for (int i = 0; i < (tamanho - 1); i++) {
        
        // Procuraremos o menor elemento a partir do indice "i",
        // neste caso supomos que o menor valor está na posição "i",
        // logo a variável "iMenor" é atualizada.
        int iMenor = i;                         
        
        // Percorre o vetor a partir do elemento seguinte a "i".
        // O propósito é identificar a posição onde se encontra o menos valor.
        for (int j = i+1; j < tamanho; j++) {
            
            // Verifica se existe um elemento menor que o presente na posição "iMenor".
            // Caso verdadeiro a posição com o menor elemento passa a ser "j" e 
            // a variável "iMenor" é atualizada com o valor de "j"
            if (v[j] < v[iMenor]) {
                
                iMenor = j;

            }
        }

        // Realiza a troca de posição entre o elemento de menor valor 
        // e o presente na posição "i"
        int temp = v[i];
        v[i] = v[iMenor];
        v[iMenor] = temp;
    }
}