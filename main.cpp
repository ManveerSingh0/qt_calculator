#include <iostream>
#include <QtWidgets>



int main(int argc, char *argv[]) {
  QApplication app(argc, argv);
  QWidget window;
  window.resize(230, 240);
  window.setWindowTitle(QApplication::translate("Calculator",
                                                "Manveer Singh"));
  window.show();


  QPushButton *button = new QPushButton(
      QApplication::translate("childwidget", "Press Me"), &window);

  button->move(100, 100);
  button->show();

  return app.exec();
}
