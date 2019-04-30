#ifndef ART_H
#define ART_H

#include <QWidget>
#include "windows.h"

namespace Ui {
class art;
}

class art : public QWidget
{
    Q_OBJECT

public:
    explicit art(QWidget *parent = nullptr, windows* thewindows = nullptr);
    ~art();

private:
    Ui::art *ui;
};

#endif // ART_H
