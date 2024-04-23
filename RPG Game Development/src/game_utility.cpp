#include "game_utility.h"

void headerDesign(const string& header) {
    cout << setw(211) << setfill('=') << "" << endl;
    cout << right << setw((211 + header.length()) / 2) << setfill(' ') << header << endl;
    cout << setw(211) << setfill('=') << "" << endl;
}

void subHeaderDesign(const string& subHeader) {
    cout << right << setw((211 + subHeader.length()) / 2) << setfill(' ') << subHeader << endl;
    cout << setw(211) << setfill('-') << "" << endl;
}

void lineDesign() {
    cout << setw(211) << setfill('-') << "" << endl;
}

void printOption(const string& option) {
    cout << setw(40) << setfill('-') << "" << endl;
    cout << "|" << left << setw(38) << setfill(' ') << option << "|" << endl;
    cout << setw(40) << setfill('-') << "" << endl;
}

//!!Validation Function
void clearIgnore() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int getValidInput(int Min, int Max, const string& prompt) {
    int choice;
    cout << prompt;
    do {
        while(!(cin >> choice)) {
            cout << "Invalid Input! Please Enter An Integer." << endl;
            clearIgnore();
            cout << prompt;
        }
        if(!(choice >= Min && choice <= Max)) {
            cout << "Invalid Input! Please Enter An Integer From " << Min << " - " << Max << endl;
            clearIgnore();
            cout << prompt;
        }
        return choice;
    } while(!(choice >= Min && choice <= Max));
}
