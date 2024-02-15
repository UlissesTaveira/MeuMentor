#include "Admin.h"

Admin::~Admin(){}

bool Admin::operator==(const Usuario& other){
    return (Nome == other.getNome() && Email == other.getEmail() && Senha == other.getSenha()); 
}