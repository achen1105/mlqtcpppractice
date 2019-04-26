#ifndef ABOUT_H
#define ABOUT_H

#include <QWidget>
#include <QLabel>
#include <QPixmap>
#include <QIcon>
#include "windows.h"

namespace Ui {
class about;
}

class about : public QWidget
{
    Q_OBJECT

public:
    explicit about(QWidget *parent = nullptr, windows *thewindows = nullptr);
    ~about();

private:
    Ui::about *ui;
    QLabel* mlname;
};

#endif // ABOUT_H
