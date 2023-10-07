//
// Created by EvanT on 9/17/2023.
//

#ifndef OEP_ETTRAFTO_INVENTORY_H
#define OEP_ETTRAFTO_INVENTORY_H


#include "item.h"
#include <vector>

class inventory {
public:

    inventory();

    int getMoney();
    void setMoney(nt money);

    std::vector<item> getOwnedItems();
    void setOwnedItems(item& itemIn);

    int getNumItems();
    void updateNumItems(int numItemsIn);



private:
    int money;
    std::vector<item> ownedItems;
    int numItems;
};


#endif //OEP_ETTRAFTO_INVENTORY_H
