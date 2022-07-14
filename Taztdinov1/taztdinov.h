#ifndef TAZTDINOV_H
#define TAZTDINOV_H

#include <QDialog>
#include <QList>>
#include "math.h"
#include <QPropertyAnimation>>
#include <QPushButton>>
#include <QPainter>
namespace Ui {
class Taztdinov;
}

class Taztdinov : public QDialog
{
    Q_OBJECT

public:
    explicit Taztdinov(QWidget *parent = nullptr);
    ~Taztdinov();

    void paintEvent(QPaintEvent*);
    void draw(QPainter & paint) ;
    int size;
public slots:
    void on_pushButton_clicked();
private:
    Ui::Taztdinov *ui;
    int xShift,yShift,scale,buttonSize;
    QList<QPushButton*>buttonList;
    void rearrangeButtons();
    QBrush brush1;
};

#endif // TAZTDINOV_H
