//
// Created by fabio on 24/09/2026.
//

#include <iostream>
#include <vector>
#include <string>

struct Aluno
{
    std::string nome;
    int idade;
    double nota;

};


int main()
{

    std::vector<Aluno> alunos;

    alunos.push_back({"João", 20, 8.5});
    alunos.push_back({"Maria", 22, 9.0});
    alunos.push_back({"Pedro", 19, 7.5});

    /*std::cout << "Nome: " << aluno1.nome << std::endl;
    std::cout << "Idade: " << aluno1.idade << std::endl;
    std::cout << "Nota: " << aluno1.nota << std::endl;*/

    for (Aluno aluno : alunos)
    {
        std::cout << "Nome: " << aluno.nome << std::endl;
        std::cout << "Nota: " << aluno.nota << std::endl;
    }


    return 0;
}