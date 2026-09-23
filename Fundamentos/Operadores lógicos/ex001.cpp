//
// Created by fabio on 23/09/2026.
//

#include <iostream>

int main()
{

    // EXEMPLO DE OPERADORES LÓGICOS E CONDICIONAIS

    int nota = 9;
    int frequencia = 85;

    bool aprovado = nota >= 6 && frequencia >= 75;

    std::cout << "Situação do aluno: " << aprovado << std::endl;

    if (nota >= 9)
    {
        std::cout << "Parabéns! Você foi excelente!" << std::endl;
    } else if (nota >= 7 && nota < 9)
    {
        std::cout << "Você foi bom!" << std::endl;
    } else if (nota >= 5 && nota < 7)
    {
        std::cout << "Você foi regular!" << std::endl;
    } else if (nota < 5)
    {
        std::cout << "Você foi insuficiente... infelizmente reprovado!" << std::endl;
    }

    // TERNARIO

    nota >= 6 ? std::cout << "Aprovado" : std::cout << "Reprovado"; // Operador ternário (condição ? valor_se_verdadeiro : valor_se_falso)

    std::string resultado = nota >= 6 ? "Aprovado" : "Reprovado"; // Operador ternário, se a nota for maior ou igual a 6, resultado recebe "Aprovado", caso contrário, recebe "Reprovado"



    return 0;
}