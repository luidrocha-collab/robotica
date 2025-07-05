#include <iostream>
using namespace std;

void exibirVetor(int* v, int tamanho) {
    for (int i = 0; i < tamanho; i++)
        cout << v[i] << " ";
    cout << endl;
}

int main() {
    int vetor[5] = {1, 2, 3, 4, 5};
    exibirVetor(vetor, 5);
    return 0;
}