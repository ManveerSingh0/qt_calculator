#ifndef CALCULATOR_H
#define CALCULATOR_H

#include "button.h"
#include <QWidget>
#include <QLineEdit>
#include <QGridLayout>

class Calculator : public QWidget {
    Q_OBJECT
public:
    Calculator(QWidget* parent = nullptr);
    ~Calculator() = default;

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
    Button* createButton(const QString &text, const char* member);
    void abortOperation();
    bool calculate(double rightOperand, const QString &pendingOperator);

    double sumInMemory;
    double sumSoFar;
    double factorSoFar;
    QString pendingAdditiveOperator;
    QString pendingMultiplicativeOperator;
    bool waitingForOperand;

    QLineEdit* display;
    enum { NumDigitButtons = 10 };
    Button* digitButtons[NumDigitButtons];
};

#endif
