#include "profile_section.h"

int ProfileSection(Player& User) {
    int choice;
    while(true) {
        system("cls");

        headerDesign("Profile");

        cout << "Name: " << User.getName() << endl;
        cout << "Class: " /*<< Call The Class Here*/ << endl;
        cout << "Background: " /*<< Put A Character Background here*/ << endl;
        cout << "Attributes: " << endl;
        cout << "      HP: " << User.getFullHealth() << endl;
        cout << "      TK: " << User.getMinAtk() << " - " << User.getMaxAtk() << endl;
        cout << "      DEF: " << User.getDef() << endl;
        //!!Maybe Show The Character's Current Equipment
        lineDesign();

        printOption("[1] Change Name");
        printOption("[0] Back");
        choice = getValidInput(0, 1, "Enter: ");
        cin.ignore();

        switch(choice) {
        case 0://!!Exit Profile Section Go Back To Character Section
            return 0;

        case 1://!!Change Character Name
            User.setName();
            break;
        }
    }
}
