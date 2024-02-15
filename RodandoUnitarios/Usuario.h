/****************************************************
 * @file Usuario.h
 * @author Pedro Augusto Sousa Gonçalves
 * @brief This file represents the Usuario interface
****************************************************/
#ifndef USUARIO_H
#define USUARIO_H

//Bibliotecas

#include <string>

/******************************************************************************************
 *@brief The Usuario Interface is the Interface that defines the methods to be implemented
******************************************************************************************/

class Usuario{
private:
    /**
         * @brief This method is overloading the '=' operator, "cloning" from one Usuario to another
         * @param other Usuario obj to be cloned must be passed
         * @return A Usuario is returned that is a clone of what was passed to the method
    */
    virtual Usuario& operator=(const Usuario& other) = 0;

public:
    //Destructor
    /**
         * @brief This destructor is a virtual destructor of the Class
    */
    virtual ~Usuario() {};

    //Getters
    /**
         * @brief This method returns the Nome of an Usuario
         * @return a string containing the Nome is returned
    */
    virtual std::string getNome() const = 0;

    /**
         * @brief This method returns the Email of an Usuario
         * @return a string containing the Email is returned
    */
    virtual std::string getEmail() const = 0;

    /**
         * @brief This method returns the Senha of an Usuario
         * @return a string containing the Senha is returned
    */
    virtual std::string getSenha() const = 0;

    //Setters
    /**
         * @brief This method assigns a string to Nome of an Usuario
         * @param Nome string must be passed to the method
    */
    virtual void setNome(const std::string Nome) = 0;

    /**
         * @brief This method assigns a string to Email of an Usuario
         * @param Email string must be passed to the method
    */
    virtual void setEmail(const std::string Email) = 0;

    /**
         * @brief This method assigns a string to Senha of an Usuario
         * @param Senha string must be passed to the method
    */
    virtual void setSenha(const std::string Senha) = 0;

    /**
         * @brief This method is overloading the '==' operator, comparating one Usuario with another
         * @param other Usuario obj to be comparated must be passed
         * @return Bool value is returned, True if equal, False if not
    */
    virtual bool operator==(const Usuario& other) = 0; 
};

#endif // USUARIO_H
