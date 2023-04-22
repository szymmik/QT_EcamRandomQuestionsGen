#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "egzamin.h"
#include <QColor>
#include<QMessageBox>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->czpoprawna->setEnabled(0);
    ui->poprawna->setEnabled(0);
    ui->niepoprawna->setEnabled(0);
    ui->nastepnepytanie->setEnabled(0);
    on_srednia_valueChanged(ui->srednia->value());

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_czp1_valueChanged(int arg1)
{
  dodatkowePytanieDlaPytaniaNr1ZeSpinboxa=arg1;
}

void MainWindow::on_czp2_valueChanged(int arg1)
{
    dodatkowePytanieDlaPytaniaNr2ZeSpinboxa=arg1;
}

void MainWindow::on_czp3_valueChanged(int arg1)
{
    dodatkowePytanieDlaPytaniaNr3ZeSpinboxa=arg1;
}

void MainWindow::on_czz1_valueChanged(int arg1)
{
    dodatkowePytanieDlaPytaniaZaawansowanegoZeSpinboxa=arg1;
}

void MainWindow::on_czz2_valueChanged(int arg1)
{
    dodatkowePytanieDlaPytaniaZaawansowanego2ZeSpinboxa=arg1;
}


//WPISYWANIE LICZBY DODATKOWYCH PYTAN NA PODSTAWIE WPROWADZONEJ SREDNIEJ STUDENTA
void MainWindow::on_srednia_valueChanged(double arg1)
{
    int dodatkowePyt = getliczbaDodPyt(arg1);
    QString dodPyt = QString::number(dodatkowePyt);
    ui->ekspytania->setText(dodPyt);
    pytDodatkowe();
}


void MainWindow::on_start_clicked()
{

    ui->czp1plus->setDisabled(true);
    ui->czp2plus->setDisabled(true);
    ui->czp3plus->setDisabled(true);
    ui->czzplus->setDisabled(true);

    ui->czp1minus->setDisabled(true);
    ui->czp2minus->setDisabled(true);
    ui->czp3minus->setDisabled(true);
    ui->czzminus->setDisabled(true);

    ui->pytanie->clear();
    ui->czpoprawna->setAutoExclusive(false);
    ui->czpoprawna->setChecked(false);
    ui->czpoprawna->setAutoExclusive(true);
    ui->niepoprawna->setAutoExclusive(false);
    ui->niepoprawna->setChecked(false);
    ui->niepoprawna->setAutoExclusive(true);

    pytanie pyt;

    for(int i=0;i<=dodatkowePytanieDlaPytaniaNr1ZeSpinboxa;i++)
    {
    int indeks =pyt.getPytanie(pyt.pytaniaPodst);
    ui->pytanie->append(pyt.pytaniaPodst.at(indeks));
    pyt.pytaniaPodst.remove(indeks);
    ui->pytanie->append("");
    }


    ui->poprawna->setEnabled(1);
    ui->niepoprawna->setEnabled(1);
    ui->start->setEnabled(0);
    ui->ocena->clear();
    licznikPyt=1;
    ui->wynikp1->clear();
    ui->wynikp2->clear();
    ui->wynikp3->clear();
    ui->wynikz1->clear();
    ui->wynikz2->clear();

    ui->srednia->setDisabled(true);

}


void MainWindow::on_nastepnepytanie_clicked()
{
    licznikPyt++;
    ui->nastepnepytanie->setEnabled(0);
    pytanie pyt;
    ui->poprawna->setAutoExclusive(false);
    ui->poprawna->setChecked(false);
    ui->poprawna->setAutoExclusive(true);

    if(licznikPyt==2)
    {
        ui->pytanie->clear();
        ui->wynikp1->setTextColor(QColor(0,130,0));
        ui->wynikp1->setText("Poprawnie");
        for(int i=0;i<=dodatkowePytanieDlaPytaniaNr2ZeSpinboxa;i++)
        {
        int indeks =pyt.getPytanie(pyt.pytaniaPodst2);
        ui->pytanie->append(pyt.pytaniaPodst2.at(indeks));
        pyt.pytaniaPodst2.remove(indeks);
        ui->pytanie->append("");
        }
    }
    else if(licznikPyt==3)
    {
        ui->pytanie->clear();
        ui->wynikp2->setTextColor(QColor(0,130,0));
        ui->wynikp2->setText("Poprawnie");
        for(int i=0;i<=dodatkowePytanieDlaPytaniaNr3ZeSpinboxa;i++)
        {
        int indeks =pyt.getPytanie(pyt.pytaniaPodst3);
        ui->pytanie->append(pyt.pytaniaPodst3.at(indeks));
        pyt.pytaniaPodst3.remove(indeks);
        ui->pytanie->append("");
        }
    }

    else if(licznikPyt==4)
    {
        ui->pytanie->clear();
        ui->wynikp3->setTextColor(QColor(0,130,0));
        ui->wynikp3->setText("Poprawnie");

        int indeks =pyt.getPytanie(pyt.pytaniaZaaw);
        ui->pytanie->append(pyt.pytaniaZaaw.at(indeks));
        pyt.pytaniaZaaw.remove(indeks);
        ui->pytanie->append("");
        for(int i=0;i<=dodatkowePytanieDlaPytaniaZaawansowanegoZeSpinboxa;i++)
        {
        int indeks =pyt.getPytanie(pyt.pytaniaZaaw);
        ui->pytanie->append(pyt.pytaniaZaaw.at(indeks));
        pyt.pytaniaZaaw.remove(indeks);
        ui->pytanie->append("");
        }

        ui->czpoprawna->setEnabled(1);
        ui->ocena->setText("3.0");
        ocenaEgz = 3.0;
    }
    else if(licznikPyt==5)
    {
        ui->wynikz1->setTextColor(QColor(0,130,0));
        ui->wynikz1->setText("Poprawnie");
    }
    else if(licznikPyt==6)
    {
        ui->wynikz2->setTextColor(QColor(0,130,0));
        ui->wynikz2->setText("Poprawnie");
    }
}


void MainWindow::on_poprawna_clicked()
{
   if(licznikPyt==5)
   {
       ui->ocena->setText("5.0");

       ui->poprawna->setEnabled(0);
       ui->niepoprawna->setEnabled(0);
       ui->czpoprawna->setEnabled(0);
       ui->nastepnepytanie->setEnabled(0);
       ui->start->setEnabled(1);
       ocenaEgz = 5.0;
       ocenaKoncowa();
   }
   ui->nastepnepytanie->setEnabled(1);
}


void MainWindow::on_niepoprawna_clicked()
{
    if(licznikPyt<4)
    {
        ui->ocena->setText("2.0");
        ocenaEgz = 2.0;
     if(licznikPyt==1)
     {
      ui->wynikp1->setTextColor(QColor(200,0,0));
      ui->wynikp1->setText("Niepoprawnie");
     }else if(licznikPyt==2)
     {
      ui->wynikp2->setTextColor(QColor(200,0,0));
      ui->wynikp2->setText("Niepoprawnie");
     }else if(licznikPyt==3)
     {
      ui->wynikp3->setTextColor(QColor(200,0,0));
      ui->wynikp3->setText("Niepoprawnie");
     }
    }
    else if(licznikPyt==4)
    {
     ui->wynikz1->setTextColor(QColor(200,0,0));
     ui->wynikz1->setText("Niepoprawnie");
    }
    else if(licznikPyt==5)
    {
        ui->ocena->setText("4.0");
     ui->wynikz2->setTextColor(QColor(200,0,0));
     ui->wynikz2->setText("Niepoprawnie");
     ocenaEgz = 4.0;
    }
    ocenaKoncowa();
    ui->poprawna->setEnabled(0);
    ui->niepoprawna->setEnabled(0);
    ui->czpoprawna->setEnabled(0);
    ui->nastepnepytanie->setEnabled(0);
    ui->start->setEnabled(1);
}


void MainWindow::on_czpoprawna_clicked()
{
    if(licznikPyt==4)
    {
        ui->ocena->setText("3.5");
        ui->wynikz1->setTextColor(QColor(255,69,0));
        ui->wynikz1->setText("Częściowo poprawnie");
        ocenaEgz = 3.5;
    }
    else if(licznikPyt==5)
    {
        ui->ocena->setText("4.5");
        ui->wynikz2->setTextColor(QColor(255,69,0));
        ui->wynikz2->setText("Częściowo poprawnie");
        ocenaEgz = 4.5;

    }
    ui->poprawna->setEnabled(0);
    ui->niepoprawna->setEnabled(0);
    ui->czpoprawna->setEnabled(0);
    ui->nastepnepytanie->setEnabled(0);
    ui->start->setEnabled(1);
    ocenaKoncowa();
}

void MainWindow::pytDodatkowe()
{
    int suma = ui->czp1->value() + ui->czp2->value() + ui->czp3->value() + ui->czz1->value();
    int liczbaDodPyt=getliczbaDodPyt(ui->srednia->value());

    if(suma==liczbaDodPyt)
    {
     ui->czp1plus->setDisabled(true);
     ui->czp2plus->setDisabled(true);
     ui->czp3plus->setDisabled(true);
     ui->czzplus->setDisabled(true);
    }
    else
    {
        ui->czp1plus->setEnabled(true);
        ui->czp2plus->setEnabled(true);
        ui->czp3plus->setEnabled(true);
        ui->czzplus->setEnabled(true);
    }
}


void MainWindow::on_czp1plus_clicked()
{
    ui->czp1->stepUp();
    pytDodatkowe();
}


void MainWindow::on_czp1minus_clicked()
{
    ui->czp1->stepDown();
    pytDodatkowe();
}


void MainWindow::on_czp2plus_clicked()
{
    ui->czp2->stepUp();
    pytDodatkowe();
}


void MainWindow::on_czp2minus_clicked()
{
    ui->czp2->stepDown();
    pytDodatkowe();
}


void MainWindow::on_czp3plus_clicked()
{
    ui->czp3->stepUp();
    pytDodatkowe();
}


void MainWindow::on_czp3minus_clicked()
{
    ui->czp3->stepDown();
    pytDodatkowe();
}


void MainWindow::on_czzplus_clicked()
{
    ui->czz1->stepUp();
    pytDodatkowe();
}


void MainWindow::on_czzminus_clicked()
{
    ui->czz1->stepDown();
    pytDodatkowe();
}

void MainWindow::ocenaKoncowa()
{


    double srednia = ui->srednia->value();
    double ocenaKoncowa;
    if(ocenaEgz >= 3.0)
     ocenaKoncowa = (srednia+ocenaEgz)/2;
    else
     ocenaKoncowa = 2.0;

    ui->ocena_koncowa->setText(QString::number(ocenaKoncowa));

    reset();
}

void  MainWindow::reset()
{

    ui->czp1minus->setEnabled(true);
    ui->czp2minus->setEnabled(true);
    ui->czp3minus->setEnabled(true);
    ui->czzminus->setEnabled(true);

    ui->srednia->setValue(3.0);

    ui->czp1->setValue(0);
    ui->czp2->setValue(0);
    ui->czp3->setValue(0);
    ui->czz1->setValue(0);



    ui->srednia->setEnabled(true);
}
