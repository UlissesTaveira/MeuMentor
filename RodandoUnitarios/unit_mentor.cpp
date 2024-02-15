#include <cassert>
#include <iostream>
#include "unit_mentor.h"
#include "Mentor.h"
#include "MentoriaIMP.h"

void testConstructorMentor() {
    Mentor mentor("Joao Lucas", "joaolucas@exemplo.com", "senha", "engenharia");

    assert(mentor.getNome() == "Joao Lucas");
    assert(mentor.getEmail() == "joaolucas@exemplo.com");
    assert(mentor.getSenha() == "senha");
    assert(mentor.getCurso() == "engenharia");
}

void testSettersAndGettersMentor() {
    Mentor mentor("Joao Lucas", "joaolucas@exemplo.com", "senha", "engenharia");

    mentor.setCurso("engenharia eletrica");
    assert(mentor.getCurso() == "engenharia eletrica");

    mentor.setHistorico("historico de mentoria");
    assert(mentor.getHistorico() == "historico de mentoria");
}

void testVectorMethodsMentor() {
    Mentor mentor("Joao Lucas", "joaolucas@exemplo.com", "senha", "engenharia");
    MentoriaIMP mentoria1;
    MentoriaIMP mentoria2;

    mentor.addInscricoes(&mentoria1);
    mentor.addMinistradas(&mentoria2);

    // Test if added correctly
    assert(mentor.getInscricoes().size() == 1);
    assert(mentor.getMinistradas().size() == 1);

    // Test removal
    mentor.rmvInscricoes(&mentoria1);
    assert(mentor.getInscricoes().empty());

    mentor.rmvMinistradas(&mentoria2);
    assert(mentor.getMinistradas().empty());

}

void testEqualityOperatorMentor() {
    Mentor mentor1("Joao Lucas", "joaolucas@exemplo.com", "senha", "engenharia");
    Mentor mentor2("Joao Lucas", "joaolucas@exemplo.com", "senha", "engenharia");
    Mentor mentor3("Maria Dias", "mariadias@example.com", "senha123", "fisica");

    assert(mentor1 == mentor2);
    assert(!(mentor1 == mentor3));
}
