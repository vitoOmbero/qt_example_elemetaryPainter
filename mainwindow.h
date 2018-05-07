#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

    QPoint currPoint;
    QPoint currEndPoint;
    QPoint endPoint;
    bool isToolUsing;


public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    bool getIsDrawingToolUsing() const;
    void setIsDrawingToolUsing(bool value);

private:
    Ui::MainWindow *ui;

private slots:
    void newFile();

protected:
    void createActions();
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
};

#endif // MAINWINDOW_H
