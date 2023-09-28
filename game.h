//
// Created by EvanT on 9/17/2023.
//

#ifndef OEP_ETTRAFTO_GAME_H
#define OEP_ETTRAFTO_GAME_H

class game{

public:

    game();

    void start();
    void inventory();
    void shop();
    void stop();

    void iBody();
    void iMask();
    static void iFins();
    void iBcd();
    void iTank();
    void iReg();
    void iAcces();

    void sBody();
    void sMask();
    void sFins();
    void sBcd();
    void sTank();
    void sReg();
    void sAcces();



    void setState(int stateIn);
    int getState();

    void setScreen(int screenIn);
    int getScreen();


private:
    //int state;
    //int screen;
    enum class MenuOption {
        SelectBody = 1,
        SelectMask = 2,
        SelectFins = 3,
        SelectBcd = 4,
        SelectTank = 5,
        SelectRegulator = 6,
        SelectAccessory = 7,
        Exit = 0
    };
};

#endif //OEP_ETTRAFTO_GAME_H
