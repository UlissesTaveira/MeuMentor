#include "MeuMentor.h"

MeuMentor::MeuMentor(){ }

MeuMentor::~MeuMentor(){ 
    for(auto i : mentorias) delete i;
    mentorias.clear();
 }

void MeuMentor::add(Mentoria* m){ mentorias.push_back(m); }
void MeuMentor::rmv(Mentoria* m){ 
    for(std::vector<Mentoria*>::iterator i = mentorias.begin(); i < mentorias.end(); i++)
        if((*i) == m) mentorias.erase(i);
}

Mentoria* MeuMentor::criarMentoria(const std::string codigoDisciplina, const std::string dataMentoria, const double valor){
    Mentoria* m = new Mentoria(codigoDisciplina, dataMentoria, valor);
    mentorias.push_back(m);
    return m;
}

void MeuMentor::telaInicial(){
    int op = -1;

    std::cout << "!!!Bem Vindo ao MeuMentor!!!\n\n" 
              << "  1) Buscar Mentoria\n"
              << "  2) Cadatrar Mentoria\n"
              << "  0) para sair\n\n";
    
    while(op < 0 || op >2) {
        std::cout << "Selecione uma opção: "; std::cin >> op;
        if(op < 0 || op >2) std::cout << "ERRO: OPÇÂO INVALIDA\n";
    }

    switch (op){
        case 1:
            telaProcurarMonitoria();
            break;

        case 2:
            telaCriarMentoria();
            break;
        
        case 0:
            exit(0);
    }
        
}

void MeuMentor::telaCriarMentoria(){
    std::string codigoDisciplina;
    std::string dataMentoria;
    double valor;

    std::cout << "\n\nDigite o codigo da diciplina: ";
    std::cin  >> codigoDisciplina;

    std::cout << "Digite a data de quando irá ocorrer a mentoria (dd/mm/aa): ";
    std::cin >> dataMentoria;

    std::cout << "Digite o valor da mentoria: ";
    std::cin >> valor;

    if(validarMonitor(codigoDisciplina)){
        criarMentoria(codigoDisciplina, dataMentoria, valor);
        std::cout << "\nMentoria Criada com sucesso\n\n";
        telaInicial();
    }
    else{
        std::cout << "\nMentoria não pode ser Criada\n\n";
        telaInicial();
    }
}

bool MeuMentor::validarMonitor(std::string codigo){
    
    double media;

    std::cout << "\nQual sua media na materia" << codigo << ": ";
    std::cin >> media;

    if(media >= 8) return true;
    else return false;
}

void MeuMentor::telaProcurarMonitoria(){
    std::string codigo;

    std::cout << "\nDigite o codigo da materia quer uma mentoria (\"back\" para voltar): ";
    std::cin >> codigo;

    if(codigo == "back") telaInicial();

    std::vector<Mentoria*> resposta = buscaMentoria(codigo);

    if(resposta.empty()) { std::cout << "Mentoria não encontrada"; telaProcurarMonitoria();}
    else{
        std::cout << std::endl;
        for(auto i : resposta) std::cout << "-----------------------------------" << *i ;
        std::cout << "-----------------------------------\n";
        resposta.clear();
        telaProcurarMonitoria();
    }
}

std::vector<Mentoria*> MeuMentor::buscaMentoria(std::string codigo){
    std::vector<Mentoria*> resposta;
    for(auto i : mentorias) if(i->getCodigoDisciplina() == codigo) resposta.push_back(i);
    return resposta;
}
