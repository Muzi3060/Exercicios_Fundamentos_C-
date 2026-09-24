//
// Created by fabio on 24/09/2026.
//

#include <iostream>
#include <string>
#include <vector>

double dividir(int a, int b)
{

    if (b == 0) {
        throw std::runtime_error("Divisão por zero não é permitida.");
    }

    return a / b;
}


int main()
{

    try
    {
        std::cout << "Resultado da operação: " << dividir(10, 0) << std::endl;
    } catch (const std::runtime_error& e) {
        std::cout << "Erro: " << e.what() << std::endl;
    }

    std::vector<int> numeros = {1, 2, 3};

    try
    {
        numeros.at(10);
        std::cout << "Elemento encontrado com sucesso." << std::endl;
    } catch (const std::out_of_range &e) {
        std::cout << "Erro: Indice inválido " << e.what() << std::endl;
    }

    return 0;
}