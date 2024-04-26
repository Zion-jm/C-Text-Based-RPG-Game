#pragma once

#include "game_utility.h"

#include <memory>

class Item {
public:
    Item();

    virtual ~Item(){}

    virtual void getName() const = 0;

    virtual int displayItemInfo() const = 0;
};

class Weapon : public Item{
private:
    string WeaponName;
    string WeaponDescription;
    int WeaponMinAtk;
    int WeaponMaxAtk;

public:
    Weapon(const string& name, const string& desc, int minAtk, int maxAtk);

    void getName() const override;
    int displayItemInfo() const override;
};

class Armor : public Item{
private:
    string ArmorName;
    string ArmorDescription;
    int ArmorHP;
    int ArmorDef;

public:
    Armor(const string& name, const string& desc, int hp, int def);

    void getName() const override;
    int displayItemInfo() const override;
};

class Consumable : public Item{
private:
    string ConsumableName;
    string ConsumableDescription;

public:
    Consumable(const string& name, const string& desc);

    void getName() const override;
    int displayItemInfo() const override;
};











