#ifndef MENTORIA_H
#define MENTORIA_H

#include <string>

class Mentoria {
private:
    std::string codigoDisciplina;
    std::string dataMentoria;
    double valor;

public:
    // Construtor padrão
    Mentoria();

    // Setters
    void setCodigoDisciplina(const std::string& codigo);
    void setDataMentoria(const std::string& data);
    void setValor(double valor);

    // Getters
    std::string getCodigoDisciplina() const;
    std::string getDataMentoria() const;
    double getValor() const;
};

#endif // MENTORIA_H
