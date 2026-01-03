#include "calculator.h"





Calculator::Calculator(QWidget* parent):
  QWidget(parent){
  this->setWindowTitle("Calculator");

  add_to_layout_buttons();
}


void Calculator::create_buttons(){
  button1 = new QPushButton("One");

  button2 = new QPushButton("Two");
  button3 = new QPushButton("Three");
  button4 = new QPushButton("four");
  button5 = new QPushButton("five");
  button6 = new QPushButton("six");
  button7 = new QPushButton("seven");
  button8 = new QPushButton("eight");
  button9 = new QPushButton("nine");
  button0 = new QPushButton("zero");
  left = new QVBoxLayout();
  bottom = new QVBoxLayout();
  right = new QVBoxLayout();
  zero = new QVBoxLayout();
  
  left->addWidget(button1);
  left->addWidget(button2);
  left->addWidget(button3);



  bottom->addWidget(button4);
  bottom->addWidget(button5);
  bottom->addWidget(button6);



  right->addWidget(button7);
  right->addWidget(button8);
  right->addWidget(button9);


  zero->addWidget(button0);
}




void Calculator::add_to_layout_buttons(){
  create_buttons();


  first = new QHBoxLayout(this);
  first->addLayout(left);
  first->addLayout(bottom);
  first->addLayout(right);
  first->addLayout(zero);


  this->setLayout(first); 
}
