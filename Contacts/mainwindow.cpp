#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->pushButtonAddContact->setIcon(QIcon(":/img/Plus.svg"));
    ui->lineEditFindContact->setClearButtonEnabled(true);
    ui->lineEditFindContact->addAction(QIcon(":/img/search.svg"), QLineEdit::LeadingPosition);
    ui->lineEditFindContact->setPlaceholderText("Search");
    // TODO fix this (Doesn't work)
    //ui->lineEditFindContact->setFont(QFont(":/font/SFPro.ttf"));
}

MainWindow::~MainWindow()
{
    delete ui;
}
