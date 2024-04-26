#include "inventory_section.h"

int InventorySection(Player& User) {
    int choice;
    while(true) {
        system("cls");

        headerDesign("Inventory");
        User.displayInventory();
        lineDesign();

        printOption("[1] View Item");
        printOption("[2] Sort Item");
        printOption("[3] Filter Item");
        printOption("[0] Back");
        choice = getValidInput(0, 3, "Enter: ");
        cin.ignore();

        switch(choice) {
        case 0://!!Exit Inventory Section Go Back To My Character Section
            return 0;

        case 1://!!View Item Section
            lineDesign();
            cout << "Enter The Number Of The Item You Want To View. Enter [0] To Back" << endl;
            choice = getValidInput(0, User.invetorySize(), "Enter: ");
            cin.ignore();
            if(choice == 0) { break;}

            system("cls");
            headerDesign("Inventory");
            User.displayItemInfo(choice);

            break;

        case 2://!!Sort Item Section

            break;

        case 3://!!Filter Item Section

            break;
        }
    }
}
