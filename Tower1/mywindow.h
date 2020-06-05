#ifndef MYWINDOW_H
#define MYWINDOW_H

#include <QMainWindow>

class MyWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MyWindow(QWidget *parent = nullptr);

signals:
    void chooseBack();
protected:
    void paintEvent(QPaintEvent *);//重绘事件处理函数的声明:


};

#endif // MYWINDOW_H
