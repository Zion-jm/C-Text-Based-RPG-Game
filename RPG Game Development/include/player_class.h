#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <random>

using std::cout;
using std::cin;
using std::endl;
using std::string;
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
    int addGold(int amount);
    bool useGold(int amount);

private:
    int genRandDmg();
};
