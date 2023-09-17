//
// Created by EvanT on 9/17/2023.
//

#include "activeItems.h"

class activeItems {
public:
    activeItems::activeItems();

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

    const items&[] activeItems::getAccessory1(){
        return accessory1;
    }
    void activeItems::setAccessory1(const item& accessory1In){
        accessory1 = accessory1In;
    }

    const items&[] activeItems::getAccessory2(){
        return accessory2;
    }
    void activeItems::setAccessory2(const item& accessory2In){
        accessory2 = accessory2In;
    }

    const items&[] activeItems::getAccessory3(){
        return accessory3;
    }
    void activeItems::setAccessory3(const item& accessory3In){
        accessory3 = accessory3In;
    }

    const items&[] activeItems::getAccessory4(){
        return accessory4;
    }
    void activeItems::setAccessory4(const item& accessory4In){
        accessory4 = accessory4In;
    }


    //TO-DO: THIS
    int[] activeItems::getCurrStat(){
        body.getItemStats();
    }
    int[] bodyStat;

    for()

    maskStat = ;
    finsStat;
    bcdStat;
    tankStat;
    regulatorStat;
    accessory1Stat;
    accessory2Stat;
    accessory3Stat;
    accessory4Stat;


    int* addArrays(const int* arr1, const int* arr2, const int* arr3, const int* arr4, const int* arr5, const int* arr6, int size) {
        int* result = new int[size]; // Allocate memory for the result array

        for (int i = 0; i < size; i++) {
            result[i] = arr1[i] + arr2[i] + arr3[i] + arr4[i] + arr5[i] + arr6[i];
        }

        return result;
    }


private:
    item body;
    item mask;
    item fins;
    item bcd;
    item tank;
    item regulator;
    item accessory1;
    item accessory2;
    item accessory3;
    item accessory4;

};