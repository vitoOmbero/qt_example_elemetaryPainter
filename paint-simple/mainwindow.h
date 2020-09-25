#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
public:
    enum class DrawingTool { None, Line, Rectangle, Triangle};
private:
    Q_OBJECT

    QPoint currPoint;
    QPoint currEndPoint;
    QPoint endPoint;
    bool isToolUsing;
    QPicture* picture;
    QLabel* renderArea;
    DrawingTool currentTool;


public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();



    bool getIsDrawingToolUsing() const;
    void setIsDrawingToolUsing(bool value);

private:
    Ui::MainWindow *ui;

private slots:
    void newFile();
    void chooseLineTool();
    void chooseRectTool();

protected:
    void createActions();
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);

    void drawRequest(QPainter *ptr, QPoint, QPoint);
};

#endif // MAINWINDOW_H
