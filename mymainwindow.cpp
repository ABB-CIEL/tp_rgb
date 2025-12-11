#include "mymainwindow.h"
#include "ui_mymainwindow.h"

MyMainWindow::MyMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MyMainWindow)
{
    ui->setupUi(this);

    // valeur de départ
    ui->spinBox_R->setValue(255);
    ui->spinBox_G_2->setValue(255);
    ui->spinBox_V->setValue(255);
    // 6 connnection entre slider et spinBOx(BIDIRECTIONNEL)
    connect(ui->verticalSlider_R, &QSlider::valueChanged, ui->spinBox_R, &QSpinBox::setValue);
    connect(ui->spinBox_R, &QSpinBox::valueChanged, ui->verticalSlider_R, &QSlider::setValue);

    connect(ui->verticalSlider_G, &QSlider::valueChanged, ui->spinBox_G_2, &QSpinBox::setValue);
    connect(ui->spinBox_G_2, &QSpinBox::valueChanged, ui->verticalSlider_G, &QSlider::setValue);

    connect(ui->verticalSlider_V, &QSlider::valueChanged, ui->spinBox_V, &QSpinBox::setValue);
    connect(ui->spinBox_V, &QSpinBox::valueChanged, ui->verticalSlider_V, &QSlider::setValue);

    //  SI LA VALEUR CHANGE ON  change la couleur
    connect(ui->verticalSlider_R, &QSlider::valueChanged, this, &MyMainWindow::majCouleur);
    connect(ui->verticalSlider_G, &QSlider::valueChanged, this, &MyMainWindow::majCouleur);
    connect(ui->verticalSlider_V, &QSlider::valueChanged, this, &MyMainWindow::majCouleur);
    connect(ui->spinBox_R, &QSpinBox::valueChanged, this, &MyMainWindow::majCouleur);
    connect(ui->spinBox_G_2, &QSpinBox::valueChanged, this, &MyMainWindow::majCouleur);
    connect(ui->spinBox_V, &QSpinBox::valueChanged, this, &MyMainWindow::majCouleur);

    // On lance une fois au démarrage
    majCouleur();
}


MyMainWindow::~MyMainWindow()
{
    delete ui;
}

void MyMainWindow::majCouleur()
{
    int r = ui->spinBox_R->value();
    int g = ui->spinBox_G_2->value();
    int b = ui->spinBox_V->value();

    QColor couleur(r, g, b);
    QString hexa = couleur.name().toUpper(); // donne "#FF00A0" par exemple

    // Change la couleur de fond du gros label
    ui->label->setStyleSheet(QString("background-color: %1; color: white; border: 2px solid gray; border-radius: 8px;").arg(hexa));

    // Affiche le code hexa
    ui->label->setText(hexa);
}
