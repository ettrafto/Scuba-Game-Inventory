//
// Created by EvanT on 9/26/2023.
//

#ifndef OEP_ETTRAFTO_FINS_H
#define OEP_ETTRAFTO_FINS_H

#include "item.h"

class fins : public item{
    Fins(int id, double cost, const std::string& stats, const std::string& name)
            : Item(id, "Fins", cost, stats, name) {}

    // Override the virtual function to print Fins-specific stats
    void printItemStats() const override {
        std::cout << "Fins Stats: " << getItemStats() << std::endl;
    }

    void printItemInfo() const override {
        std::cout << "Item Type: " << getItemType() << std::endl;
        std::cout << "Item ID: " << getItemID() << std::endl;
        std::cout << "Item Cost: " << getItemCost() << std::endl;
        printItemStats();  // Call the overridden method for stats
        std::cout << "Item Name: " << getItemName() << std::endl;
    }
};


#endif //OEP_ETTRAFTO_FINS_H
