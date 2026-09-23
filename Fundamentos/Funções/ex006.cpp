//
// Created by fabio on 23/09/2026.
//

#include <iostream>

int dobrar(int valor) {
    return valor * 2;
}

void dobrarNoLugar(int &valor)
{
    valor *= 2;
}

int main() {

    int numero = 5;


    std::cout << "Número dobrado: " << dobrar(numero) << std::endl;
    dobrarNoLugar(numero);
    std::cout << "Número dobrado no lugar: " << numero << std::endl;



    return 0;
}