#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class MainWindow : public QMainWindow
{
  Q_OBJECT
public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();

  //create window component
  void createLayout();
  void createMenu();
  void createActions();

signals:

public slots:
};

#endif // MAINWINDOW_H
