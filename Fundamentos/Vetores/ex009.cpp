//
// Created by fabio on 24/09/2026.
//

#include <iostream>
#include <vector>

int main()
{

    std::vector<int> notas = {7, 8, 5, 9, 6};

    std::cout << "Tamanho da lista: " << notas.size() << std::endl;

    for (int i = 0; i < notas.size(); i++)
    {
        std::cout << "Nota: " << notas[i] << std::endl;
    }


    std::vector<std::string> nomes;

    nomes.push_back("Carla");
    nomes.push_back("Rafael");
    nomes.push_back("Fernanda");

    std::cout << "Tamanho da lista de nomes: " << nomes.size() << std::endl;

    for (std::string nome : nomes)
    {
        std::cout << "Nome: " << nome << std::endl;
    }


    return 0;
}