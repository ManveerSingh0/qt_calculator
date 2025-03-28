#include "calculator.h"
#include <QToolButton>



Calculator::Calculator(QWidget* parent): QWidget(parent){
  this->setWindowTitle("Calculator");
  line_edit = new QLineEdit(this);
  line_edit->setReadOnly(true);
  grid = new QGridLayout(this);
}


void Calculator::show(){
  grid->addWidget(new QToolButton() , 1 , 0);
  grid->addWidget(line_edit, 0 , 0);
  grid->addWidget(new QToolButton() , 1 , 1); 
  grid->addWidget(new QToolButton() , 1 , 2);


  static_cast<QToolButton*>(grid->itemAtPosition(1,0)->widget())->setText("1");
  static_cast<QToolButton*>(grid->itemAtPosition(1,1)->widget())->setText("2");
  static_cast<QToolButton*>(grid->itemAtPosition(1,2)->widget())->setText("3");

  static_cast<QToolButton*>(grid->itemAtPosition(1,0)->widget())->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
  static_cast<QToolButton*>(grid->itemAtPosition(1,1)->widget())->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
  static_cast<QToolButton*>(grid->itemAtPosition(1,2)->widget())->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

  QWidget::show();
}
