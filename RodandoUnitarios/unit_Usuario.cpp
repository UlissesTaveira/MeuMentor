#include <cassert>
#include "UsuarioIMP.h"
#include "unit_Usuario.h"

void testConstructorAndGetterUsuario() {
    UsuarioIMP usuario("John Doe", "john@example.com", "senha");

    assert(usuario.getNome() == "John Doe");
    assert(usuario.getEmail() == "john@example.com");
    assert(usuario.getSenha() == "senha");
}

void testSettersUsuario() {
    UsuarioIMP usuario("John Doe", "john@example.com", "senha");

    usuario.setNome("Jane Doe");
    assert(usuario.getNome() == "Jane Doe");

    usuario.setEmail("jane@example.com");
    assert(usuario.getEmail() == "jane@example.com");

    usuario.setSenha("newsenha");
    assert(usuario.getSenha() == "newsenha");
}

void testEqualityOperatorUsuario() {
    UsuarioIMP usuario1("John Doe", "john@example.com", "senha");
    UsuarioIMP usuario2("John Doe", "john@example.com", "senha");
    UsuarioIMP usuario3("Jane Smith", "jane@example.com", "newsenha");

    assert(usuario1 == usuario2);
    assert(!(usuario1 == usuario3));
}

