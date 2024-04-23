#include "status_section.h"

int StatusSection(Player& User) {
    int choice;
    while(true) {
        system("cls");

        headerDesign("Status");

        cout << "Character Name: " << User.getName() << endl;
        cout << "Level: " << User.getLevel() << endl;
        cout << "Experience: " << User.getExp() << endl;
        cout << "Attributes: " << endl;
        cout << "      HP: " << User.getHealth() << " / " << User.getFullHealth() << endl;
        cout << "      ATK: " << User.getMinAtk() << " - " << User.getMaxAtk() << endl;
        cout << "      DEF: " << User.getDef() << endl;
        cout << "Attribute Points: " << User.getAttributePoints() << endl;

        cout << endl;
        cout << "Currency: " << endl;
        cout << "      Gold: " <<User.getGold() << endl;
        //!!Add Other Currency Here If There Is

        cout << endl;
        cout << "Equipement: " << endl;
        cout << "      Weapon: " << endl;
        cout << "      Armor: " << endl;
        cout << "      Boots: " << endl;
        //!!Add Other Type Of Equipment If There Is

        cout << endl;
        cout << "Abilities: " << endl;
        cout << "      Active: " << endl;
        cout << "      Passive: " << endl;

        lineDesign();

        printOption("[1] Allocate Attribute Points");
        printOption("[0] Back");
        choice = getValidInput(0, 1, "Enter: ");
        cin.ignore();

        switch(choice) {
        case 0://!!Exit Status Section Go Back To My Character Section
            return 0;

        case 1://!!Allocate Attribute Points Section

            break;
        }
    }
}
