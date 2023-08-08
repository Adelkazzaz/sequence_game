#include <iostream>
#include <windows.h>
#include <array>
#include <iomanip>
#include <string>
#include <ios>
using namespace std;

int main()
{
  long long pointans[20];
  int points[20][5] = {
      {2, 4, 8, 16, 32},
      {1, 4, 9, 16, 25},
      {1, 1, 2, 3, 5},
      {1, 3, 6, 10, 15},
      {3, 6, 12, 24, 48},
      {2, 5, 10, 17, 26},
      {7, 14, 21, 28, 35},
      {1, 3, 9, 27, 81},
      {12, 10, 8, 6, 4},
      {2, 4, 8, 16, 32},
      {144, 121, 100, 81, 64},
      {4, 16, 36, 64, 100},
      {5, 8, 12, 17, 23},
      {6, 10, 18, 34, 66},
      {2, 7, 14, 23, 34},
      {11, 14, 19, 26, 35},
      {1, 3, 6, 10, 15},
      {4, 10, 28, 82, 244},
      {2, 6, 12, 20, 30},
      {3, 10, 21, 36, 55},
  };
  HANDLE console_color;
  console_color = GetStdHandle(STD_OUTPUT_HANDLE);

  while (true)
  {
    int score = 0;
    long long inputSwitch;
    SetConsoleTextAttribute(console_color, 11);
    cout << setw(43) << setfill('*') << "\n";
    SetConsoleTextAttribute(console_color, 10);
    cout << "\t  Welcome to Adel game" << endl;
    cout << "\tFind the Correct Sequence! " << endl;
    SetConsoleTextAttribute(console_color, 11);
    cout << setw(43) << setfill('*') << "\n";
    SetConsoleTextAttribute(console_color, 10);
          cout << "\t     Your Sore: " << score << endl;
    SetConsoleTextAttribute(console_color, 14);
    cout << "1. New Game" << endl;
    cout << "2. Exit" << endl;
    SetConsoleTextAttribute(console_color, 11);
    cout << setw(26) << setfill('*') << "\n";
    SetConsoleTextAttribute(console_color, 13);
    cout << "Enter your option (1/2): ";
    SetConsoleTextAttribute(console_color, 15);

    cin >> inputSwitch;
    switch (inputSwitch)
    {
    case 1:
      cout << "<<New Game 20 Questions>>" << endl;
      for (int i = 0; i < 20; i++)
      {
        cout << (i + 1) << ". [ ";
        for (int k = 0; k < 4; k++)
        {
          cout << points[i][k] << " ";
        }
        cout << "?? ]: ";
        cin >> pointans[i];
        cout << endl;
      }
      for (int j = 0; j < 20; j++)
      {
        if ((pointans[j] == points[j][4]))
        {
          score++;
        }
      }
      break;
    case 2:
      cout << "See you later!" << endl;
      return 0;
    default:
      cout << "Try Again!" << endl;
      break;
    }
  }
  return 0;
}