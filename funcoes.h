#pragma once
#include <iostream>
#include <string>

void exibirPorValor(int numero, std::string texto);

void modificarPorReferencia(int& numero, std::string& texto);

void modificarPorPonteiro(int* numero, std::string* texto);

void exibirTiposDados();

double calcularArea(double largura, double altura);

void trocarValores(int* a, int* b);

void incrementarReferencia(int& valor);
