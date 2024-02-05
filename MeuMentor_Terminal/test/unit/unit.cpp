#include <iostream>
#include <cassert>
#include "../../src/Mentoria.h"
#include "../../src/MeuMentor.h"

int main() {
    // Testando a classe Mentoria

    // Testando setters e getters
    Mentoria mentoria;

    mentoria.setCodigoDisciplina("bcc123");
    mentoria.setDataMentoria("02/02/24");
    mentoria.setValor(50.00);

    assert(mentoria.getCodigoDisciplina() == "bcc123");
    assert(mentoria.getDataMentoria() == "02/02/24");
    assert(mentoria.getValor() == 50.00);

    MeuMentor* mentor = new MeuMentor();

    mentor->criarMentoria("bcc123", "02/02/24", 50.00);

    assert(!(mentor->buscaMentoria("bcc123").empty()));

    // Imprimindo as informações
    std::cout << "Testes Unitários Passaram!" << std::endl;

    return 0;
}
