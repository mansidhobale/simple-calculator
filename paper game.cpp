
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int rule(char player, char computer){
    if (player == computer){
        return 0;
    }

    if (player== 'r' && computer == 'p'){
        return -1;
    }
    else if (player == 's' && computer == 'p'){
        return 1;
    }
    else if (player == 'p' && computer == 'r'){
        return 1;
    }
    else if (player == 's' && computer == 'r'){
        return -1;
    }
    else if (player == 'r' && computer == 's'){
        return 1;
    }
    else if (player == 'p' && computer == 's'){
        return -1;
    }
}

int main(){

    char computer;
    char player;
    char playmore;
    cout << "\t\t\t\t";
    for(int i = 0; i < 50; i++){
        cout << "-";
    }
    cout << endl;
    cout << "\t\t\t\t";
    cout << "\t Welcome to Rock, Paper and Scissors Game" << endl;
    cout << "\t\t\t\t";
    for(int i = 0; i < 50; i++){
        cout << "-";
    }
    cout << endl;
    cout << "\t\t\t\t";
    cout << "\t Note: " << endl;
    cout << "\t\t\t\t";
    cout << "\t\t r : Rock" << endl << "\t\t\t\t" << "\t\t p - Paper" << endl << "\t\t\t\t" << "\t\t scissor" << endl << "\t\t\t\t"<< endl << endl;
    cout << "\t\t\t\t";
    for(int i = 0; i < 50; i++){
        cout << "-";
    }
    cout << endl;
    do{
        int number = 0;
        srand(time(0));        
        number = rand() % 100; 
        if (number < 33)
        {
            computer = 'r';
        }
        else if (number > 66)
        {
            computer = 's';
        }
        else
        {
            computer = 'p';
        }
        
        cout << "\t\t\t\t";
        cout << "Enter your choice: ";
        cin >> player;
        int result = rule(player, computer);
        if(result == 1){
            cout << "\t\t\t\t";
            cout << "You won! Hurray" << endl;
        }
        else if(result == -1){
            cout << "\t\t\t\t";
            cout << "You lose! Bad Luck" << endl;
        }
        else{
            cout << "\t\t\t\t";
            cout << "Woah! That's Tie!" << endl;
        }
        cout << "\t\t\t\t";
        cout << "Do you want to Play Again?(y/n)" << endl;
        cout << "\t\t\t\t";
        cout << "Note: Press 'n' to exit! Press Anything to continue: ";
        cin >> playmore;
        cout << "\t\t\t\t";
        for(int i = 0; i < 50; i++){
            cout << "-";
        }
        cout << endl;
    }while(playmore != 'n');

    return 0;
}