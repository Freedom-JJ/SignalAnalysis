#include "spectrum.h"
#include "ui_spectrum.h"

Spectrum::Spectrum(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Spectrum)
{
    ui->setupUi(this);
    plot = new QCustomPlot(this);
}

Spectrum::~Spectrum()
{
    delete ui;
}
