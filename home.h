#ifndef HOME_H
#define HOME_H

#include <QWidget>
#include <QLabel>
#include <QMovie>
#include "windows.h"

namespace Ui {
class home;
}

class home : public QWidget
{
    Q_OBJECT

public:
    explicit home(QWidget *parent = nullptr, windows *thewindows = nullptr);
    ~home();

private:
    Ui::home *ui;
};

#endif // HOME_H
