#ifndef JJDISPLAYOUTPUT_H
#define JJDISPLAYOUTPUT_H

#include <QDialog>
#include <QtGui>
#include <QtCore>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QObject>


namespace Ui {
class JJDisplayOutput;
}

class JJDisplayOutput : public QDialog
{
    Q_OBJECT

public:
    explicit JJDisplayOutput(QWidget *parent = 0);
    ~JJDisplayOutput();
    void initializeRoad(QPainter *qp);
    void drawLights(QGraphicsPixmapItem *qp);
    void drawCars(QGraphicsItem *qp);
    void updateStats(QGraphicsItem *qp);

protected:
    void paintEvent(QPaintEvent *e);

private:
    Ui::JJDisplayOutput *ui;
    void scaleWindow();
};

#endif // JJDISPLAYOUTPUT_H
