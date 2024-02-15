/*************************************************
 * @file Mentor.h
 * @author Pedro Augusto Sousa Gonçalves
 * @brief This file represents the Mentoria interface
*************************************************/
#ifndef MENTORIA_H
#define MENTORIA_H

#include <string>
#include "Usuario.h"

/******************************************************************************************
 *@brief The Mentoria Interface is the Interface that defines the methods to be implemented
******************************************************************************************/

class Mentoria{
private:
    /**
         * @brief This method is overloading the '=' operator, "cloning" from one Mentoria to another
         * @param other Mentoria obj to be cloned must be passed
         * @return A Mentoria is returned that is a clone of what was passed to the method
    */
    virtual Mentoria& operator=(const Mentoria& other) = 0;

public:

    //Destructor
    /**
         * @brief This destructor is a destructor of the class
    */
    //virtual ~Mentoria() = 0;

    // Getters
    /**
         * @brief This method returns the Codigo of an Mentoria
         * @return a string containing the Codigo is returned
    */
    virtual std::string getCodigo() const = 0;
    /**
         * @brief This method returns the Data of an Mentoria
         * @return a string containing the Data is returned
    */
    virtual std::string getData() const = 0;
    /**
         * @brief This method returns the Valor of an Mentoria
         * @return a double containing the Data is returned
    */
    virtual double getValor() const = 0;
    /**
         * @brief This method returns a Usuario pointer to the Professor of an Mentoria
         * @return A Usuario Pointer containing the Data is returned
    */
    virtual Usuario* getProfessor() const = 0;
    /**
         * @brief This method returns a int to the Deferida of an Mentoria
         * @return A int containing the Data is returned
    */
    virtual int getDeferida() const = 0;

    // Setters
    /**
         * @brief This method assigns a string to Codigo of an Mentoria
         * @param Codigo string must be passed to the method
    */
    virtual void setCodigo(const std::string codigo) = 0;
    /**
         * @brief This method assigns a string to Data of an Mentoria
         * @param Data string must be passed to the method
    */
    virtual void setData(const std::string data) = 0;
    /**
         * @brief This method assigns a double to Valor of an Mentoria
         * @param Valor double must be passed to the method
    */
    virtual void setValor(const double valor) = 0;
    /**
         * @brief This method assigns a Usuario pointer to the Professor of an Mentoria
         * @param Professor Usuario pointer must be passed to the method
    */
    virtual void setProfessor(Usuario* Professor) = 0;
    /**
         * @brief This method assigns a int to the Deferida of an Mentoria
         * @param Deferida int must be passed to the method
    */
    virtual void setDeferida(int Deferida) = 0;

    /**
         * @brief This method is overloading the '==' operator, comparating one Mentoria with another
         * @param other Mentoria obj to be comparated must be passed
         * @return Bool value is returned, True if equal, False if not
    */
    virtual bool operator==(const Mentoria& other) = 0; 
};

#endif // MENTORIA_H
