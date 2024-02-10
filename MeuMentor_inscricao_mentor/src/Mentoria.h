#ifndef MENTORIA_H
#define MENTORIA_H

#include <string>
#include <iostream>

class Mentoria {
private:
    std::string codigoDisciplina;
    std::string dataMentoria;
    std::string docProficiencia;
    double valor;

public:
    // Construtor padrão
    Mentoria(const std::string codigoDisciplina = "NOCODE", const std::string dataMentoria = "NODATE", const std::string docProficiencia = "NODATE", const double valor = 0);

    //Destrutor padrão
    virtual ~Mentoria();

    // Setters
    void setCodigoDisciplina(const std::string& codigo);
    void setDataMentoria(const std::string& data);
    void setValor(double valor);

    // Getters
    std::string getCodigoDisciplina() const;
    std::string getDataMentoria() const;
    double getValor() const;

    //Sobrecarga
    friend std::ostream& operator<<(std::ostream& out, const Mentoria& m);
    friend bool operator==(const Mentoria& m1, const Mentoria& m2);
};

#endif // MENTORIA_H
