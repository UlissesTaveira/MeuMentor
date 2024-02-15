#include "MentoriaIMP.h"

MentoriaIMP::MentoriaIMP(const std::string Codigo, const std::string Data, const double Valor, Usuario* Professor): Codigo(Codigo), Data(Data), Valor(Valor), Professor(Professor) { Deferida = 0; }
MentoriaIMP::MentoriaIMP(const MentoriaIMP& other): Codigo(other.Codigo), Data(other.Data), Valor(other.Valor), Professor(other.Professor), Deferida(other.Deferida) { }

//MentoriaIMP::~MentoriaIMP(){}

std::string MentoriaIMP::getCodigo() const{ return Codigo; }
std::string MentoriaIMP::getData() const{ return Data; }
double MentoriaIMP::getValor() const{ return Valor; }
Usuario* MentoriaIMP::getProfessor() const{ return Professor; }
int MentoriaIMP::getDeferida() const { return Deferida; }

void MentoriaIMP::setCodigo(const std::string Codigo) { this->Codigo = Codigo; }
void MentoriaIMP::setData(const std::string Data) { this->Data = Data; }
void MentoriaIMP::setValor(const double Data) { this->Data = Data; }
void MentoriaIMP::setProfessor(Usuario* Professor) { this->Professor = Professor; }
void MentoriaIMP::setDeferida(int Deferida) { this->Deferida = Deferida; }

bool MentoriaIMP::operator==(const Mentoria& other){
    return (Codigo == other.getCodigo() && Data == other.getData() && Valor == other.getValor() && Professor == other.getProfessor() && Deferida == other.getDeferida());
}
Mentoria& MentoriaIMP::operator=(const Mentoria& other){
    Codigo = other.getCodigo();
    Data = other.getData();
    Valor = other.getValor();
    Professor = other.getProfessor();
    Deferida = other.getDeferida();
    return *this;
}