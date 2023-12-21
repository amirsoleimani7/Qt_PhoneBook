#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "addacc.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QString file_directory;
private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    addacc *add_acc;
};
#endif // MAINWINDOW_H
