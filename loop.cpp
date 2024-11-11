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
        picks.push_back(pick);
    }
    cout << "\n";
    cout << "Here is your " << listname << " list ranked from lowest to highest: " << endl;
    int currEle = howmany;
    for (int i = 0; i < picks.size(); i++) {
        cout << "#" << currEle << ": " << picks.at(i) << endl;
        currEle--;
    }
    return 0;
}

// Keep up the good work, Raymond! :)