/* 
* Names: Raymond Zhang
* Program Name: Top "X" List Generator
* Date: 11/11/24
*/
#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;
int main() {
    vector<string> picks;
    string listname, pick;
    int howmany;
    cout << "What would you like to create a Top List of? ";
    getline(cin, listname);
    cout << "\n";
    cout << "How many " << listname << " would you like to enter? ";
    cin >> howmany;
    cin.ignore();
    for (int i = howmany; i > 0; i--) {
        cout << "Enter your #" << i << " pick: ";
        getline(cin, pick);
        picks.push_back(pick); // Pushes the user input into the vector.
    }
    cout << "\n";
    cout << "Here is your " << listname << " list ranked from lowest to highest: " << endl;
    int currEle = howmany; // Sets the current element of the list to the lowest ranked (aka the size of the list).
    for (int i = 0; i < picks.size(); i++) {
        cout << "#" << currEle << ": " << picks.at(i) << endl; // Prints out the place of the respective list element followed by what the user entered. The .at() function gets the element of the vector at that index.
        currEle--;
    }
    return 0;
}

// Keep up the good work, Raymond! :)
