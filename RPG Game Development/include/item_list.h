#pragma once

#include "item_class.h"

#include <vector>

using std::vector;

//!!String Name | String Desc | int MinAtk | int MaxAtk
extern vector<Weapon> WeaponList;

//!!String Name | String Desc | int HP | int Def
extern vector<Armor> ArmorList;

//!!String Name | String Desc
extern vector<Consumable> ConsumableList;
