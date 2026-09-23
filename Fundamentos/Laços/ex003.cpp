//
// Created by fabio on 23/09/2026.
//
#include <iostream>

int main()
{
    // EXEMPLO DE LAÇO DE REPETIÇÃO (FOR)

    for (int contador = 0; contador <= 20; contador += 2)
    {
        std::cout << "Contador: " << contador << std::endl;
    }

    // EXEMPLO DE LAÇO DE REPETIÇÃO (WHILE)

    int contador = 5;

    while (contador  >= 1)
    {
        std::cout << "Contagem regressiva: " << contador << std::endl;
        contador--;
    }

    // EXEMPLO DE LAÇO DE REPETIÇÃO (DO-WHILE)

    std::string mensagem;

    do
    {
        std::cout << "Digite algo: (0 para sair) " << std::endl;
        std::getline(std::cin, mensagem);
    }
    while (mensagem != "0");


    return 0;
}