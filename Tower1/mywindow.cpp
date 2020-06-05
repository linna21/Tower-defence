#include "mywindow.h"
#include "mybutton.h"
#include <QPixmap>
#include <QPainter>

MyWindow::MyWindow(QWidget *parent) : QMainWindow(parent)
{
    this->setFixedSize(1200,600);
    MyButton * back_btn=new MyButton(":/returnbtn.png");
    back_btn->setParent(this);
    back_btn->move(50,50);
    connect(back_btn,&MyButton::clicked,this,[=](){
        emit chooseBack(); //发送返回信号
    });
    MyButton *btn = new MyButton(":/button1.png");
    btn->setParent(this);
    btn->move(1000,450);//按钮位置

}
void MyWindow::paintEvent(QPaintEvent *){
    QPainter painter(this);
    QPixmap pixmap(":/window1.jpg");
    painter.drawPixmap(0,0,this->width(),this->height(),pixmap);
}
