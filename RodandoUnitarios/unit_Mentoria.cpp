#include <cassert>
#include "MentoriaIMP.h"
#include "UsuarioIMP.h"
#include "unit_Mentoria.h"

using namespace std;

void testConstructorMentoria() {
    Usuario* professor = new UsuarioIMP("Prof. Smith", "smith@example.com", "senha");
    MentoriaIMP mentoria("123", "2024-02-15", 50.0, professor);

    assert(mentoria.getCodigo() == "123");
    assert(mentoria.getData() == "2024-02-15");
    assert(mentoria.getValor() == 50.0);
    assert(mentoria.getProfessor() == professor);
    assert(mentoria.getDeferida() == 0);

    delete professor;
}

void testGettersAndSettersMentoria() {
    Usuario* professor = new UsuarioIMP("Prof. Smith", "smith@example.com", "senha");
    MentoriaIMP mentoria("123", "2024-02-15", 70.0, professor);

    mentoria.setCodigo("456");
    assert(mentoria.getCodigo() == "456");

    mentoria.setData("2024-03-20");
    assert(mentoria.getData() == "2024-03-20");

    assert(mentoria.getValor() == 70.0);

    UsuarioIMP* newProfessor = new UsuarioIMP("Prof. Johnson", "johnson@example.com", "senha123");
    mentoria.setProfessor(newProfessor);
    assert(mentoria.getProfessor() == newProfessor);

    mentoria.setDeferida(1);
    assert(mentoria.getDeferida() == 1);

    delete professor;
    delete newProfessor;
}


