//
// Created by fabio on 23/09/2026.
//

#include <iostream>

int main()
{

    char saudacao[] = "Ola"; // Cria um array de caracteres (string) com o valor "Ola"

    saudacao[0] = 'o'; // Altera o primeiro caractere do array para 'o'

    std::cout << saudacao << std::endl;

    std::string palavra = "Mundo"; // Cria uma string com o valor "Mundo"
    palavra[0] = 'L'; // Altera o primeiro caractere da string para 'L'

    std::cout << palavra.length() << std::endl; // Imprime o tamanho da string (5)
    std::cout << sizeof(palavra) << std::endl; // Imprime o tamanho da string em bytes

}