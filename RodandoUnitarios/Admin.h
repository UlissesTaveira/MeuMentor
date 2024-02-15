/*************************************************
 * @file Admin.h
 * @author Pedro Augusto Sousa Gonçalves
 * @brief This file represents the Admin
*************************************************/
#ifndef ADMIN_H
#define ADMIN_H

#include "UsuarioIMP.h"

/*************************************************************************************
 *@brief The Admin class represents who can administer the system
*************************************************************************************/

class Admin: public UsuarioIMP{
public:
     //Constructor
     /**
         * @brief Inherit the constructor from UsuarioIMP
     */
     using UsuarioIMP::UsuarioIMP;

     //Destructor
     /**
         * @brief This destructor is a destructor of the class
     */
     virtual ~Admin() override;

     /**
         * @brief This method is overloading the '==' operator, comparating one Usuario with another
         * @param other Usuario obj to be comparated must be passed
         * @return Bool value is returned, True if equal, False if not
     */
     bool operator==(const Usuario& other) override; 

};


#endif // ADMIN_H
