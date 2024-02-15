#include <cassert>
#include <iostream>
#include "unit_mentor.h"
#include "unit_Mentoria.h"
#include "unit_Usuario.h"

using namespace std;

int main() {
    testConstructorMentor();
    testSettersAndGettersMentor();
    testVectorMethodsMentor();
    testEqualityOperatorMentor();

    testConstructorMentoria();
    testGettersAndSettersMentoria();

    testConstructorAndGetterUsuario();
    testSettersUsuario();
    testEqualityOperatorUsuario();

    cout << "Passou em todos os testes unitarios!" << endl;

    return 0;
}