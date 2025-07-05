#include <iostream>
using namespace std;

float saldo = 1000;
const float LIMITE_SAQUE = 500;

void sacar(float valor) {
    if (valor <= saldo && valor <= LIMITE_SAQUE)
        saldo -= valor;
}

void depositar(float valor) {
    saldo += valor;
}

void consultarSaldo() {
    cout << "Saldo: " << saldo << endl;
}

int main() {
    sacar(200);
    depositar(300);
    consultarSaldo();
    return 0;
}