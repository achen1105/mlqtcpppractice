#ifndef GAME_H
#define GAME_H

#include <QWidget>
#include <QGridLayout>
#include "windows.h"
#include "round.h"

namespace Ui {
class game;
}

class game : public QWidget
{
    Q_OBJECT

public:
    explicit game(QWidget *parent = nullptr, windows *thewindows = nullptr);
    ~game();

private:
    Ui::game *ui;
};

#endif // GAME_H
