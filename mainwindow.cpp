#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtWidgets>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    currPoint = QPoint(0,0);
    endPoint = QPoint(0,0);
    createActions();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::newFile()

{

}

void MainWindow::createActions()

{

    const QIcon toggleIcon = QIcon(":/res/fat.png");
    QAction *toggleAct = new QAction(toggleIcon, tr("&Bold"), this);
    toggleAct->setStatusTip(tr("Toggle width of lines"));
    connect(toggleAct, &QAction::triggered, this, &MainWindow::newFile);
    ui->mainToolBar->addAction(toggleAct);

    const QIcon delIcon = QIcon(":/res/eraser.png");
    QAction *delAct = new QAction(delIcon, tr("&Erase"), this);
    delAct->setStatusTip(tr("Delete DrawableObject"));
    //connect(newAct, &QAction::triggered, this, &MainWindow::newFile);
    ui->mainToolBar->addAction(delAct);

    const QIcon copyIcon = QIcon(":/res/copy.png");
    QAction *copyAct = new QAction(copyIcon, tr("&Copy"), this);
    copyAct->setStatusTip(tr("Copy DrawableObject"));
    //connect(newAct, &QAction::triggered, this, &MainWindow::newFile);
    ui->mainToolBar->addAction(copyAct);

    const QIcon turnIcon = QIcon(":/res/turn.png");
    QAction *turnAct = new QAction(turnIcon, tr("&Turn"), this);
    turnAct->setStatusTip(tr("Turn DrawableObject at 15 dg to right"));
    //connect(newAct, &QAction::triggered, this, &MainWindow::newFile);
    ui->mainToolBar->addAction(turnAct);

    const QIcon selectIcon = QIcon(":/res/select.png");
    QAction *selectAct = new QAction(selectIcon, tr("&Select"), this);
    selectAct->setStatusTip(tr("Select DrawableObject"));
    //connect(newAct, &QAction::triggered, this, &MainWindow::newFile);
    ui->mainToolBar->addAction(selectAct);

    const QIcon lineIcon = QIcon(":/res/line.png");
    QAction *lineAct = new QAction(lineIcon, tr("&Line"), this);
    lineAct->setStatusTip(tr("Draw line"));
    //connect(newAct, &QAction::triggered, this, &MainWindow::newFile);
    ui->mainToolBar->addAction(lineAct);

    const QIcon rectIcon = QIcon(":/res/rectangle.png");
    QAction *rectAct = new QAction(rectIcon, tr("&Rectangle"), this);
    rectAct->setStatusTip(tr("Draw rectangle"));
    //connect(newAct, &QAction::triggered, this, &MainWindow::newFile);
    ui->mainToolBar->addAction(rectAct);

    const QIcon triIcon = QIcon(":/res/triangle.png");
    QAction *triAct = new QAction(triIcon, tr("&Triangle"), this);
    triAct->setStatusTip(tr("Draw triangle"));
    //connect(newAct, &QAction::triggered, this, &MainWindow::newFile);
    ui->mainToolBar->addAction(triAct);
}

void MainWindow::paintEvent(QPaintEvent *event)
{
   QPainter pt(this);
   pt.drawLine(currPoint,endPoint);
   QMainWindow::paintEvent(event);
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    currPoint = event->pos();
}

void MainWindow::mouseReleaseEvent(QMouseEvent *event)
{
    endPoint = event->pos();
    update();
}
