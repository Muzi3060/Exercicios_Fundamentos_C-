//
// Created by fabio on 23/09/2026.
//

#include <iostream>

int main()
{

    // EXEMPLO DE SWITCH CASE

    int dia = 7;

    switch (dia)
    {
    case 1:
        std::cout << "Hoje é segunda-feira!" << std::endl;
        break;
    case 2:
        std::cout << "Hoje é terça-feira!" << std::endl;
        break;
    case 3:
        std::cout << "Hoje é quarta-feira!" << std::endl;
        break;
    case 4:
        std::cout << "Hoje é quinta-feira!" << std::endl;
        break;
    case 5:
        std::cout << "Hoje é sexta-feira!" << std::endl;
        break;
    case 6: // Não preenchido, pois cai no fallback do case 7
    case 7:
        std::cout << "Final de semana!" << std::endl;
        break;
    default:
        std::cout << "Dia inválido!" << std::endl;
        break;
    }


    return 0;
}