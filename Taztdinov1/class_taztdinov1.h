#ifndef CLASS_TAZTDINOV1_H
#define CLASS_TAZTDINOV1_H

#include <QMainWindow>
#include <QList>>
#include "math.h"
#include <QPropertyAnimation>>
#include <QPushButton>>
#include <QPainter>
#include <taztdinov.h>>
QT_BEGIN_NAMESPACE
namespace Ui { class Class_Taztdinov1; }
QT_END_NAMESPACE

class Class_Taztdinov1 : public QMainWindow
{
    Q_OBJECT

public:
    Class_Taztdinov1(QWidget *parent = nullptr);
    ~Class_Taztdinov1();

    void paintEvent(QPaintEvent*);
    void draw(QPainter & paint) ;
    Taztdinov d;
private slots:

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_actionblue_triggered();

    void on_actionyellow_triggered();

    void on_actionBlue_triggered();

    void on_actionGreen_triggered();

    void on_actionOpen_dialog_triggered();

private:
    Ui::Class_Taztdinov1 *ui;
    int xShift,yShift,scale,buttonSize;
    QList<QPushButton*>buttonList;
    void rearrangeButtons();
    QBrush brush1;

};
#endif // CLASS_TAZTDINOV1_H
