#include "ui_taztdinov.h"
#include "taztdinov.h"
Taztdinov::Taztdinov(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Taztdinov)
{
    ui->setupUi(this);

}

Taztdinov::~Taztdinov()
{
    delete ui;
}
void Taztdinov::paintEvent(QPaintEvent *)
{
    QPainter paint(this);
    draw(paint);
}

void Taztdinov::draw(QPainter &paint)
{
     QPen pen;
     pen.setColor(Qt::yellow);
     pen.setWidth(5);
     pen.setStyle(Qt::SolidLine);


     brush1.setStyle(Qt::SolidPattern);
     paint.setBrush(brush1);
     paint.setPen(pen);
     paint.drawEllipse(561,30,40,80);
}


void Taztdinov::on_pushButton_clicked()
{
    size=ui->lineEdit->text().toInt();
}





