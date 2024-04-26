#include "item_class.h"

Item::Item(){}

Weapon::Weapon(const string& name, const string& desc, int minAtk, int maxAtk)
    : WeaponName(name), WeaponDescription(desc), WeaponMinAtk(minAtk), WeaponMaxAtk(maxAtk) {}

void Weapon::getName() const {
    cout << WeaponName;
}

int Weapon::displayItemInfo() const {
    cout << "Item Name: " << WeaponName << endl;
    cout << "Item Description: " << WeaponDescription << endl;
    cout << "Item Attributes: " << endl;
    cout << "      Atk: " << WeaponMinAtk << " - " << WeaponMaxAtk << endl;
    lineDesign();

    int choice;
    printOption("[1] Equip Weapon");
    printOption("[2] Drop Item");
    printOption("[0] Back");
    choice = getValidInput(0, 2, "Enter: ");
    cin.ignore();

    switch(choice) {
    case 0:
        return 0;

    case 1://!!Equip Item
        //!!Add Equip Item Logic Function Here
        return 0;

    case 2://!!Drop Item
        //!!Add Drop item Logic Function Here
        return 0;
    }
}

Armor::Armor(const string& name, const string& desc, int hp, int def)
    : ArmorName(name), ArmorDescription(desc), ArmorHP(hp), ArmorDef(def) {}

void Armor::getName() const {
    cout << ArmorName;
}

int Armor::displayItemInfo() const {
    cout << "Item Name: " << ArmorName << endl;
    cout << "Item Description: " << ArmorDescription << endl;
    cout << "Item Attributes: " << endl;
    cout << "      HP: " << ArmorHP << endl;
    cout << "      Def: " << ArmorDef << endl;
    lineDesign();

    int choice;
    printOption("[1] Equip Armor");
    printOption("[2] Drop Item");
    printOption("[0] Back");
    choice = getValidInput(0, 2, "Enter: ");
    cin.ignore();

    switch(choice) {
    case 0:
        return 0;

    case 1://!!Equip Item
        //!!Add Equip Item Logic Function Here
        return 0;

    case 2://!!Drop Item
        //!!Add Drop item Logic Function Here
        return 0;
    }
}

Consumable::Consumable(const string& name, const string& desc)
    : ConsumableName(name), ConsumableDescription(desc) {}

void Consumable::getName() const {
    cout << ConsumableName;
}

int Consumable::displayItemInfo() const {
    cout << "Item Name: " << ConsumableName << endl;
    cout << "Item Description: " << ConsumableDescription << endl;
    cout << "Item Effects: " << endl;
    lineDesign();

    int choice;
    printOption("[1] Use Item");
    printOption("[2] Drop Item");
    printOption("[0] Back");
    choice = getValidInput(0, 2, "Enter: ");
    cin.ignore();

    switch(choice) {
    case 0:
        return 0;

    case 1://!!Use Item
        //!!Add Use Item Logic Function Here
        return 0;

    case 2://!!Drop Item
        //!!Add Drop item Logic Function Here
        return 0;
    }
}







