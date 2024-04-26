#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <random>
#include <vector>
#include <memory>

#include "item_class.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::unique_ptr;
using std::make_unique;
using std::move;
using std::random_device;
using std::mt19937;
using std::uniform_int_distribution;
using std::ofstream;
using std::ifstream;

class Player {
private:
    string P_Name;
    string P_Background;
    string P_Class;
    int P_Health, P_FullHealth;
    int P_MinAtk, P_MaxAtk;
    int P_Def;
    int P_Level;
    int P_Experience;
    int P_AttributePoints;
    int P_Gold;

    vector<unique_ptr<Item>> Inventory;

public:

    //!!class ctor
    Player();

    //!!Save and Load Function
    void SavePlayerData(const string& fileName);
    void LoadPlayerData(const string& fileName);

    //!!Setters Functions
    void setName();

    //!!Getters Functions
    string getName();
    string getBackgound();
    string getClass();
    int getHealth();
    int getFullHealth();
    int getMinAtk();
    int getMaxAtk();
    int getDef();
    int getLevel();
    int getExp();
    int getAttributePoints();
    int getGold();

    //!!Player Logic
    bool isAlive();
    int dealDmg();
    void takeDmg(int dmg);
    void addGold(int amount);
    bool useGold(int amount);

    void displayInventory();
    void displayItemInfo(int index);
    int invetorySize();
    template <typename T>
    void addItem(vector<T>& items, int index) {
        unique_ptr<Item> copiedItem = make_unique<T>(items[index]);
        Inventory.push_back(move(copiedItem));
    }

private:
    int genRandDmg();
};
