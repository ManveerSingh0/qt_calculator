#include <iostream>
#include <QtWidgets>



int main(int argc, char *argv[]) {
  QApplication app(argc, argv);

  QWidget window;
  window.resize(230, 240);
  window.setWindowTitle("Calculator");
  window.show();

  return app.exec();
}
