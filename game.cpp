//
// Created by EvanT on 9/17/2023.
//
#include "game.h"
#include <iostream>

game::game(){}

void game::start() {
    std::cout << " * Welcome to the ScubaDiver\n"
                 " * Please select an option\n"
                 " *  1. View inventory\n"
                 " *  2. View Shop\n"
                 " *  0. Quit" << std::endl;

    std::string input;
    std::cin >> input;

    bool valid = false;

    while (valid == false) {
        if ( input == "0" || input == "1" || input == "2") {
            valid = true;
        } else {
            std::cout << "Invalid Input" << std::endl;
        }
    }
    if (input == "1") {
        inventory();
    }
    if (input == "2") {
        shop();
    }
    if (input == "0") {
        stop();
    }
}
void game::inventory() {
    std::cout << " * Welcome to your Inventory\n"
                 " * Please select an option\n"
                 " *  1. Body Suit\n"
                 " *  2. Mask\n"
                 " *  3. Fins\n"
                 " *  4. BCD\n"
                 " *  5. Tank\n"
                 " *  6. Regulator\n"
                 " *  7. Accessories\n"
                 " *  0. Back" << std::endl;

    std::string input;
    std::cin >> input;

    bool valid = false;

    while (valid == false) {
        if (input == "0" || input == "1" || input == "2" || input == "3" || input == "4" || input == "5" || input == "6" || input == "7") {
            valid = true;
        } else {
            std::cout << "Invalid Input" << std::endl;
        }
    }
    if (input == "1") {
        iBody();
    }
    if (input == "2") {
        iMask();
    }
    if (input == "3") {
        iFins();
    }
    if (input == "4") {
        iBcd();
    }
    if (input == "5") {
        iTank();
    }
    if (input == "6") {
        iReg();
    }
    if (input == "7") {
        iAcces();
    }
    if (input == "0"){
        start();
    }else{
        std::cout << "work in progress" << std::endl;
    }

}

void game::shop() {
    std::cout << " * Welcome to the Shop\n"
                 " * Please select an option\n"
                 " *  1. Body Suit\n"
                 " *  2. Mask\n"
                 " *  3. Fins\n"
                 " *  4. BCD\n"
                 " *  5. Tank\n"
                 " *  6. Regulator\n"
                 " *  7. Accessories\n"
                 " *  0. Back" << std::endl;

    std::string input;
    std::cin >> input;

    bool valid = false;

    while (valid == false) {
        if (input == "0" || input == "1" || input == "2" || input == "3" || input == "4" || input == "5" || input == "6" || input == "7") {
            valid = true;
        } else {
            std::cout << "Invalid Input" << std::endl;
        }
    }
    if (input == "1") {
        sBody();
    }
    if (input == "2") {
        sMask();
    }
    if (input == "3") {
        sFins();
    }
    if (input == "4") {
        sBcd();
    }
    if (input == "5") {
        sTank();
    }
    if (input == "6") {
        sReg();
    }
    if (input == "7") {
        sAcces();
    }
    if (input == "0"){
        start();
    }

}


void game::stop(){
        //end program
    }

void game::iBody() {
    std::cout << "Menus Work in Progess\nPress 0 to go back" << std::endl;
    bool valid = false;

    std::string input;
    std::cin >> input;

    while (valid == false) {
        if (input == "0") {
            valid = true;
        } else {
            std::cout << "Invalid Input" << std::endl;
        }
    }

}
void game::iMask(){
    std::cout << "Menus Work in Progess\nPress 0 to go back" << std::endl;
    bool valid = false;

    std::string input;
    std::cin >> input;

    while (valid == false) {
        if (input == "0") {
            valid = true;
        } else {
            std::cout << "Invalid Input" << std::endl;
        }
    }
}
void game::iFins(){
    std::cout << "Menus Work in Progess\nPress 0 to go back" << std::endl;
    bool valid = false;

    std::string input;
    std::cin >> input;

    while (valid == false) {
        if (input == "0") {
            valid = true;
        } else {
            std::cout << "Invalid Input" << std::endl;
        }
    }
}
void game::iBcd(){
    std::cout << "Menus Work in Progess\nPress 0 to go back" << std::endl;
    bool valid = false;

    std::string input;
    std::cin >> input;

    while (valid == false) {
        if (input == "0") {
            valid = true;
        } else {
            std::cout << "Invalid Input" << std::endl;
        }
    }

}
void game::iTank(){
    std::cout << "Menus Work in Progess\nPress 0 to go back" << std::endl;
    bool valid = false;

    std::string input;
    std::cin >> input;

    while (valid == false) {
        if (input == "0") {
            valid = true;
        } else {
            std::cout << "Invalid Input" << std::endl;
        }
    }
}
void game::iReg(){
    std::cout << "Menus Work in Progess\nPress 0 to go back" << std::endl;
    bool valid = false;

    std::string input;
    std::cin >> input;

    while (valid == false) {
        if (input == "0") {
            valid = true;
        } else {
            std::cout << "Invalid Input" << std::endl;
        }
    }
}
void game::iAcces(){
    std::cout << "Menus Work in Progess\nPress 0 to go back" << std::endl;
    bool valid = false;

    std::string input;
    std::cin >> input;

    while (valid == false) {
        if (input == "0") {
            valid = true;
        } else {
            std::cout << "Invalid Input" << std::endl;
        }
    }
}

void game::sBody(){
    std::cout << "Menus Work in Progess\nPress 0 to go back" << std::endl;
    bool valid = false;

    std::string input;
    std::cin >> input;

    while (valid == false) {
        if (input == "0") {
            valid = true;
        } else {
            std::cout << "Invalid Input" << std::endl;
        }
    }
}
void game::sMask() {
    std::cout << "Menus Work in Progess\nPress 0 to go back" << std::endl;

    bool valid = false;

    std::string input;
    std::cin >> input;

    while (valid == false) {
        if (input == "0") {
            valid = true;
        } else {
            std::cout << "Invalid Input" << std::endl;
        }
    }
}
void game::sFins(){
    std::cout << "Menus Work in Progess\nPress 0 to go back" << std::endl;
    bool valid = false;

    std::string input;
    std::cin >> input;

    while (valid == false) {
        if (input == "0") {
            valid = true;
        } else {
            std::cout << "Invalid Input" << std::endl;
        }
    }
}
void game::sBcd(){
    std::cout << "Menus Work in Progess\nPress 0 to go back" << std::endl;
    bool valid = false;

    std::string input;
    std::cin >> input;

    while (valid == false) {
        if (input == "0") {
            valid = true;
        } else {
            std::cout << "Invalid Input" << std::endl;
        }
    }
}
void game::sTank(){
    std::cout << "Menus Work in Progess\nPress 0 to go back" << std::endl;
    bool valid = false;

    std::string input;
    std::cin >> input;

    while (valid == false) {
        if (input == "0") {
            valid = true;
        } else {
            std::cout << "Invalid Input" << std::endl;
        }
    }
}
void game::sReg(){
    std::cout << "Menus Work in Progess\nPress 0 to go back" << std::endl;
    bool valid = false;

    std::string input;
    std::cin >> input;

    while (valid == false) {
        if (input == "0") {
            valid = true;
        } else {
            std::cout << "Invalid Input" << std::endl;
        }
    }
}
void game::sAcces(){

    std::cout << "Menus Work in Progess\nPress 0 to go back" << std::endl;
    bool valid = false;

    std::string input;
    std::cin >> input;

    while (valid == false) {
        if (input == "0") {
            valid = true;
        } else {
            std::cout << "Invalid Input" << std::endl;
        }
    }
}






/*
void game::setState(int stateIn){
    state = stateIn;
}

int game::getState(){
    return state;
}

void game::setScreen(int screenIn){
    screen = screenIn;
}
int game::getScreen(){
    return screen;
}*/


