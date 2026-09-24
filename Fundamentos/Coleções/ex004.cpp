#include <iostream> // Para usar std::cout e std::cin
#include <limits> // Para usar std::numeric_limits


int main() // Função principal do programa
{
    int notas[5] = {7, 8, 5, 9, 6}; // Array de notas

    std::cout << "Tamanho do array: " << sizeof(notas) << std::endl;

    int tamanhoLista = sizeof(notas) / sizeof(notas[0]);

    for (int contador = 0; contador < tamanhoLista; contador++)
    {
        std::cout << "Notas: " << notas[contador] << std::endl;
    }

    std::cout << "Posição 10: " << notas[10] << std::endl;




    return 0;
}