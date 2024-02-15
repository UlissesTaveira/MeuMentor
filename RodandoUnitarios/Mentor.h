/*************************************************
 * @file Mentor.h
 * @author Pedro Augusto Sousa Gonçalves
 * @brief This file represents the Mentor
*************************************************/
#ifndef MENTOR_H
#define MENTOR_H

#include <vector>

#include "UsuarioIMP.h"
#include "Mentoria.h"

/*************************************************************************************
 *@brief The Mentor class represnts the students who need help and who want offer help
*************************************************************************************/

class Mentor: public UsuarioIMP{
protected:
     std::string Curso; /**< Curso string attribute. */
     std::string Historico; /**< Historico string attribute. */
     std::vector<Mentoria*> Inscricoes; /**< Inscricoes Mentoria's vector atribute */
     std::vector<Mentoria*> Ministradas; /**< Ministradas Mentoria's vector atribute */


public:
     //Consstructor
     /**
          * @brief Construct a new Mentor by Nome, Email, Senha, Curso and Historico
          * @param Nome string with default value "NO_NAME"
          * @param Email string with default value "NO_EMAIL"
          * @param Senha string with default value "NO_PASSWORD"
          * @param Curso string with default value "NO_CURSO"
     */
     Mentor(const std::string Nome = "NO_NAME", const std::string Email = "NO_EMAIL", const std::string Senha = "NO_PASSWORD",
           const std::string Curso = "NO_CUSO");

     //Destructor
     /**
          * @brief This destructor is a destructor of the class
     */
     virtual ~Mentor() override;

     //Getters
     /**
          * @brief This method returns the Curso of an Mentor
          * @return a string containing the Curso is returned
     */
     std::string getCurso() const;

     /**
          * @brief This method returns the Historico of an Mentor
          * @return a string containing the Historico is returned
     */
     std::string getHistorico() const;

     /**
          * @brief This method returns the Inscricoes of an Mentor
          * @return a Mentoria's vector containing the Inscricoes is returned
     */
     std::vector<Mentoria*> getInscricoes() const;

     /**
          * @brief This method returns the Ministradas of an Mentor
          * @return a Mentoria's vector containing the Ministradas is returned
     */
     std::vector<Mentoria*> getMinistradas() const;

     //Setters
     /**
          * @brief This method assigns a string to Curso of an Mentor
          * @param Curso string must be passed to the method
     */
     void setCurso(const std::string Curso);

     /**
          * @brief This method assigns a string to Historico of an Mentor
          * @param Historico string must be passed to the method
     */
     void setHistorico(const std::string Historico);

     /**
          * @brief This method assigns a Mentoria's vector to Inscricoes of an Mentor
          * @param Inscricoes Mentoria's vector be passed to the method
     */
     void setInscricoes(const std::vector<Mentoria*> Inscricoes);

     /**
          * @brief This method assigns a Mentoria's vector to Ministradas of an Mentor
          * @param Ministradas Mentoria's vector be passed to the method
     */
     void setMinistradas(const std::vector<Mentoria*> Ministradas);

     //Other Methods
     //add
     /**
          * @brief This method add a Mentoria pointer to the vector Inscricoes of a Mentor
          * @param mentoria Mentoria pointer must be passed to the method
     */
     void addInscricoes(Mentoria* mentoria);

     /**
          * @brief This method add a Mentoria pointer to the vector Ministradas of a Mentor
          * @param mentoria Mentoria pointer must be passed to the method
     */
     void addMinistradas(Mentoria* mentoria);

     //remove
     /**
          * @brief This method remove a Mentoria pointer of the vector Inscricoes of a Mentor
          * @param mentoria Mentoria pointer must be passed to the method
          * @return a bool value, true if can remove, false if not
     */
     bool rmvInscricoes(const Mentoria* mentoria);

     /**
          * @brief This method remove a Mentoria pointer of the vector Ministradas of a Mentor
          * @param mentoria Mentoria pointer must be passed to the method
          * @return a bool value, true if can remove, false if not
     */
     bool rmvMinistradas(const Mentoria* mentoria);

     /**
         * @brief This method is overloading the '==' operator, comparating one Usuario with another
         * @param other Usuario obj to be comparated must be passed
         * @return Bool value is returned, True if equal, False if not
     */
     bool operator==(const Usuario& other) override;

};

#endif // MENTOR_H
