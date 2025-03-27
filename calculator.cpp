#include "calculator.h"




Calculator::Calculator(QWidget* parent): QWidget(parent){
  this->setWindowTitle("Calculator");
  line_edit = new QLineEdit(this);
  line_edit->setReadOnly(true);
}


void Calculator::show(){
  QWidget::show();
}
