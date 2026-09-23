cmake_minimum_required(VERSION 3.20) # Usa a versão sugerida originalmente
project(untitled)

set(CMAKE_CXX_STANDARD 20)

# Cada ficheiro passa a ser um "projeto/executável" independente:
add_executable(ex004 Fundamentos/Coleções/ex004.cpp)
add_executable(ex000 Fundamentos/Variaveis/ex000.cpp)
add_executable(ex001 "Fundamentos/Operadores lógicos/ex001.cpp")
add_executable(ex002 "Fundamentos/Operador escolha/ex002.cpp")
add_executable(ex003 "Fundamentos/Laços/ex003.cpp")
add_executable(ex005 "Fundamentos/Strings/ex005.cpp")
add_executable(ex006 "Fundamentos/Funções/ex006.cpp")
add_executable(ex007 "Fundamentos/Ponteiro/ex007.cpp")
