#pragma once
#include <QWidget>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>

class Calculator : public QWidget{
  Q_OBJECT


public:
  Calculator(QWidget* parent = nullptr);


public:
  void add_to_layout_buttons();
  QVBoxLayout* left;
  QVBoxLayout* bottom;
  QVBoxLayout* right;
  QVBoxLayout* zero;

  QHBoxLayout* first;

private:
  void create_buttons();

  QPushButton* button1;
  QPushButton* button2;
  QPushButton* button3;
  QPushButton* button4;
  QPushButton* button5;
  QPushButton* button6;
  QPushButton* button7;
  QPushButton* button8;
  QPushButton* button9;
  QPushButton* button0;
  

};
