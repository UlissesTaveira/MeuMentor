#include "Mentor.h"

Mentor::Mentor(const std::string Nome, const std::string Email, const std::string Senha, 
                const std::string Curso): UsuarioIMP(Nome, Email, Senha), Curso(Curso) {}

Mentor::~Mentor(){ Inscricoes.clear(); Ministradas.clear(); }

std::string Mentor::getCurso() const { return Curso; }
std::string Mentor::getHistorico() const { return Historico; }
std::vector<Mentoria*> Mentor::getInscricoes() const { return Inscricoes; }
std::vector<Mentoria*> Mentor::getMinistradas() const { return Ministradas; }

void Mentor::setCurso(const std::string Curso){ this->Curso = Curso; }
void Mentor::setHistorico(const std::string Historico){ this->Historico = Historico; }
void Mentor::setInscricoes(const std::vector<Mentoria*> Inscricoes){
    this->Inscricoes.clear();
    for(auto i : Inscricoes) this->Inscricoes.push_back(i);
}
void Mentor::setMinistradas(const std::vector<Mentoria*> Ministradas){
    this->Ministradas.clear();
    for(auto i : Ministradas) this->Ministradas.push_back(i);
}

void Mentor::addInscricoes(Mentoria* mentoria){ Inscricoes.push_back(mentoria); }
void Mentor::addMinistradas(Mentoria* mentoria){ Ministradas.push_back(mentoria); }
bool Mentor::rmvInscricoes(const Mentoria* mentoria){
    for(std::vector<Mentoria*>::iterator i = Inscricoes.begin(); i != Inscricoes.end(); i++)
        if(*i == mentoria) { Inscricoes.erase(i); return true; break;}
    return false;
}
bool Mentor::rmvMinistradas(const Mentoria* mentoria){
    for(std::vector<Mentoria*>::iterator i = Ministradas.begin(); i != Ministradas.end(); i++)
        if(*i == mentoria) { Ministradas.erase(i); return true; break;}
    return false;
}

bool Mentor::operator==(const Usuario& other){
    return (Nome == other.getNome() && Email == other.getEmail() && Senha == other.getSenha());
}


