#include <iostream>
using namespace std;

float mediaVetor(int* v, int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++)
        soma += v[i];
    return (float)soma / tamanho;
}

int main() {
    int v[10] = {1,2,3,4,5,6,7,8,9,10};
    cout << mediaVetor(v, 10) << endl;
    return 0;
}