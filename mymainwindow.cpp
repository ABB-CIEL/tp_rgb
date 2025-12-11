#include "mymainwindow.h"
#include "ui_mymainwindow.h"

MyMainWindow::MyMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MyMainWindow)
{
    ui->setupUi(this);

    // valeur de départ
    ui->spinBox_R->setValue(255);
    ui->spinBox_G->setValue(255);
    ui->spinBox_B->setValue(255);
    // 6 connnection entre slider et spinBOx(BIDIRECTIONNEL)
    connect(ui->verticalSlider_R, &QSlider::valueChanged, ui->spinBox_R, &QSpinBox::setValue);

}

MyMainWindow::~MyMainWindow()
{
    delete ui;
}

