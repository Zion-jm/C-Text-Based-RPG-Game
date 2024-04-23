#include "game_utility.h"
#include "myCharacter_section.h"
#include "player_class.h"

int main() {
    string UserName;
    Player User;

    ifstream playerData("player_data.txt");
    if(playerData.is_open()) {
        User.LoadPlayerData("player_data.txt");
        playerData.close();
    } else {
        cout << "Please Enter Your UserName" << endl;
        cout << "UserName: ";
        getline(cin, UserName);

        User.setName();
    }

    int choice;
    while(true) {
        system("cls");

        printOption("[1] My Character");
        printOption("[2] Exploration");
        printOption("[3] Save Data");
        printOption("[0] Exit Game");
        choice = getValidInput(0, 3, "Enter: ");
        cin.ignore();

        switch(choice) {
        case 0:
            system("cls");

            headerDesign("Thank You For Playing My Text Based RPG Game");
            return 0;

        case 1:
            MyCharacterSection(User);
            break;

        case 2:

            break;

        case 3:
            User.SavePlayerData("player_data.txt");
            break;
        }
    }
}



















