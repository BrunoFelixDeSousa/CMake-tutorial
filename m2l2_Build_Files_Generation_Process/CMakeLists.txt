# versao cmake
cmake_minimum_required(VERSION 3.22.1)

# nome e versao do projeto
project(Calculadora VERSION 1.0.0)

# configure um arquivo de cabeçalho para passar o número da versão ao código-fonte:
configure_file(CalculadoraConfig.h.in CalculadoraConfig.h)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)


add_library( my_math
    addition.cpp
    division.cpp
    subtration.cpp
)

add_library( my_print
    print_result.cpp
)

add_executable( calculadora
    main.cpp
)

target_link_libraries(
    calculadora PRIVATE my_print my_math
)
# Como o arquivo configurado será gravado na árvore binária, devemos adicionar esse diretório à lista de caminhos para pesquisar os arquivos de inclusão. Adicione as seguintes linhas ao final do CMakeLists.txtarquivo
#target_include_directories(Calculadora PUBLIC
#                           "${PROJECT_BINARY_DIR}"
#                           )