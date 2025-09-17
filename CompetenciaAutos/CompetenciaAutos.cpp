#include "pch.h"
#include "Competencia.h"
#include "iostream"

using namespace std;
using namespace System;

int main()
{
    int x = 10;
    int y = 10;
    int x1 = 10;
    int y1 = 20;
    int x2 = 10;
    int y2 = 30;
    int x3 = 10;
    int y3 = 40;
    int meta = 150;
    Competencia* competencia = new Competencia(meta);

    competencia->registrarAuto(x,y,1);
    competencia->registrarAuto(x1, y1,2);
    competencia->registrarAuto(x2, y2,3);
    competencia->registrarAuto(x3, y3, 2);
    while (!competencia->llegoMeta(meta)) {
        for (int i = 0; i < 50; i++) {
            Console::SetCursorPosition(meta, i);
            if (i % 2 == 0) cout << "|";
            else cout << " ";
        }

        competencia->animarAutos();
        competencia->llegoMeta(meta);
        _sleep(70);
    }
    system("cls");
    
    Console::SetCursorPosition(68, 22);cout << "competencia finalizada";

    system("pause>0");
    return 0;
}
