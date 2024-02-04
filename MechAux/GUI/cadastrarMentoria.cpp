/********************************************************************************
** Form generated from reading UI file 'CadastrarMentoriapRFgEa.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef CADASTRARMENTORIAPRFGEA_H
#define CADASTRARMENTORIAPRFGEA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cadastroMentoria
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QComboBox *comboBox;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QPushButton *cadastrarM;

    void setupUi(QDialog *cadastroMentoria)
    {
        if (cadastroMentoria->objectName().isEmpty())
            cadastroMentoria->setObjectName(QStringLiteral("cadastroMentoria"));
        cadastroMentoria->resize(400, 300);
        verticalLayoutWidget = new QWidget(cadastroMentoria);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(100, 60, 201, 161));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        comboBox = new QComboBox(verticalLayoutWidget);
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));

        verticalLayout->addWidget(comboBox);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        lineEdit_2 = new QLineEdit(verticalLayoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        verticalLayout->addWidget(lineEdit_2);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        lineEdit = new QLineEdit(verticalLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        cadastrarM = new QPushButton(verticalLayoutWidget);
        cadastrarM->setObjectName(QStringLiteral("cadastrarM"));

        verticalLayout->addWidget(cadastrarM);


        retranslateUi(cadastroMentoria);

        QMetaObject::connectSlotsByName(cadastroMentoria);
    } // setupUi

    void retranslateUi(QDialog *cadastroMentoria)
    {
        cadastroMentoria->setWindowTitle(QApplication::translate("cadastroMentoria", "Cadastro de Mentoria", nullptr));
        label_2->setText(QApplication::translate("cadastroMentoria", "Informe o c\303\263digo da disciplina:", nullptr));
        comboBox->setItemText(0, QApplication::translate("cadastroMentoria", "Selecionar", nullptr));

        label->setText(QApplication::translate("cadastroMentoria", "Informe a data da mentoria:", nullptr));
        lineEdit_2->setText(QApplication::translate("cadastroMentoria", "dd/mm/aa", nullptr));
        label_3->setText(QApplication::translate("cadastroMentoria", "Informe o valor, em real, da mentoria:", nullptr));
        lineEdit->setText(QApplication::translate("cadastroMentoria", "0,00", nullptr));
        cadastrarM->setText(QApplication::translate("cadastroMentoria", "Cadastrar Mentoria", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cadastroMentoria: public Ui_cadastroMentoria {};
} // namespace Ui

QT_END_NAMESPACE

#endif // CADASTRARMENTORIAPRFGEA_H
