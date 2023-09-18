//
// Created by EvanT on 9/17/2023.
//

#include "inventory.h"


inventory::inventory(){


}

int inventory::getMoney(){
    return money;
}
void inventory::setMoney(int moneyIn) {
    money = moneyIn;
}

std::vector<item> inventory::getOwnedItems(){
    return ownedItems;
}

void inventory::setOwnedItems(item& itemIn){
    ownedItems.push_back(itemIn);
}

int inventory::getNumItems(){
    return numItems;
}
void inventory::updateNumItems(int numItemsIn){
    numItems = numItemsIn;
}




