#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(0));
    int num = 0;
    int guess = 0;

    num = rand() % 101;
    cout << "guess a number between 0 and 100" << endl;
    for (int i = 0; i < 5; i ++){
        cout << "Guess: " << i+1 << endl;
        cin >> guess;
        if(guess == num){
            cout << "You Win" << endl;
            break;
        }
        else if (guess < num ){
            cout << "Guess higher" << endl;
        }
        else if (guess > num ){
            cout << "Guess lower" << endl;
        }
    }
    cout << "You lose" << endl;
    return 0;
}