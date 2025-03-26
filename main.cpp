#include <iostream>
#include <QtWidgets>
#include <QGridLayout>
#include <QPushButton>

int main(int argc, char *argv[]) {
  QApplication app(argc, argv);

  QWidget window;
  window.setWindowTitle("Calculator");
  // window.setWindowIcon();





  QGridLayout* grid = new QGridLayout(&window);

  grid->addWidget(new QPushButton("Play") , 0 , 0);
  grid->addWidget(new QPushButton("Stop"), 0, 1);    // Row 0, Col 1
  grid->addWidget(new QPushButton("Volume Up"), 1, 0); // Row 1, Col 0
  grid->addWidget(new QPushButton("Volume Down"), 1, 1); // Row 1, Col 1

  // Set some spacing for looks
  grid->setSpacing(10);
  window.show();

  delete grid;
  return app.exec();
}
