#include "funcoes.h"
using namespace std;

void exibirPorValor(int numero, string texto) {
    cout << "passagem por valor" << endl;
    cout << "Numero recebido: " << numero << endl;
    cout << "Texto recebido: " << texto << endl;
    
    numero = 999;
    texto = "Modificado localmente";
    cout << "Valores modificados localmente: " << numero << ", " << texto << endl;
    cout << endl;
}

void modificarPorReferencia(int& numero, string& texto) {
    cout << "passagem ppor referencia " << endl;
    cout << "Valores antes da modificação: " << numero << ", " << texto << endl;

    numero = 777;
    texto = "Modificado por referência";
    
    cout << "Valores após modificação: " << numero << ", " << texto << endl;
    cout << endl;
}

void modificarPorPonteiro(int* numero, string* texto) {
    cout << "PASSAGEM POR PONTEIRO  << endl;
    cout << "Endereços dos ponteiros: " << numero << ", " << texto << endl;
    cout << "Valores antes da modificação: " << *numero << ", " << *texto << endl;
    
    *numero = 555;
    *texto = "Modificado por ponteiro";
    
    cout << "Valores após modificação: " << *numero << ", " << *texto << endl;
    cout << endl;
}

void exibirTiposDados() {
    cout << "DEMONSTRAÇÃO DE TIPOS DE DADOS  << endl;
    
    int idade = 25;
    string nome = "João";
    char carac = 'A';
    float num1 = 3.14159f;
    bool boleano = true;
    double num2 = 8.82738474;
    short int num3 = 32767;
    long int num4 = 2147483647;
    long long int num5 = 9223372036854775807;
    unsigned int num6 = 4294967295;

    cout << "tipo int: " << idade << endl;
    cout << "tipo string: " << nome << endl;
    cout << "tipo char: " << carac << endl;
    cout << "tipo float: " << num1 << endl;
    cout << "tipo bool: " << boleano << endl;
    cout << "tipo double: " << num2 << endl;
    cout << "tipo short: " << num3 << endl;
    cout << "tipo long: " << num4 << endl;
    cout << "tipo long long: " << num5 << endl;
    cout << "tipo unsigned int: " << num6 << endl;
    cout << endl;
}

// Função para calcular área usando passagem por valor
double calcularArea(double largura, double altura) {
    return largura * altura;
}

// Função para trocar valores usando ponteiros
void trocarValores(int* a, int* b) {
    cout << "TROCA DE VALORES COM PONTEIROS  << endl;
    cout << "Antes da troca: a = " << *a << ", b = " << *b << endl;
    
    int temp = *a;
    *a = *b;
    *b = temp;
    
    cout << "Após a troca: a = " << *a << ", b = " << *b << endl;
    cout << endl;
}

void incrementarReferencia(int& valor) {
    cout << "INCREMENTO POR REFERÊNCIA  << endl;
    cout << "Valor antes do incremento: " << valor << endl;
    valor++;
    cout << "Valor após incremento: " << valor << endl;
    cout << endl;
}

int main() {
    cout << "Diferentes paremetros" << endl;
    cout << "===" << endl;

    exibirTiposDados();
    
    int numero = 100;
    string texto = "Texto original";
    
    cout << "VALORES INICIAIS: " << numero << ", " << texto << endl;
    cout << endl;
    
    exibirPorValor(numero, texto);
    cout << "Após passagem por valor - valores originais: " << numero << ", " << texto << endl;
    cout << endl;
    
    modificarPorReferencia(numero, texto);
    cout << "Após passagem por referência - valores originais: " << numero << ", " << texto << endl;
    cout << endl;
    
    modificarPorPonteiro(&numero, &texto);
    cout << "Após passagem por ponteiro - valores originais: " << numero << ", " << texto << endl;
    cout << endl;
    
    int x = 10, y = 20;
    trocarValores(&x, &y);
    
    int contador = 5;
    incrementarReferencia(contador);
    
    cout << "CÁLCULO DE ÁREA ===" << endl;
    double largura = 5.0, altura = 3.0;
    double area = calcularArea(largura, altura);
    cout << "Área do retângulo (" << largura << " x " << altura << "): " << area << endl;
    cout << endl;
    
    cout << "Programa finalizado com sucesso!" << endl;
    cout << "Pragma once utilizado no arquivo funcoes.h para evitar inclusões múltiplas." << endl;
    
    return 0;
}
