#include <QFile>
#include <QTextStream>
//#include <QTextEdit>
//#include <QCursor>
//#include <QTextCursor>

#include "textfinder.h"
#include "ui_textfinder.h"


TextFinder::TextFinder(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TextFinder)
{
    ui->setupUi(this);
    currentTextEdit = ui->textEdit;
    loadTextFile();
}

TextFinder::~TextFinder()
{
    delete ui;
}

void TextFinder::loadTextFile()
{
    QFile inputFile(":/input.txt");
    inputFile.open(QIODevice::ReadOnly);

    QTextStream inptStr(&inputFile);
    QString line = inptStr.readAll();

    inputFile.close();

    ui->textEdit->setPlainText(line);
    setCursorToStart();
}

void TextFinder::on_pushButton_clicked()
{
    QString searchString = ui->lineEdit->text();
    currentTextEdit->find(searchString, QTextDocument::FindWholeWords);
}

void TextFinder::setCursorToStart()
{
    QTextCursor cursor = currentTextEdit->textCursor();
    cursor.movePosition(QTextCursor::Start, QTextCursor::MoveAnchor, 1);
    //currentTextEdit->setCursor(qobject_cast<&QCursor>(&cursor));
}

void TextFinder::on_radioButton_clicked()
{
    currentTextEdit = ui->textEdit;
    setCursorToStart();
}

void TextFinder::on_radioButton_2_clicked()
{
    currentTextEdit = ui->textEdit_2;
    setCursorToStart();
}

void TextFinder::on_pushButton_2_clicked()
{
    QString line = ui->textEdit->toHtml();
    ui->textEdit->setHtml(ui->textEdit_2->toHtml());
    ui->textEdit_2->setHtml(line);
}
