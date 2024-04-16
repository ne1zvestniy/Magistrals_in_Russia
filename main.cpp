#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>
#include <ctime>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;
//tw: —читать с файла данные по автомогистрали, нам надо найти макс. поток машин по выбранной магистрали,найти суммарный поток всех магистралей и вывести ответ нужно-ли  нам расшир€ть автм. или нет

class magistral
{
public:
    int max_colvo;
    int frist_colvo;
    int second_colvo;
    string name_magistral;
};

int main() 
{
    setlocale(LC_CTYPE, "Rus");
    fstream file("Gazprom_state.txt");
    if (!file.is_open())
    {
        cout << "‘айл не найден" << endl;
    }
    magistral arr[9];
    for (int i = 0; i < 9; i++)
    {
       file >> arr[i].name_magistral;
       file >> arr[i].max_colvo;
       file >> arr[i].frist_colvo;
       file >> arr[i].second_colvo;
    }
    for(int i = 0; i < 9; i++)
    {
        cout << arr[i].name_magistral << endl;
        cout << arr[i].max_colvo << endl;
        cout << arr[i].frist_colvo << endl;
        cout << arr[i].second_colvo << endl;
        if (arr[i].max_colvo > arr[i].frist_colvo + arr[i].second_colvo)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    } 
    return 0;
}