//
// Created by EvanT on 9/17/2023.
//

#include "activeItems.h"
#include "item.h"


activeItems::activeItems()
{}


const item& activeItems::getBody(){
    return body;
}
void activeItems::setBody(const item& bodyIn){
    body = bodyIn;
}

const item& activeItems::getMask(){
    return mask;
}
void activeItems::setMask(const item& maskIn){
    mask = maskIn;
}

const item& activeItems::getFins(){
    return fins;
}
void activeItems::setFins(const item& finsIn){
    fins = finsIn;
}

const item& activeItems::getBcd(){
    return bcd;
}
void activeItems::setBcd(const item& bcdIn){
    bcd = bcdIn;
}

const item& activeItems::getTank(){
    return tank;
}
void activeItems::setTank(const item& tankIn){
    tank = tankIn;
}

const item& activeItems::getRegulator(){
    return regulator;
}
void activeItems::setRegulator(const item& regulatorIn){
    regulator = regulatorIn;
}

const item& activeItems::getAccessory1(){
    return accessory1;
}
void activeItems::setAccessory1(const item& accessory1In){
    accessory1 = accessory1In;
}

const item& activeItems::getAccessory2(){
    return accessory2;
}
void activeItems::setAccessory2(const item& accessory2In){
    accessory2 = accessory2In;
}

const item& activeItems::getAccessory3(){
    return accessory3;
}
void activeItems::setAccessory3(const item& accessory3In){
    accessory3 = accessory3In;
}

const item& activeItems::getAccessory4(){
    return accessory4;
}
void activeItems::setAccessory4(const item& accessory4In){
    accessory4 = accessory4In;
}


//TO-DO: THIS
int* activeItems::getCurrStat(){

    int speed = (mask.getItemSpeed() + fins.getItemSpeed() + bcd.getItemSpeed() + tank.getItemSpeed() + regulator.getItemSpeed() + accessory1.getItemSpeed() + accessory2.getItemSpeed()+ accessory3.getItemSpeed()+ accessory4.getItemSpeed());

    int maneuver = (mask.getItemManeuver() + fins.getItemManeuver() + bcd.getItemManeuver() + tank.getItemManeuver() + regulator.getItemManeuver() + accessory1.getItemManeuver() + accessory2.getItemManeuver()+ accessory3.getItemManeuver()+ accessory4.getItemManeuver());

    int stealth = (mask.getItemStealth() + fins.getItemStealth() + bcd.getItemStealth() + tank.getItemStealth() + regulator.getItemStealth() + accessory1.getItemStealth() + accessory2.getItemStealth()+ accessory3.getItemStealth()+ accessory4.getItemStealth());

    int storage = (mask.getItemStorage() + fins.getItemStorage() + bcd.getItemStorage() + tank.getItemStorage() + regulator.getItemStorage() + accessory1.getItemStorage() + accessory2.getItemStorage()+ accessory3.getItemStorage()+ accessory4.getItemStorage());

    int damage = (mask.getItemDamage() + fins.getItemDamage() + bcd.getItemDamage() + tank.getItemDamage() + regulator.getItemDamage() + accessory1.getItemDamage() + accessory2.getItemDamage()+ accessory3.getItemDamage()+ accessory4.getItemDamage());

    int defense = (mask.getItemDefense() + fins.getItemDefense() + bcd.getItemDefense() + tank.getItemDefense() + regulator.getItemDefense() + accessory1.getItemDefense() + accessory2.getItemDefense()+ accessory3.getItemDefense()+ accessory4.getItemDefense());

    int depth = (mask.getItemDepth() + fins.getItemDepth() + bcd.getItemDepth() + tank.getItemDepth() + regulator.getItemDepth() + accessory1.getItemDepth() + accessory2.getItemDepth()+ accessory3.getItemDepth()+ accessory4.getItemDepth());

    int activeStats[] = {speed, maneuver,stealth,storage,damage,defense,depth};

    return activeStats;
}
