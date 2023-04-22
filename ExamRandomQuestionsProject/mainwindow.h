#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <egzamin.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow , public egzamin
{
    Q_OBJECT

public:

    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_czp1_valueChanged(int arg1);

    void on_srednia_valueChanged(double arg1);

    void on_czp2_valueChanged(int arg1);

    void on_czp3_valueChanged(int arg1);

    void on_start_clicked();

    void on_nastepnepytanie_clicked();

    void on_poprawna_clicked();

    void on_niepoprawna_clicked();

    void on_czpoprawna_clicked();

    void pytDodatkowe();

    void on_czz1_valueChanged(int arg1);

    void on_czz2_valueChanged(int arg1);

    void on_czp1plus_clicked();

    void on_czp1minus_clicked();

    void on_czp2plus_clicked();

    void on_czp2minus_clicked();

    void on_czp3plus_clicked();

    void on_czp3minus_clicked();

    void on_czzplus_clicked();

    void on_czzminus_clicked();

    void ocenaKoncowa();

    void reset();

private:
    Ui::MainWindow *ui;
    egzamin *m_egzamin;
    int licznikPyt=1;
    double ocenaEgz;

};
#endif // MAINWINDOW_H
