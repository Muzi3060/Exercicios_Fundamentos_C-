//
// Created by fabio on 23/09/2026.
//

#include <iostream>
#include <limits>

int main() // Função principal do programa
{
    // CRIAÇÃO DE VARIÁVEIS

    int idade = 25; // Ocupa 4 bytes
    double altura = 1.75; // Ocupa 8 bytes
    char sexo = 'M'; // Ocupa 1 byte
    bool estudante = true; // Ocupa 1 byte
    short curto = 32767; // Ocupa 2 bytes
    std::string nome; // Ocupa 24 bytes (depende do compilador)

    // =========================================================================================
    // EXEMPLOS DE PRINT COM AS VARIÁVEIS CRIADAS E USO DO SIZEOF PARA SABER O TAMANHO DE CADA VARIAVEL (EM BYTES)

    std::cout << "idade ocupa " << sizeof(idade) << " bytes" << std::endl;
    std::cout << "altura ocupa " << sizeof(altura) << " bytes" << std::endl;
    std::cout << "sexo ocupa " << sizeof(sexo) << " bytes" << std::endl;
    std::cout << "estudante ocupa " << sizeof(estudante) << " bytes" << std::endl;
    std::cout << "short ocupa " << (curto) << " bytes" << std::endl;
    curto++;
    std::cout << "short apos incremento ocupa " << (curto) << " bytes" << std::endl;

    // EXEMPLOS DE INPUT COM AS VARIÁVEIS CRIADAS

    std::cout << "=================" << std::endl;
    std::cout << "Digite sua idade: ";
    std::cin >> idade; // Lê a idade do usuário

    // 2. Limpa o '\n' que sobrou no buffer do teclado DEPOIS de ler a idade
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Digite seu nome completo: ";
    std::getline(std::cin, nome);                     // Lê o nome completo do usuário (com espaços)

    std::cout << "Idade: " << idade << " Nome: " << nome << std::endl;         // Imprime a idade e o nome do usuário

    return 0;
}

