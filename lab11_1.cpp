#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    string grade = "";
    int num;
    cout << "Press Enter 3 times to reveal your future.\n";
    for (int i = 1; i <= 3; i++)
    {
        cin.get();
        srand(time(0));
        num = rand() % 9 ;
    }

    switch (num)
    {
    case 0:
        grade = "A";
        break;
    case 1:
        grade = "B";
        break;
    case 2:
        grade = "C";
        break;
    case 3:
        grade = "D";
        break;
    case 4:
        grade = "F";
        break;
    case 5:
        grade = "B+";
        break;
    case 6:
        grade = "C+";
        break;
    case 7:
        grade = "D+";
        break;
    case 8:
        grade = "W";
        break;
    }

    cout << "You will get " << grade << " in this 261102.";
}