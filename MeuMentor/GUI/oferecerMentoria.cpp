/********************************************************************************
** Form generated from reading UI file 'OferecerMentoriamCAGRu.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef OFERECERMENTORIAMCAGRU_H
#define OFERECERMENTORIAMCAGRU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_oferecerMentoria
{
public:
    QPushButton *InscricaoMentor;
    QPushButton *novaMentoria;

    void setupUi(QDialog *oferecerMentoria)
    {
        if (oferecerMentoria->objectName().isEmpty())
            oferecerMentoria->setObjectName(QStringLiteral("oferecerMentoria"));
        oferecerMentoria->resize(400, 300);
        InscricaoMentor = new QPushButton(oferecerMentoria);
        InscricaoMentor->setObjectName(QStringLiteral("InscricaoMentor"));
        InscricaoMentor->setGeometry(QRect(50, 80, 131, 121));
        InscricaoMentor->setAutoDefault(false);
        novaMentoria = new QPushButton(oferecerMentoria);
        novaMentoria->setObjectName(QStringLiteral("novaMentoria"));
        novaMentoria->setGeometry(QRect(220, 80, 131, 121));
        novaMentoria->setAutoDefault(false);
        novaMentoria->raise();
        InscricaoMentor->raise();
        QWidget::setTabOrder(novaMentoria, InscricaoMentor);

        retranslateUi(oferecerMentoria);

        QMetaObject::connectSlotsByName(oferecerMentoria);
    } // setupUi

    void retranslateUi(QDialog *oferecerMentoria)
    {
        oferecerMentoria->setWindowTitle(QApplication::translate("oferecerMentoria", "Oferecer Mentoria", nullptr));
        InscricaoMentor->setText(QApplication::translate("oferecerMentoria", "Inscri\303\247\303\243o para Mentor", nullptr));
        novaMentoria->setText(QApplication::translate("oferecerMentoria", "Cadastrar Nova Mentoria", nullptr));
    } // retranslateUi

};

namespace Ui {
    class oferecerMentoria: public Ui_oferecerMentoria {};
} // namespace Ui

QT_END_NAMESPACE

#endif // OFERECERMENTORIAMCAGRU_H
