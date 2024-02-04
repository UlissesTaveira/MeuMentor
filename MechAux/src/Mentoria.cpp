#include "Mentoria.h"

// Implementação dos métodos da classe Mentoria

Mentoria::Mentoria() : valor(0.0) {}

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
