//
// Created by fabio on 23/09/2026.
//

#include <iostream>

int main()
{

    int idade = 25;
    int *ptrIdade = &idade; // Declarando um ponteiro para inteiro e atribuindo o endereço de memória da variável idade


    std::cout << "Idade: " << idade << std::endl;
    std::cout << "Endereço de memória da idade: " << &idade << std::endl;
    std::cout << "Valor do ponteiro ptrIdade: " << ptrIdade << std::endl;

    std::cout << "=============================================" << std::endl;
    std::cout << "Valor apontado pelo ponteiro ptrIdade: " << *ptrIdade << std::endl; // Acessando o valor da idade através do ponteiro

    *ptrIdade = 30; // Alterando o valor da idade através do ponteiro

    std::cout << "Novo valor da idade: " << idade << std::endl;

    int *ptrVazio = nullptr; // Inicializando um ponteiro nulo

    std::cout << "Endereço do ponteiro vazio " << *ptrVazio << std::endl; // Exibindo o valor do ponteiro nulo

    *ptrVazio = 50; // Tentando atribuir um valor a um ponteiro nulo (isso causará um erro de segmentação)

    return 0;
}