/********************************************************************************
** Form generated from reading UI file 'MeuPerfilllBRpA.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MEUPERFILLLBRPA_H
#define MEUPERFILLLBRPA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MeuPerfil
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QFrame *line;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label;
    QLabel *label_5;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLabel *label_6;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *MeuPerfil)
    {
        if (MeuPerfil->objectName().isEmpty())
            MeuPerfil->setObjectName(QStringLiteral("MeuPerfil"));
        MeuPerfil->resize(400, 300);
        horizontalLayoutWidget = new QWidget(MeuPerfil);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 250, 361, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setAutoDefault(false);

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setAutoDefault(false);

        horizontalLayout->addWidget(pushButton);

        line = new QFrame(MeuPerfil);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 80, 381, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        verticalLayoutWidget = new QWidget(MeuPerfil);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(40, 110, 151, 131));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        verticalLayout->addWidget(label);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);

        verticalLayoutWidget_2 = new QWidget(MeuPerfil);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(208, 110, 181, 51));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(verticalLayoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        verticalLayout_2->addWidget(label_3);

        label_6 = new QLabel(verticalLayoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_2->addWidget(label_6);

        verticalLayoutWidget_3 = new QWidget(MeuPerfil);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(40, 10, 141, 51));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(verticalLayoutWidget_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font);

        verticalLayout_3->addWidget(label_7);

        label_8 = new QLabel(verticalLayoutWidget_3);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_3->addWidget(label_8);

        pushButton_3 = new QPushButton(MeuPerfil);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(210, 10, 171, 23));
        pushButton_3->setAutoDefault(false);
        pushButton_4 = new QPushButton(MeuPerfil);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(290, 220, 91, 23));
        pushButton_4->setAutoDefault(false);

        retranslateUi(MeuPerfil);

        QMetaObject::connectSlotsByName(MeuPerfil);
    } // setupUi

    void retranslateUi(QDialog *MeuPerfil)
    {
        MeuPerfil->setWindowTitle(QApplication::translate("MeuPerfil", "Meu Perfil", nullptr));
        pushButton_2->setText(QApplication::translate("MeuPerfil", "Minhas Mentorias", nullptr));
        pushButton->setText(QApplication::translate("MeuPerfil", "Minhas Inscri\303\247\303\265es", nullptr));
        label_2->setText(QApplication::translate("MeuPerfil", "Cursando", nullptr));
        label_4->setText(QApplication::translate("MeuPerfil", "Ci\303\252ncia da Computa\303\247\303\243o", nullptr));
        label->setText(QApplication::translate("MeuPerfil", "Membro desde", nullptr));
        label_5->setText(QApplication::translate("MeuPerfil", "31 de janeiro de 2024", nullptr));
        label_3->setText(QApplication::translate("MeuPerfil", "E-mail", nullptr));
        label_6->setText(QApplication::translate("MeuPerfil", "puca.amagaru@aluno.ufop.edu.br", nullptr));
        label_7->setText(QApplication::translate("MeuPerfil", "Puca Amagaru", nullptr));
        label_8->setText(QApplication::translate("MeuPerfil", "Aluno", nullptr));
        pushButton_3->setText(QApplication::translate("MeuPerfil", "Modificar dados pessoais", nullptr));
        pushButton_4->setText(QApplication::translate("MeuPerfil", "Deletar Conta", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MeuPerfil: public Ui_MeuPerfil {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MEUPERFILLLBRPA_H
