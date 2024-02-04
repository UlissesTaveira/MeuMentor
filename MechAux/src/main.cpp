#include <iostream>
#include "Mentoria.h"

int main() {
    // Solicitação para o usuário inserir os dados
    std::string codigoDisciplina, dataMentoria;
    double valor;

    std::cout << "Digite o código da disciplina: ";
    std::cin >> codigoDisciplina;

    std::cout << "Digite a data da mentoria: ";
    std::cin >> dataMentoria;

    std::cout << "Digite o valor em reais: ";
    std::cin >> valor;

    // Criando uma instância de Mentoria e configurando os valores
    Mentoria mentoria;
    mentoria.setCodigoDisciplina(codigoDisciplina);
    mentoria.setDataMentoria(dataMentoria);
    mentoria.setValor(valor);

    return 0;
}
