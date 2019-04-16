#ifndef WINDOWS_H
#define WINDOWS_H

#include <QWidget>
#include <QStackedWidget>
#include "about.h"
#include "help.h"
#include "home.h"

namespace Ui {
class windows;
}

class windows : public QWidget
{
    Q_OBJECT

public:
    explicit windows(QWidget *parent = nullptr);
    ~windows();

private:
    Ui::windows *ui;
    QStackedWidget* mlwindows;
};

#endif // WINDOWS_H
