#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QWidget>
#include <QLineEdit>
#include <QGridLayout>

class Calculator : public QWidget{
  Q_OBJECT
 public:
  Calculator(QWidget* parent = nullptr);

  void show();  


 private:
  QLineEdit* line_edit;
  QGridLayout* grid;

};


#endif

