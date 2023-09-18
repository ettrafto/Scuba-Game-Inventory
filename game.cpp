//
// Created by EvanT on 9/17/2023.
//
#include "game.h"

game::game();

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
}
