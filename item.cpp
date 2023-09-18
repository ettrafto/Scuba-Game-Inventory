//
// Created by EvanT on 9/17/2023.
//

#include "item.h"
#include <string>

item::item(int idIn, std::string nameIn, std::string detailsIn, int typeIn, int costIn, int statsIn){

    int id = idIn;
    std::string name = nameIn;
    std::string details = detailsIn;
    int type = typeIn;
    int cost = costIn;

    //extracting digits using int arithmetic

    //speed
    speed = statsIn % 10;
    statsIn /= 10;

    //maneuverability
    maneuver = statsIn % 10;
    statsIn /= 10;

    //stealth
    stealth = statsIn % 10;
    statsIn /= 10;

    //storage
    storage = statsIn % 10;
    statsIn /= 10;

    //damage
    damage = statsIn % 10;
    statsIn /= 10;

    //defense
    defense = statsIn % 10;
    statsIn /= 10;

    //depth
    depth = statsIn % 10;
    statsIn /= 10;

};

//returns item id int
int item::getItemId() {
    return id;
}

//returns item name string
std::string item::getItemName(){
    return name;
}

// returns item details string
std::string item::getItemDetails(){
    return details;
}

//returns item type int
int item::getItemType(){
    return type;
}

//returns item cost int
int item::getItemCost() {
    return cost;
}

//returns item speed as int
int item::getItemSpeed(){
    return speed;
}

//returns item speed as int
int item::getItemManeuver(){
    return maneuver;
}
//returns item speed as int
int item::getItemStealth(){
    return stealth;
}

//returns item speed as int
int item::getItemStorage(){
    return storage;
}

//returns item speed as int
int item::getItemDamage(){
    return damage;
}

//returns item speed as int
int item::getItemDefense(){
    return defense;
}

//returns item speed as int
int item::getItemDepth(){
    return depth;
}

