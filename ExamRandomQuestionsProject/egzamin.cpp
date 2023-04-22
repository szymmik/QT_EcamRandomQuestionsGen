#include "egzamin.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

egzamin::egzamin()
{

}


//OBLICZANIE ILOŚCI DODATKOWYCH PYTAŃ NA PODSTAWIE SREDNIEJ
int egzamin::getliczbaDodPyt(double srednia)
{
    if(srednia>=3)
    {
        int krok = srednia/0.5;
        return krok-6;
    }
    return 0;


}

//TEST JEDNOSTKOWY DO FUNKCJI POWYŻEJ
void TESTgetliczbaDodPyt()
{
    double srednia=3.68;

    int oczWynik = 1, rzeczWynik;
    egzamin egg;
    rzeczWynik= egg.getliczbaDodPyt(srednia);
    if(rzeczWynik==oczWynik) qDebug()<<"OK";
    else qDebug()<<"FAIL";
}










