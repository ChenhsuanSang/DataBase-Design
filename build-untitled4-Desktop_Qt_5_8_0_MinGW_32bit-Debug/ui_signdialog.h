/********************************************************************************
** Form generated from reading UI file 'signdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNDIALOG_H
#define UI_SIGNDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignDialog
{
public:
    QPushButton *buttonSign;
    QPushButton *pushButton;
    QLabel *BPicture;
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *labelUser;
    QLineEdit *lineUser;
    QLabel *labelPwd;
    QLineEdit *linePwd;

    void setupUi(QDialog *SignDialog)
    {
        if (SignDialog->objectName().isEmpty())
            SignDialog->setObjectName(QStringLiteral("SignDialog"));
        SignDialog->resize(361, 261);
        buttonSign = new QPushButton(SignDialog);
        buttonSign->setObjectName(QStringLiteral("buttonSign"));
        buttonSign->setGeometry(QRect(80, 200, 93, 28));
        pushButton = new QPushButton(SignDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(190, 200, 93, 28));
        BPicture = new QLabel(SignDialog);
        BPicture->setObjectName(QStringLiteral("BPicture"));
        BPicture->setEnabled(false);
        BPicture->setGeometry(QRect(-20, -10, 401, 281));
        BPicture->setStyleSheet(QStringLiteral("image: url(:/file:/C:/Users/ThinkPad/Pictures/C:/Users/ThinkPad/Pictures/51654332_p0.png);"));
        widget = new QWidget(SignDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 80, 341, 73));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        labelUser = new QLabel(widget);
        labelUser->setObjectName(QStringLiteral("labelUser"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelUser);

        lineUser = new QLineEdit(widget);
        lineUser->setObjectName(QStringLiteral("lineUser"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineUser);

        labelPwd = new QLabel(widget);
        labelPwd->setObjectName(QStringLiteral("labelPwd"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelPwd);

        linePwd = new QLineEdit(widget);
        linePwd->setObjectName(QStringLiteral("linePwd"));

        formLayout->setWidget(1, QFormLayout::FieldRole, linePwd);

        labelUser->raise();
        labelPwd->raise();
        linePwd->raise();
        lineUser->raise();
        BPicture->raise();
        buttonSign->raise();
        labelUser->raise();
        labelPwd->raise();
        lineUser->raise();
        linePwd->raise();
        pushButton->raise();
        labelUser->raise();
        labelPwd->raise();

        retranslateUi(SignDialog);

        QMetaObject::connectSlotsByName(SignDialog);
    } // setupUi

    void retranslateUi(QDialog *SignDialog)
    {
        SignDialog->setWindowTitle(QApplication::translate("SignDialog", "Dialog", Q_NULLPTR));
        buttonSign->setText(QApplication::translate("SignDialog", "\347\231\273\351\231\206", Q_NULLPTR));
        pushButton->setText(QApplication::translate("SignDialog", "\345\217\226\346\266\210", Q_NULLPTR));
        BPicture->setText(QString());
        labelUser->setText(QApplication::translate("SignDialog", "\347\224\250\346\210\267\345\220\215:", Q_NULLPTR));
        labelPwd->setText(QApplication::translate("SignDialog", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SignDialog: public Ui_SignDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNDIALOG_H
