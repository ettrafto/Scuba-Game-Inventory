//
// Created by EvanT on 9/17/2023.
//

#ifndef OEP_ETTRAFTO_GAME_H
#define OEP_ETTRAFTO_GAME_H

class game{
    game();

    void setState(int stateIn);
    int getState();

    void setScreen(int screenIn);
    int getScreen();

private:
    int state;
    int screen;
};

#endif //OEP_ETTRAFTO_GAME_H
