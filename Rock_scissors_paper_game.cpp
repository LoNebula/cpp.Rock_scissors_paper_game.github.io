#include <iostream>
#include <cstdlib>
#include <ctime>
#include  <string>
#include <algorithm>
#include <unistd.h>
using namespace std;

int main(){
    cout << "Hello everyone!" << endl;
    sleep(2);
    cout << "This is a rock paper scissors game." << endl;
    sleep(2);
    cout << "You can choose rock, paper, or scissors." << endl;
    sleep(2);
    cout << "If you want to choose rock, enter 1." << endl;
    sleep(2);
    cout << "If you want to choose scissors, enter 2." << endl;
    sleep(2);
    cout << "If you want to choose paper, enter 3." << endl;
    sleep(2);
    cout << "So let's start!" << endl;
    sleep(2);

    srand(time(NULL));

    // This is the variable;
    int playerChoice = 0;
    int computerChoice = rand() % 3 + 1;

    cout << "Enter your choice: ";
    cin >> playerChoice;

    while (playerChoice == computerChoice)
    {
        srand(time(NULL));
        computerChoice = rand() % 3 + 1;
        if (playerChoice == 1)
        {
            cout << "You chose rock, and the computer chose rock." << endl;
        }
        else if (playerChoice == 2)
        {
            cout << "You chose scissors, and the computer chose scissors." << endl;
        }
        else
        {
            cout << "You chose paper, and the computer chose paper." << endl;
        }
        cout << "It's a tie!" << endl;
        sleep(1);
        cout << "Try again!" << endl;
        sleep(1);
        cout << "Enter your choice: ";
        cin >> playerChoice;
    }
    
    if (playerChoice == 1)
    {
        if (computerChoice == 2)
        {
            cout << "You chose rock, and the computer chose scissors." << endl;
            sleep(1.5);
            cout << "You Win!" << endl;
        }
        else
        {
            cout << "You chose rock, and the computer chose paper." << endl;
            sleep(1.5);
            cout << "You Lose!" << endl;
        }
    }
    
    if (playerChoice == 2)
    {
        if (computerChoice == 3)
        {
            cout << "You chose scissors, and the computer chose paper." << endl;
            sleep(1.5);
            cout << "You Win!" << endl;
        }
        else
        {
            cout << "You chose scissors, and the computer chose rock." << endl;
            sleep(1.5);
            cout << "You Lose!" << endl;
        }
    }
    
    if (playerChoice == 3)
    {
        if (computerChoice == 1)
        {
            cout << "You chose paper, and the computer chose rock." << endl;
            sleep(1.5);
            cout << "You Win!" << endl;
        }
        else
        { 
            cout << "You chose paper, and the computer chose scissors." << endl;
            sleep(1.5);
            cout << "You Lose!" << endl;
        }
    }

    return 0;
}