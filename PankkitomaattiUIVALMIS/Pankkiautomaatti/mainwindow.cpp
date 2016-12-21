#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    olioPinkoodi = new Pinkoodi;
    olioRFID = new RFIDDLL;


    olioRFID->setup();
    olioRFID->readData();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete olioPinkoodi;
    delete olioRFID;
}

void MainWindow::on_pushButton_Ok_clicked()
{
    kortti = olioRFID->palautakortti();
    olioPinkoodi->syotetty(kortti);
    olioPinkoodi->showFullScreen();
    //olioPinkoodi->show();
    //olioPinkoodi->showFullScreen();
    //olioPinkoodi->show();

}


