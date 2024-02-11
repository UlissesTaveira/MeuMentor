/********************************************************************************
** Form generated from reading UI file 'TelaPrincipalAlunotQBkkc.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef TELAPRINCIPALALUNOTQBKKC_H
#define TELAPRINCIPALALUNOTQBKKC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_TelaPrincipalAluno
{
public:
    QLineEdit *lineEdit_2;
    QLabel *label;

    void setupUi(QDialog *TelaPrincipalAluno)
    {
        if (TelaPrincipalAluno->objectName().isEmpty())
            TelaPrincipalAluno->setObjectName(QStringLiteral("TelaPrincipalAluno"));
        TelaPrincipalAluno->resize(400, 300);
        lineEdit_2 = new QLineEdit(TelaPrincipalAluno);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setEnabled(true);
        lineEdit_2->setGeometry(QRect(50, 110, 281, 20));
        lineEdit_2->setReadOnly(true);
        label = new QLabel(TelaPrincipalAluno);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 20, 291, 20));

        retranslateUi(TelaPrincipalAluno);

        QMetaObject::connectSlotsByName(TelaPrincipalAluno);
    } // setupUi

    void retranslateUi(QDialog *TelaPrincipalAluno)
    {
        TelaPrincipalAluno->setWindowTitle(QApplication::translate("TelaPrincipalAluno", "Tela Principal Aluno", nullptr));
        lineEdit_2->setText(QApplication::translate("TelaPrincipalAluno", "Buscar Por Disciplina", nullptr));
        label->setText(QApplication::translate("TelaPrincipalAluno", "Meu Perfil    |    Oferecer mentoria    |    Conversas    |    Sair", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaPrincipalAluno: public Ui_TelaPrincipalAluno {};
} // namespace Ui

QT_END_NAMESPACE

#endif // TELAPRINCIPALALUNOTQBKKC_H
