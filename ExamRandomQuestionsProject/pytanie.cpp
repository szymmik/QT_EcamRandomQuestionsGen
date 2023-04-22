#include "pytanie.h"
#include <QtDebug>

pytanie::pytanie()
{

}

 //LOSOWANIE PYTAŃ I ELIMINOWANIE PYTANIA WYLOSOWANEGO
int pytanie::getPytanie(QStringList listapyt)
{
    int x = std::rand()% listapyt.size();
    return x;

}

//TEST DO FUNKCJI POWYŻSZEJ
/*void TESTgetPytaniaPodst()
{
    pytanie pyt;
    QString pytanie1 = pyt.getPytaniaPodst(pytaniaPodst);
    QString pytanie2 = pyt.getPytaniaPodst(pytaniaPodst);
    QString pytanie3 = pyt.getPytaniaPodst(pytaniaPodst);
    if(pytanie1!=pytanie2 && pytanie2!=pytanie3 && pytanie1!=pytanie3) qDebug()<<"OK";
    else qDebug()<<"FAIL";
}*/



