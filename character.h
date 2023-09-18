//
// Created by EvanT on 9/17/2023.
//

#ifndef OEP_ETTRAFTO_CHARACTER_H
#define OEP_ETTRAFTO_CHARACTER_H


#include "inventory.h"
#include "activeItems.h"

class character {

public:
    character();

private:
    inventory characterInventory;
    activeItems CharacterActiveItems;


};


#endif //OEP_ETTRAFTO_CHARACTER_H
