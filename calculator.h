#ifndef CALCULATOR_H
#define CALCULATOR_H

#include "button.h"



#include <QWidget>
#include <QToolButton>
#include <QLineEdit>
#include <QFont>
#include <QGridLayout>

class Calculator : public QWidget{
  Q_OBJECT
public:
  Calculator(QWidget* parent = nullptr);
  ~Calculator();


private slots:
    void digitClicked();
    void unaryOperatorClicked();
    void additiveOperatorClicked();
    void multiplicativeOperatorClicked();
    void equalClicked();
    void pointClicked();
    void changeSignClicked();
    void backspaceClicked();
    void clear();
    void clearAll();
    void clearMemory();
    void readMemory();
    void setMemory();
    void addToMemory();




private:

   template <class pointerToMemberFunction>
   Button* createButton(const QString &text, const pointerToMemberFunction& member);
  void abortOperation();
  bool calculate(double rightOperand, const QString &pendingOperator);

  //Variable which contain calculated data and when to clear that data
  double sumInMemory;
  double sumSoFar;
  double factorSoFar;
  QString pendingAdditiveOperator;
  QString pendingMultiplicativeOperator;
  bool waitingForOperand;


  //this will be used in creating buttons from 0-9 in calculator 
  QLineEdit* display;
  QFont font; 
  enum {
    NumDigitButtons = 10
  };
  
  Button* digitButtons[NumDigitButtons];
};


#endif

