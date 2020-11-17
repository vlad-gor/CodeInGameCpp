#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    string Operation;
    getline(cin, Operation);
    int pseudoRandomNumber;
    cin >> pseudoRandomNumber; cin.ignore();
    for (int i = 0; i < 3; i++) {
        string rotor;
        getline(cin, rotor);
    }
    string message;
    getline(cin, message);

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << "message" << endl;
}
