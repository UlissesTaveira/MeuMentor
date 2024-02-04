#include <iostream>
#include <cassert>
#include "../../src/Mentoria.h"

int main() {
    // Testando a classe Mentoria

    // Testando setters e getters
    Mentoria mentoria;

    mentoria.setCodigoDisciplina("C++");
    mentoria.setDataMentoria("2024-02-03");
    mentoria.setValor(50.00);

    assert(mentoria.getCodigoDisciplina() == "C++");
    assert(mentoria.getDataMentoria() == "2024-02-03");
    assert(mentoria.getValor() == 50.00);

    // Imprimindo as informações
    std::cout << "Testes Unitários Passaram!" << std::endl;

    return 0;
}
