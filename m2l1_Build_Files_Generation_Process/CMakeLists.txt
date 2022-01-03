# versao cmake
cmake_minimum_required(VERSION 3.22.1)

# nome e versao do projeto
project(Calculadora VERSION 1.0.0)

add_executable(
    calculadora
    addition.cpp
    division.cpp
    subtration.cpp
    print_result.cpp
    main.cpp
)