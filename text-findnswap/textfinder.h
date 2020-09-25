#ifndef TEXTFINDER_H
#define TEXTFINDER_H

#include <QWidget>
#include <QTextEdit>

namespace Ui {
class TextFinder;
}

class TextFinder : public QWidget
{
    Q_OBJECT

public:
    explicit TextFinder(QWidget *parent = 0);
    ~TextFinder();

signals:


private slots:
      void on_pushButton_clicked();



      void on_radioButton_clicked();

      void on_radioButton_2_clicked();

      void on_pushButton_2_clicked();

private:
      Ui::TextFinder *ui;
      QTextEdit* currentTextEdit;


      void loadTextFile();
      void setCursorToStart();
};

#endif // TEXTFINDER_H
