//
// Created by fabio on 24/09/2026.
//


#include <iostream>

int main()
{

    int idade = 25, outraIdade = 40;
    int &refIdade = idade;

    int &ref = idade;
    ref = outraIdade;

    std::cout << "Idade: " << idade << std::endl;
    std::cout << "OutraIdade: " << outraIdade << std::endl;
    std::cout << "ref: " << ref << std::endl;


    return 0;
}