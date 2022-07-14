#include "ui_class_taztdinov1.h"
#include "class_taztdinov1.h"
#include "taztdinov.h"
#include "ui_taztdinov.h"
Class_Taztdinov1::Class_Taztdinov1(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Class_Taztdinov1)
{
    ui->setupUi(this);
    buttonSize=70;
    scale=100;
    xShift=100;
    yShift=100;
}

Class_Taztdinov1::~Class_Taztdinov1()
{
    delete ui;
}

void Class_Taztdinov1::paintEvent(QPaintEvent *)
{
    QPainter paint(this);
    draw(paint);
}

void Class_Taztdinov1::draw(QPainter &paint)
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

void Class_Taztdinov1::on_pushButton_clicked()
{
    QPushButton* btn = new QPushButton(this);
    btn->setText(QString::number(buttonList.size())+tr(" E"));
    btn->setFixedSize(d.size,d.size);
    btn->show();
    btn->setStyleSheet("background-color:blue;");
    buttonList.append(btn);

    rearrangeButtons();
}

void Class_Taztdinov1::rearrangeButtons()
{
    int buttonCount=buttonList.size();
    float angleUnit=6.28/buttonCount;
   for (int i=0;i<buttonCount;i++) {
       QPushButton* btn=buttonList.at(i);
       QPropertyAnimation* animation = new QPropertyAnimation(btn,"geometry");
       animation->setDuration(2500);
       animation->setEasingCurve(QEasingCurve::OutElastic);
       animation->setEndValue(QRectF(cos(angleUnit*i)*scale+xShift,sin(angleUnit*i)*scale+yShift,buttonSize,buttonSize));
       animation->start(QAbstractAnimation::DeleteWhenStopped);
   }
}

void Class_Taztdinov1::on_pushButton_3_clicked()
{
    QPushButton* btn=buttonList.last();
     buttonList.removeLast();
     delete btn;

     rearrangeButtons();
}

void Class_Taztdinov1::on_actionBlue_triggered()
{
    brush1.setColor(Qt::blue);
    update();
}


void Class_Taztdinov1::on_actionGreen_triggered()
{
    brush1.setColor(Qt::green);
    update();
}


void Class_Taztdinov1::on_actionOpen_dialog_triggered()
{
    d.show();
}




