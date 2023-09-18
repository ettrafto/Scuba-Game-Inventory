//
// Created by EvanT on 9/17/2023.
//

#ifndef OEP_ETTRAFTO_ITEM_H
#define OEP_ETTRAFTO_ITEM_H

#include <string>
#include <iostream>



class item {

public:
    item(int idIn, std::string nameIn, std::string detailsIn, int typeIn, int costIn, int statsIn);

    int getItemId();

    std::string getItemName();

    std::string getItemDetails();

    int getItemType();

    int getItemCost();

    int getItemSpeed();

    int getItemManeuver();

    int getItemStealth();

    int getItemStorage();

    int getItemDamage();

    int getItemDefense();

    int getItemDepth();

private:
    int id;
    std::string name;
    std::string details;
    int type;
    int cost;
    int speed;
    int maneuver;
    int stealth;
    int storage;
    int damage;
    int defense;
    int depth;

};

#endif //OEP_ETTRAFTO_ITEM_H
