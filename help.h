#ifndef HELP_H
#define HELP_H

#include <QWidget>
#include <QPixmap>
#include "windows.h"

namespace Ui {
class help;
}

class help : public QWidget
{
    Q_OBJECT

public:
    explicit help(QWidget *parent = nullptr, windows *thewindows = nullptr);
    ~help();

private:
    Ui::help *ui;
};

#endif // HELP_H
