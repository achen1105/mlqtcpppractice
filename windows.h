#ifndef WINDOWS_H
#define WINDOWS_H

#include <QWidget>
#include <QStackedWidget>
#include <QVBoxLayout>

namespace Ui {
class windows;
}

class windows : public QWidget
{
    Q_OBJECT

public:
    explicit windows(QWidget *parent = nullptr);
    ~windows();

    void addWindows(QWidget* window);

public slots:
    void goToPage0();
    void goToPage1();
    void goToPage2();
    void goToPage3();
    void goToPage4();

private:
    Ui::windows *ui;
    QStackedWidget* mlwindows;
    QVBoxLayout* layout;
};

#endif // WINDOWS_H
