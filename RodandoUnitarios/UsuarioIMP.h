/*************************************************
 * @file UsuarioIMP.hpp
 * @author Pedro Augusto Sousa Gonçalves
 * @brief This file represents the Usuario implementation
*************************************************/
#ifndef USUARIOIMP_H
#define USUARIOIMP_H

#include "Usuario.h"

/************************************************************************************
 *@brief The Usuario implementation defines the attributes and implements the methods
************************************************************************************/

class UsuarioIMP: public Usuario{
public:
    /**
         * @brief Construct a new Usuario by a obj
         * @param other Usuario obj
    */
    UsuarioIMP(const UsuarioIMP& other);

    /**
         * @brief This method is overloading the '=' operator, "cloning" from one Usuario to another
         * @param other Usuario obj to be cloned must be passed
         * @return A Usuario is returned that is a clone of what was passed to the method
    */
    virtual Usuario& operator=(const Usuario& other) override;

protected:
    std::string Nome; /**< Nome string attribute. */
    std::string Email; /**< Email string attribute. */
    std::string Senha; /**< Senha string attribute. */

public:
    //Consstructor
    /**
         * @brief Construct a new Usuario by Nome, Email and Senha
         * @param Nome string with default value "NO_NAME"
         * @param Email string with default value "NO_EMAIL"
         * @param Senha string with default value "NO_PASSWORD"
    */
    UsuarioIMP(const std::string Nome = "NO_NAME", const std::string Email = "NO_EMAIL", const std::string Senha = "NO_PASSWORD");

    //Destructor
    /**
         * @brief This destructor is a destructor of the class
    */
    virtual ~UsuarioIMP() override;


    //Getters
    /**
         * @brief This method returns the Nome of an Usuario
         * @return a string containing the Nome is returned
    */
    virtual std::string getNome() const override;

    /**
         * @brief This method returns the Email of an Usuario
         * @return a string containing the Email is returned
    */
    virtual std::string getEmail() const override;

    /**
         * @brief This method returns the Senha of an Usuario
         * @return a string containing the Senha is returned
    */
    virtual std::string getSenha() const override;

    //Setters
    /**
         * @brief This method assigns a string to Nome of an Usuario
         * @param Nome string must be passed to the method
    */
    virtual void setNome(const std::string Nome) override;

    /**
         * @brief This method assigns a string to Email of an Usuario
         * @param Email string must be passed to the method
    */
    virtual void setEmail(const std::string Email) override;

    /**
         * @brief This method assigns a string to Senha of an Usuario
         * @param Senha string must be passed to the method
    */
    virtual void setSenha(const std::string Senha) override;

    /**
         * @brief This method is overloading the '==' operator, comparating one Usuario with another
         * @param other Usuario obj to be comparated must be passed
         * @return Bool value is returned, True if equal, False if not
    */
    virtual bool operator==(const Usuario& other); 
};

#endif // USUARIOIMP_H
