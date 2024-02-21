#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");

    int answer = 0;
    int rows = 3; int cols = 5;
    int x[3][5];

    cout << "Введите числа: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> x[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            answer += x[i][j];
        }
    }

    cout << "\nСреднее арифметическое: " << answer / (rows * cols) << endl;
}