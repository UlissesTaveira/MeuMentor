#ifndef MEUMENTOR_H
#define MEUMENTOR_H

#include <string>
#include <vector>
#include <iostream>

#include "Mentoria.h"

class MeuMentor {
private:
    std::vector<Mentoria*> mentorias;

public:
    // Construtor padrão
    MeuMentor();

    //Destrutor padrão
    virtual ~MeuMentor();

    // add
    void add(Mentoria* m);

    //rm
    void rmv(Mentoria* m);

    //metodos
    Mentoria* criarMentoria(const std::string codigoDisciplina = "NOCODE", const std::string dataMentoria = "NODATE", const double valor = 0);
    void telaInicial();
    void telaCriarMentoria();
    void telaProcurarMonitoria();
    bool validarMonitor(const std::string codigoDisciplina);
    std::vector<Mentoria*> buscaMentoria(std::string codigo);

};

#endif // MENTORIA_H
