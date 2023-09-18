//
// Created by EvanT on 9/17/2023.
//

#ifndef OEP_ETTRAFTO_ACTIVEITEMS_H
#define OEP_ETTRAFTO_ACTIVEITEMS_H


#include "item.h"

class activeItems {
public:
    activeItems();

    const item& getBody();
    void setBody(const item& bodyIn);

    const item& getMask();
    void setMask(const item& maskIn);

    const item& getFins();
    void setFins(const item& finsIn);

    const item& getBcd();
    void setBcd(const item& bcdIn);

    const item& getTank();
    void setTank(const item& tankIn);

    const item& getRegulator();
    void setRegulator(const item& regulatorIn);

    const item& getAccessory1();
    void setAccessory1(const item& accessory1In);

    const item& getAccessory2();
    void setAccessory2(const item& accessory2In);

    const item& getAccessory3();
    void setAccessory3(const item& accessory3In);

    const item& getAccessory4();
    void setAccessory4(const item& accessory4In);

    int* getCurrStat();


private:
    item body = item(0, "empty", "Put Something On!", 0, 0, 0);
    item mask = item(0, "empty", "Put Something On!", 0, 0, 0);
    item fins = item(0, "empty", "Put Something On!", 0, 0, 0);
    item bcd = item(0, "empty", "Put Something On!", 0, 0, 0);
    item tank = item(0, "empty", "Put Something On!", 0, 0, 0);
    item regulator = item(0, "empty", "Put Something On!", 0, 0, 0);
    item accessory1 = item(0, "empty", "Put Something On!", 0, 0, 0);
    item accessory2 = item(0, "empty", "Put Something On!", 0, 0, 0);
    item accessory3 = item(0, "empty", "Put Something On!", 0, 0, 0);
    item accessory4 = item(0, "empty", "Put Something On!", 0, 0, 0);

};

#endif //OEP_ETTRAFTO_ACTIVEITEMS_H
