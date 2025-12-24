#include <print>
#include <QtWidgets>


int main(int argc, char *argv[]) {
  QApplication app(argc, argv);
  QWidget* window = new QWidget();

  window->resize(300,300);
  window->show();


  int exit_code = app.exec();


  delete window;
  window = nullptr;


  return exit_code;
}
