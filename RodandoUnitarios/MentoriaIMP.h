/*************************************************
 * @file MentorIMP.h
 * @author Pedro Augusto Sousa Gonçalves
 * @brief This file represents the Mentoria implementation
*************************************************/
#ifndef MENTORIAIMP_H
#define MENTORIAIMP_H

#include "Mentoria.h"
#include "Usuario.h"

/********************************************************************
 *@brief The Usuario implementation implements attributes and methods
********************************************************************/

class MentoriaIMP: public Mentoria{
private:
    /**
         * @brief Construct a new Mentoria by a obj
         * @param other Mentoria obj
    */
    MentoriaIMP(const MentoriaIMP& other);

    /**
         * @brief This method is overloading the '=' operator, "cloning" from one Mentoria to another
         * @param other Mentoria obj to be cloned must be passed
         * @return A Mentoria is returned that is a clone of what was passed to the method
    */
    Mentoria& operator=(const Mentoria& other) override;

protected:
    std::string Codigo; /**< Codigo string attribute. */
    std::string Data; /**< Data string attribute. */
    double Valor; /**< Double attribute. */
    Usuario* Professor; /** < Mentor pointer Atribute*/
    int Deferida; /** < Int Atribute*/

public:
    // Constructor
    /**
         * @brief Construct a new Mentoria by Codigo, Data and Valor
         * @param Codigo string with default value "NO_CODE"
         * @param Data string with default value "NO_DATE"
         * @param Valor double with default value 0.0
    */
    MentoriaIMP(const std::string Codigo = "NO_CODE", const std::string Data = "NO_DATE", const double Valor = 0.0, Usuario* Professor = nullptr);

    //Destructor
    /**
         * @brief This destructor is a destructor of the class
    */
    //virtual ~MentoriaIMP() override;

    // Getters
    /**
         * @brief This method returns the Codigo of an Mentoria
         * @return a string containing the Codigo is returned
    */
    std::string getCodigo() const override;
    /**
         * @brief This method returns the Data of an Mentoria
         * @return a string containing the Data is returned
    */
    std::string getData() const override;
    /**
         * @brief This method returns the Valor of an Mentoria
         * @return a double containing the Data is returned
    */
    double getValor() const override;
    /**
         * @brief This method returns a Usuario pointer to the Professor of an Mentoria
         * @return A Usuario Pointer containing the Data is returned
    */
    Usuario* getProfessor() const override;
    /**
         * @brief This method returns a int to the Deferida of an Mentoria
         * @return A int containing the Data is returned
    */
    int getDeferida() const override;

    // Setters
    /**
         * @brief This method assigns a string to Codigo of an Mentoria
         * @param Codigo string must be passed to the method
    */
    void setCodigo(const std::string Codigo) override;
    /**
         * @brief This method assigns a string to Data of an Mentoria
         * @param Data string must be passed to the method
    */
    void setData(const std::string Data) override;
    /**
         * @brief This method assigns a double to Valor of an Mentoria
         * @param Valor double must be passed to the method
    */
    void setValor(const double Valor) override;
    /**
         * @brief This method assigns a Usuario pointer to the Professor of an Mentoria
         * @param Professor Usuario pointer must be passed to the method
    */
    void setProfessor(Usuario* Professor) override;
    /**
         * @brief This method assigns a int to the Deferida of an Mentoria
         * @param Deferida int must be passed to the method
    */
    void setDeferida(int Deferida) override;

    /**
         * @brief This method is overloading the '==' operator, comparating one Mentoria with another
         * @param other Mentoria obj to be comparated must be passed
         * @return Bool value is returned, True if equal, False if not
    */
    bool operator==(const Mentoria& other) override;
};

#endif // MENTORIA_H
