/*****************************************
 * @file MeuMentor.h
 * @author Pedro Augusto Sousa Gonçalves
 * @brief This file represents the factory
*****************************************/

#ifndef MEUMENTOR_H
#define MEUMENTOR_H

#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <vector>

#include <Mentor.h>
#include <Admin.h>
#include <Mentoria.h>

/**************************************************************************************
 *@brief The MeuMentor implements implements the Factory pattern and acess the DataBase
**************************************************************************************/

class MeuMentor{
protected:
    QSqlDatabase DataBase; /**< DataBase is a QSqlDatabase atribute. */
    std::vector<Mentor*> Usuarios; /**< Usuarios is a Mentor pointers vector atribute. */
    std::vector<Admin*> Admins; /**< Admins is a Admin pointers vector atribute. */
    std::vector<Mentoria*> Mentorias; /**< Mentorias is a Mentoria pointers vector atribute. */

public:
    // Constructor
    /**
         * @brief Construct a new MeuMentor, and acess the DataBase
    */
    MeuMentor();

    //Destructor
    /**
         * @brief This destructor is a destructor of the class
    */
    ~MeuMentor();

    //Getters
    /**
         * @brief This method returns the DataBase of an MeuMentor
         * @return a QSqlDatabase containing the DataBase is returned
    */
    QSqlDatabase getDataBase() const;
    /**
         * @brief This method returns the Usuarios of an MeuMentor
         * @return Mentor pointers vector containing the Usuarios is returned
    */
    std::vector<Mentor*> getUsuarios() const;
    /**
         * @brief This method returns the Admins of an MeuMentor
         * @return Admin pointers vector containing the Admins is returned
    */
    std::vector<Admin*> getAdmins() const;
    /**
         * @brief This method returns the Mentorias of an MeuMentor
         * @return Admin pointers vector containing the Admins is returned
    */
    std::vector<Mentoria*> getMentorias() const;

    //Setters
    /**
         * @brief This method assigns a QSqlDatabase to DataBase of an MeuMentor
         * @param DataBase QSqlDatabase must be passed to the method
    */
    void setDataBase(const QSqlDatabase DataBase);
    /**
         * @brief This method assigns a Mentor pointers vector to Usuarios of an MeuMentor
         * @param Usuarios Mentor pointers vector must be passed to the method
    */
    void setUsuarios(const std::vector<Mentor*> Usuarios);
    /**
         * @brief This method assigns a Admin pointers vector to Admins of an MeuMentor
         * @param Admins Admin pointers vector must be passed to the method
    */
    void setAdmins(const std::vector<Admin*> Admins);
    /**
         * @brief This method assigns a Mentoria pointers vector to Mentorias of an MeuMentor
         * @param Mentorias Mentoria pointers vector must be passed to the method
    */
    void setMentorias(const std::vector<Mentoria*> Mentorias);

    //Other Methods
    //Add
    /**
         * @brief This method add a Mentor pointer to the vector Usuarios of a MeuMentor and in the DataBase too
         * @param mentor Mentor pointer must be passed to the method
    */
    void add(Mentor* mentor);
    /**
         * @brief This method add a Admin pointer to the vector Admins of a MeuMentor and in the DataBase too
         * @param admin Admin pointer must be passed to the method
    */
    void add(Admin* admin);
    /**
         * @brief This method add a Mentoria pointer to the vector Mentorias of a MeuMentor and in the DataBase too
         * @param mentoria Mentoria pointer must be passed to the method
    */
    void add(Mentoria* mentoria);

    //Rmv
    /**
         * @brief This method remove a Mentor pointer of the vector Usuarios of a MeuMentor and in the DataBase too
         * @param mentor Mentor pointer must be passed to the method
         * @return a bool value, true if can remove, false if not
    */
    bool rmv(Mentor* mentor);
    /**
         * @brief This method remove a Admin pointer of the vector Admins of a MeuMentor and in the DataBase too
         * @param admin Admins pointer must be passed to the method
         * @return a bool value, true if can remove, false if not
    */
    bool rmv(Admin* admin);
    /**
         * @brief This method remove a Mentoria pointer of the vector Mentorias of a MeuMentor and in the DataBase too
         * @param mentoria Mentoria pointer must be passed to the method
         * @return a bool value, true if can remove, false if not
    */
    bool rmv(Mentoria* mentoria);

    //Factory
    /**
         * @brief Create a instance of a Mentor
         * @param Nome string with default value "NO_NAME"
         * @param Email string with default value "NO_EMAIL"
         * @param Senha string with default value "NO_PASSWORD"
         * @param Curso string with default value "NO_CURSO"
         * @return A Mentor pointer to the new instance
    */
    Mentor* createUsuario(const std::string Nome = "NO_NAME", const std::string Email = "NO_EMAIL", const std::string Senha = "NO_PASSWORD",
           const std::string Curso = "NO_CUSO");
    //Factory
    /**
         * @brief Create a instance of a Admin
         * @param Nome string with default value "NO_NAME"
         * @param Email string with default value "NO_EMAIL"
         * @param Senha string with default value "NO_PASSWORD"
         * @return A Mentor pointer to the new instance
    */
    Admin* createAdmin(const std::string Nome = "NO_NAME", const std::string Email = "NO_EMAIL", const std::string Senha = "NO_PASSWORD");
    /**
         * @brief Create a instance of a Admin
         * @param Codigo string with default value "NO_CODE"
         * @param Data string with default value "NO_DATE"
         * @param Valor double with default value 0.0
         * @param Professor Usuario pointer with default value nullptr
         * @return A Mentor pointer to the new instance
    */
    Mentoria* createMentoria(const std::string Codigo = "NO_CODE", const std::string Data = "NO_DATE", const double Valor = 0.0, Usuario* Professor = nullptr);

    //DataBase
    /**
         * @brief This method read the DataBase and save the data in the RAM
    */
    void ReadDB();
    /**
         * @brief This method update the DataBase with the RAM data
    */
    void UpdateDb();
};

#endif // MEUMENTOR_H
