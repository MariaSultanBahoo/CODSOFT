// CODSOFT.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int number, guess_number, attempts = 0;
    number = rand() % 100 + 1; 
    cout << "\t\t**********LETS' PLAY A NUMBER GUESSING GAME**********"<<endl<<endl;

    do
    {
        cout << "Enter a guess between 1 and 100 : ";
        cin >> guess_number;
        attempts++;

        if (guess_number > number)
            cout << "You Entered Too high Number!"<<endl;
        else if (guess_number < number)
            cout << "You Entered Too low Number!"<<endl;
        else
            cout << "\n**** Congratulations! You got it in " << attempts << " guesses ****"<<endl<<endl;
    } while (guess_number!= number);

    return 0;
}