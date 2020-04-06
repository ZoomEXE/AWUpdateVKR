#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include "weapon.h"
#include <QSql>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlQueryModel>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    QSqlDatabase dataBase;
    QSqlQuery sqlQuery;

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void fillTableBombs(QString tableName);
    void fillTableMissiles(QString tableName);
    void setHeader();
    QStringList horizontalHeader;
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
