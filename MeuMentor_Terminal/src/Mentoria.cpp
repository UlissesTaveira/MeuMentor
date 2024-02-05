#include "Mentoria.h"

// Implementação dos métodos da classe Mentoria

Mentoria::Mentoria(const std::string codigoDisciplina, const std::string dataMentoria, const double valor) : codigoDisciplina(codigoDisciplina), dataMentoria(dataMentoria), valor(valor){}

Mentoria::~Mentoria(){}

void Mentoria::setCodigoDisciplina(const std::string& codigo) {
    codigoDisciplina = codigo;
}

void Mentoria::setDataMentoria(const std::string& data) {
    dataMentoria = data;
}

void Mentoria::setValor(double novoValor) {
    valor = novoValor;
}

std::string Mentoria::getCodigoDisciplina() const {
    return codigoDisciplina;
}

std::string Mentoria::getDataMentoria() const {
    return dataMentoria;
}

double Mentoria::getValor() const {
    return valor;
}

std::ostream& operator<<(std::ostream& out, const Mentoria& m){
    out << "\nCodigo: " << m.codigoDisciplina << std::endl
        << "Data: " << m.dataMentoria << std::endl
        << "Valor: " << m.valor << std::endl;

    return out;
}

bool operator==(const Mentoria& m1, const Mentoria& m2){
    return (m1.codigoDisciplina == m2.codigoDisciplina && m1.dataMentoria == m2.dataMentoria && m1.valor == m2.valor);
}