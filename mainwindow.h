#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QDebug>
#include "drawfractal.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private slots:
    void Draw_LS();
    void Draw_IFS();
    void save_param();
private:
    Ui::MainWindow *ui;
    DrawFractal df;
};

#endif // MAINWINDOW_H
