#include "mainwindow.h"
#include<QPushButton>
#include<QLabel>
#include<QLineEdit>
#include<QDebug>
#include<QMessageBox>
#include<QVBoxLayout>
#include<QFont>
#include<dialog.h>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    //Image icon for username
    QLabel *lab=new QLabel(this);
    lab->setMinimumSize(70,50);
    lab->move(100,50);
    QPixmap pixx("C:/nanditha/UsernameImage.png");
    lab->setPixmap(pixx.scaled(20,20));

    //Set image icon in center
    QLabel *mlabel=new QLabel(this);
    mlabel->move(180,25);
    mlabel->setAlignment(Qt::AlignHCenter);
    QPixmap pix("C:/nanditha/LoginImage.png");
    mlabel->setPixmap(pix.scaled(80,20));

    //QLabel for username
    QLabel *unLabel=new QLabel("UserName",this);
    unLabel->setMinimumSize(70,50);
    unLabel->move(130,50);
    QPalette l1;
    l1.setColor(QPalette::WindowText,Qt::red);
    unLabel->setPalette(l1);

    //QLineEdit for username
    QLineEdit *unLineEdit=new QLineEdit(this);
    unLineEdit->setMinimumSize(200,50);
    unLineEdit->move(220,50);

    //set lineedit border to red color
    unLineEdit->setStyleSheet("border: 2px solid red");

    //Image icon for password
    QLabel *labb=new QLabel(this);
    labb->setMinimumSize(200,50);
    labb->move(100,110);
    QPixmap pixxx("C:/nanditha/PasswordImage.png");
    labb->setPixmap(pixxx.scaled(20,20));

    //QLabel for password
    QLabel *pwd=new QLabel("Password",this);
    pwd->setMinimumSize(70,50);
    pwd->move(130,110);
    QPalette l2;
    l2.setColor(QPalette::WindowText,Qt::green);
    pwd->setPalette(l2);

    //QLineEdit for password
    QLineEdit *unnLineEdit=new QLineEdit(this);
    unnLineEdit->setMinimumSize(200,50);
    unnLineEdit->move(220,110);

    //set lineedit border to green color
    unnLineEdit->setStyleSheet("border: 2px solid green");

    //QLabel
    QLabel *account=new QLabel("Dont have account",this);
    account->setMinimumSize(100,50);
    account->move(130,190);

    //QPushButton for Signup
    QFont button("Times",8,QFont::Bold);
    QPushButton *button1=new QPushButton("Signup",this);
    button1->setFont(button);
    button1->move(220,230);
    connect(button1,&QPushButton::clicked,[=](){
        Dialog *dialog=new Dialog(this);
        dialog->exec();
    });
    //QPushButton for Login
    QFont buttons("Times",18,QFont::Bold);
    QPushButton *button2=new QPushButton("Login",this);
    button2->setFont(buttons);
    button2->move(220,280);
    connect(button2,&QPushButton::clicked,[=](){
        QString username=unLineEdit->text();
        QString password=unnLineEdit->text();
        if(username=="Text"&&password=="Text")
        {
            QMessageBox::information(this,"Login","Username and Password is Correct!");
        }
        else
        {
           QMessageBox::information(this,"Login","Username and Password is not Correct");
        }
    });

    //Hint Text
    unLineEdit->setPlaceholderText("username");
    unnLineEdit->setPlaceholderText("password");

}

MainWindow::~MainWindow()
{

}

