#include "dialog.h"
#include "ui_dialog.h"
#include<QString>
#include<QLineEdit>
#include<QDebug>
#include<QApplication>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_Confirm_Button_clicked()
{
   QString email=ui->email_lineEdit->text();
   QString password=ui->pwd_lineEdit->text();
   QString confirmpassword=ui->cpwd_lineEdit->text();
   qDebug()<<"Email :"<<email;
   qDebug()<<"Password :"<<password;
   qDebug()<<"Confirmpassword :"<<confirmpassword;
   if(!email.isEmpty()&&!password.isEmpty()&&!confirmpassword.isEmpty())
   {

   }
   else
   {
        qDebug()<<"One field is empty";
   }


}

void Dialog::on_Exit_Button_clicked()
{
    QApplication::quit();

}
