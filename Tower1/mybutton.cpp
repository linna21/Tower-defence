#include "mybutton.h"
#include <QPixmap>
MyButton::MyButton(QString pix) : QPushButton(0)
{
    QPixmap pixmap(pix);
    this->setFixedSize(pixmap.width(),pixmap.height());//设置按钮大小
    this->setStyleSheet("QPushButton{border:Opx;}");
    this->setIcon(pixmap);//传入图片
    this->setIconSize(QSize(pixmap.width(),pixmap.height()));//图片大小和按钮大小保持一致


}
