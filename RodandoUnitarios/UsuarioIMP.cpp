#include "UsuarioIMP.h"

UsuarioIMP::UsuarioIMP(const std::string Nome, const std::string Email, const std::string Senha) : Nome(Nome), Email(Email), Senha(Senha) {}
UsuarioIMP::UsuarioIMP(const UsuarioIMP& other) : Nome(other.Nome), Email(other.Email), Senha(other.Senha){}
UsuarioIMP::~UsuarioIMP(){}

std::string UsuarioIMP::getNome() const { return Nome; }
std::string UsuarioIMP::getEmail() const { return Email; }
std::string UsuarioIMP::getSenha() const { return Senha; }

void UsuarioIMP::setNome( const std::string Nome ) { this->Nome = Nome; }
void UsuarioIMP::setEmail( const std::string Email ) { this->Email = Email; }
void UsuarioIMP::setSenha( const std::string Senha ) { this->Senha = Senha; }

Usuario& UsuarioIMP::operator=(const Usuario& other) {
    Nome = other.getNome();
    Email = other.getEmail();
    Senha = other.getSenha();
    return *this;
}

bool UsuarioIMP::operator==(const Usuario& other){
    return (Nome == other.getNome() && Email == other.getEmail() && Senha == other.getSenha());
}
