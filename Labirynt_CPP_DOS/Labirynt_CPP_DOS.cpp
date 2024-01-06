// Labirynt_CPP_DOS.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <thread>
#include <chrono>
#include <Windows.h>> 
#include <conio.h>

int i, y;
using namespace std;

int plansza[507] = { 0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,
                    1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,
                    1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,
                    1,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,
                    1,0,1,0,1,0,1,1,1,0,1,1,1,1,1,1,1,1,0,1,0,1,
                    1,0,1,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,1,
                    1,0,1,0,1,1,1,0,1,1,0,1,1,1,0,1,1,1,0,1,0,1,
                    1,0,1,0,0,0,0,0,0,1,0,1,1,1,0,1,1,0,0,1,0,1,
                    1,0,1,1,1,1,1,1,0,1,0,0,0,1,0,1,0,0,1,1,0,1,
                    1,0,0,0,0,0,0,1,0,1,1,1,0,1,0,1,0,1,1,0,0,1,
                    1,0,0,1,1,1,1,1,0,1,1,1,0,1,0,1,0,1,1,0,1,1,
                    1,0,0,0,0,0,0,1,0,1,1,1,0,1,0,1,0,1,1,0,0,1,
                    1,0,0,1,1,1,1,1,0,0,0,0,0,0,0,1,0,0,1,1,0,1,
                    1,0,0,0,0,0,0,1,0,1,0,1,1,0,1,1,1,0,0,0,0,1,
                    1,0,1,1,1,1,1,1,0,1,0,1,1,0,1,1,1,0,1,1,0,1,
                    1,0,0,0,0,0,1,1,0,1,0,1,1,0,1,1,1,0,1,1,0,1,
                    1,1,0,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,
                    1,1,0,1,1,0,1,0,1,1,0,1,0,1,1,1,1,1,1,1,0,1,
                    1,1,0,1,1,0,1,0,1,1,0,1,0,0,0,0,0,0,1,1,0,1,
                    1,1,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,1,
                    1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
                    1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
                    1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1

};

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void labirynt()
{
    for (int i = 0; i < 23; i++)
    {

        gotoxy(3 + i, 2);

        if (plansza[i] == 1)


        {

            cout << char(219);
            //        cout << i;
              //      cout << plansza[i];
        }

        else

        {
            cout << " ";
            // cout << i;
        }
    }
    y = 2;
    for (int i = 22; i < 45; i++)
    {

        gotoxy(1 + y, 3); y++;

        if (plansza[i] == 1)


        {

            cout << char(219);
            //        cout << i;
              //      cout << plansza[i];
        }

        else

        {
            cout << " ";
            // cout << i;
        }
    }
    //3
    y = 2;
    for (int i = 44; i < 67; i++)
    {

        gotoxy(1 + y, 4); y++;

        if (plansza[i] == 1)


        {

            cout << char(219);
            //        cout << i;
              //      cout << plansza[i];
        }

        else

        {
            cout << " ";
            // cout << i;
        }
    }

    //4
    y = 2;
    for (int i = 66; i < 89; i++)
    {

        gotoxy(1 + y, 5); y++;

        if (plansza[i] == 1)


        {

            cout << char(219);
            //        cout << i;
              //      cout << plansza[i];
        }

        else

        {
            cout << " ";
            // cout << i;
        }
    }

    //5
    y = 2;
    for (int i = 88; i < 111; i++)
    {

        gotoxy(1 + y, 6); y++;

        if (plansza[i] == 1)


        {

            cout << char(219);
            //        cout << i;
              //      cout << plansza[i];
        }

        else

        {
            cout << " ";
            // cout << i;
        }
    }

    //6
    y = 2;
    for (int i = 110; i < 133; i++)
    {

        gotoxy(1 + y, 7); y++;

        if (plansza[i] == 1)


        {

            cout << char(219);
            //        cout << i;
              //      cout << plansza[i];
        }

        else

        {
            cout << " ";
            // cout << i;
        }
    }

    //7
    y = 2;
    for (int i = 132; i < 155; i++)
    {

        gotoxy(1 + y, 8); y++;

        if (plansza[i] == 1)


        {

            cout << char(219);
            //        cout << i;
              //      cout << plansza[i];
        }

        else

        {
            cout << " ";
            // cout << i;
        }
    }

    //8

    y = 2;
    for (int i = 154; i < 177; i++)
    {

        gotoxy(1 + y, 9); y++;

        if (plansza[i] == 1)


        {

            cout << char(219);
            //        cout << i;
              //      cout << plansza[i];
        }

        else

        {
            cout << " ";
            // cout << i;
        }
    }

    //9
    y = 2;
    for (int i = 176; i < 199; i++)
    {

        gotoxy(1 + y, 10); y++;

        if (plansza[i] == 1)


        {

            cout << char(219);
            //        cout << i;
              //      cout << plansza[i];
        }

        else

        {
            cout << " ";
            // cout << i;
        }
    }

    //10

    y = 2;
    for (int i = 198; i < 221; i++)
    {

        gotoxy(1 + y, 11); y++;

        if (plansza[i] == 1)


        {

            cout << char(219);
            //        cout << i;
              //      cout << plansza[i];
        }

        else

        {
            cout << " ";
            // cout << i;
        }
    }

    //11

    y = 2;
    for (int i = 220; i < 243; i++)
    {

        gotoxy(1 + y, 12); y++;

        if (plansza[i] == 1)


        {

            cout << char(219);
            //        cout << i;
              //      cout << plansza[i];
        }

        else

        {
            cout << " ";
            // cout << i;
        }
    }

    //12

    y = 2;
    for (int i = 242; i < 265; i++)
    {

        gotoxy(1 + y, 13); y++;

        if (plansza[i] == 1)


        {

            cout << char(219);
            //        cout << i;
              //      cout << plansza[i];
        }

        else

        {
            cout << " ";
            // cout << i;
        }
    }

    //13

    y = 2;
    for (int i = 264; i < 287; i++)
    {

        gotoxy(1 + y, 14); y++;

        if (plansza[i] == 1)


        {

            cout << char(219);
            //        cout << i;
              //      cout << plansza[i];
        }

        else

        {
            cout << " ";
            // cout << i;
        }
    }

    //14

    y = 2;
    for (int i = 286; i < 309; i++)
    {

        gotoxy(1 + y, 15); y++;

        if (plansza[i] == 1)


        {

            cout << char(219);
            //        cout << i;
              //      cout << plansza[i];
        }

        else

        {
            cout << " ";
            // cout << i;
        }
    }

    //15

    y = 2;
    for (int i = 308; i < 331; i++)
    {

        gotoxy(1 + y, 16); y++;

        if (plansza[i] == 1)


        {

            cout << char(219);
            //        cout << i;
              //      cout << plansza[i];
        }

        else

        {
            cout << " ";
            // cout << i;
        }
    }

    //16

    y = 2;
    for (int i = 330; i < 353; i++)
    {

        gotoxy(1 + y, 17); y++;

        if (plansza[i] == 1)


        {

            cout << char(219);
            //        cout << i;
              //      cout << plansza[i];
        }

        else

        {
            cout << " ";
            // cout << i;
        }
    }

    //17

    y = 2;
    for (int i = 352; i < 375; i++)
    {

        gotoxy(1 + y, 18); y++;

        if (plansza[i] == 1)


        {

            cout << char(219);
            //        cout << i;
              //      cout << plansza[i];
        }

        else

        {
            cout << " ";
            // cout << i;
        }
    }

    //18

    y = 2;
    for (int i = 374; i < 397; i++)
    {

        gotoxy(1 + y, 19); y++;

        if (plansza[i] == 1)


        {

            cout << char(219);
            //        cout << i;
              //      cout << plansza[i];
        }

        else

        {
            cout << " ";
            // cout << i;
        }
    }

    //19

    y = 2;
    for (int i = 396; i < 419; i++)
    {

        gotoxy(1 + y, 20); y++;

        if (plansza[i] == 1)


        {

            cout << char(219);
            //        cout << i;
              //      cout << plansza[i];
        }

        else

        {
            cout << " ";
            // cout << i;
        }
    }

    //20

    y = 2;
    for (int i = 418; i < 441; i++)
    {

        gotoxy(1 + y, 21); y++;

        if (plansza[i] == 1)


        {

            cout << char(219);
            //        cout << i;
              //      cout << plansza[i];
        }

        else

        {
            cout << " ";
            // cout << i;
        }
    }

    //21

    y = 2;
    for (int i = 440; i < 463; i++)
    {

        gotoxy(1 + y, 22); y++;

        if (plansza[i] == 1)


        {

            cout << char(219);
            //        cout << i;
              //      cout << plansza[i];
        }

        else

        {
            cout << " ";
            // cout << i;
        }
    }

    //22

    y = 2;
    for (int i = 462; i < 485; i++)
    {

        gotoxy(1 + y, 23); y++;

        if (plansza[i] == 1)


        {

            cout << char(219);
            //        cout << i;
              //      cout << plansza[i];
        }

        else

        {
            cout << " ";
            // cout << i;
        }
    }

    //23

    y = 2;
    for (int i = 484; i < 508; i++)
    {

        gotoxy(1 + y, 24); y++;

        if (plansza[i] == 1)


        {

            cout << char(219);
            //        cout << i;
              //      cout << plansza[i];
        }

        else

        {
            cout << " ";
            // cout << i;
        }
    }
}

void pionek()
{
    gotoxy(3, 3);
    cout << "!";

    system("pause");
}



int main()

{
    SetConsoleCP(437);
    SetConsoleOutputCP(437);
    thread first(labirynt);
    thread second(pionek);
    first.join();                // pauses until first finishes
    second.join();               // pauses until second finishes

    }


// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
