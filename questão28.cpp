#include <iostream>
using namespace std;

struct Pessoa {
    string nome;
    int idade;
    float altura;
};

void imprimir(Pessoa* p) {
    cout << "Nome: " << p->nome << ", Idade: " << p->idade << ", Altura: " << p->altura << endl;
}

int main() {
    Pessoa p = {"Maria", 25, 1.65f};
    imprimir(&p);
    return 0;
}