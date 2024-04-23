#include "profile_section.h"
#include "status_section.h"

int MyCharacterSection(Player& User) {
    int choice;
    while(true) {
        system("cls");

        headerDesign("My Character");
        //!!Display User Information Here | Name, HP, Gold etc

        printOption("[1] Profile");
        printOption("[2] Status");
        printOption("[3] Inventory");
        printOption("[0] Back");
        choice = getValidInput(0, 3, "Enter: ");
        cin.ignore();

        switch(choice) {
        case 0://!!Exit My Character Section Go Back To Main Section
            return 0;

        case 1://!!Profile Section
            ProfileSection(User);
            break;

        case 2://!!Status Section
            StatusSection(User);
            break;

        case 3://!!Inventory Section

            break;
        }
    }
}
