#include "calculator.h"


#include <iostream>
#include <QApplication>



int main(int argc, char *argv[]) {
  QApplication app(argc, argv);

  Calculator window;
  window.show();

  return app.exec();
}
