#include "player_class.h"

Player::Player(){
    P_Name = "";
    P_Background = "";
    P_Class = "";
    P_FullHealth = P_Health = 100;
    P_MinAtk = 5;
    P_MaxAtk = 15;
    P_Def = 5;
    P_Level = 1;
    P_Experience = 0;
    P_AttributePoints = 0;
    P_Gold = 0;
}


//!!Save and Load Function
void Player::SavePlayerData(const string& fileName) {
    ofstream file(fileName);
    if(file.is_open()) {
        file << P_Name << endl;
        file << P_Background << endl;
        file << P_Class << endl;
        file << P_Health << endl;
        file << P_FullHealth << endl;
        file << P_MinAtk << endl;
        file << P_MaxAtk << endl;
        file << P_Def << endl;
        file << P_Level << endl;
        file << P_Experience << endl;
        file << P_AttributePoints << endl;
        file << P_Gold << endl;
    }
    file.close();
}

void Player::LoadPlayerData(const string& fileName) {
    ifstream file(fileName);
    if(file.is_open()) {
        getline(file, P_Name);
        getline(file, P_Background);
        getline(file, P_Class);
        file >> P_Health;
        file >> P_FullHealth;
        file >> P_MinAtk;
        file >> P_MaxAtk;
        file >> P_Def;
        file >> P_Level;
        file >> P_Experience;
        file >> P_AttributePoints;
        file >> P_Gold;
    }
    file.close();
}

//!!Setters Functions
void Player::setName() {
    string newName;
    cout << "Enter New Character Name: ";
    getline(cin, newName);

    P_Name = newName;
}

//!!Getters Functions
string Player::getName() {
    return P_Name;
}
string Player::getBackgound() {
    return P_Background;
}
string Player::getClass() {
    return P_Class;
}
int Player::getHealth() {
    return P_Health;
}
int Player::getFullHealth() {
    return P_FullHealth;
}
int Player::getMinAtk() {
    return P_MinAtk;
}
int Player::getMaxAtk() {
    return P_MaxAtk;
}
int Player::getDef() {
    return P_Def;
}
int Player::getLevel() {
    return P_Level;
}
int Player::getExp() {
    return P_Experience;
}
int Player::getAttributePoints() {
    return P_AttributePoints;
}
int Player::getGold() {
    return P_Gold;
}

//!!Player Logic
bool Player::isAlive() {
    return P_Health > 0;
}

int Player::dealDmg() {
    return genRandDmg();
}

void Player::takeDmg(int dmg) {
    P_Health -= dmg;
}

int Player::addGold(int amount) {
    P_Gold += amount;
}
bool Player::useGold(int amount) {
    if(P_Gold >= amount) {
        P_Gold -= amount;

        cout << "Deducted " << amount << " Gold From Your Inventory" << endl;
        system("pause");
        return true;
    } else {
        cout << "Insufficient Gold In Your Inventory" << endl;
        return false;
    }
}

int Player::genRandDmg() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> distribution(P_MinAtk, P_MaxAtk);
    return distribution(gen);
}
