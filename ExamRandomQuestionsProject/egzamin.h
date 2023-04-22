#ifndef EGZAMIN_H
#define EGZAMIN_H
#include "pytanie.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QColor>

class egzamin
{
public:
    egzamin();



    int getliczbaDodPyt(double);


    int dodatkowePytanieDlaPytaniaNr1ZeSpinboxa=0;
    int dodatkowePytanieDlaPytaniaNr2ZeSpinboxa=0;
    int dodatkowePytanieDlaPytaniaNr3ZeSpinboxa=0;
    int dodatkowePytanieDlaPytaniaZaawansowanegoZeSpinboxa=0;
    int dodatkowePytanieDlaPytaniaZaawansowanego2ZeSpinboxa=0;

private:
    int liczbaDodPyt;
    pytanie *e_pytanie = nullptr;
    int licznikPytanPodst = 0;
    double ocenaKoncowa;

};

#endif // EGZAMIN_H

