//insertionSort In-Place
void insertionSortIPV5(int* v, int tamanho) {
    for (int i = 1; i < tamanho; i++) {
        int valor = v[i];
        int j;
        for (j = i; j > 0 && v[j - 1] > valor; j--) {
            v[j] = v[j - 1];
        }
        v[j] = valor;
    }
}