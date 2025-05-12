#include "gamelogic.h"
#include <vector>
#include <deque>

GameLogic::GameLogic() {
    plansza = {
        {None, None, None},
        {None, None, None},
        {None, None, None}
    };
    movesX.clear();
    movesO.clear();
    obecnyksztalt = O;
}

bool GameLogic::makeMove(int w, int k){
    if(w >= 0 and w < 3 and k>=0 and k < 3 and plansza[w][k] == None ){

        Move ruch;
        ruch.kolumna=k;
        ruch.wiersz=w;
        ruch.ksztalt=obecnyksztalt;

        plansza[w][k] = obecnyksztalt;
        if(obecnyksztalt == O){
            movesO.push_back(ruch);
            obecnyksztalt = X;
        }else{
            movesX.push_back(ruch);
            obecnyksztalt = O;
        }

        if(movesO.size()>3 or movesX.size()>3){
            usunNajstarszy();
        }


        return true;
    }
    return false;
}

GameLogic::ksztalt GameLogic::check_winner(){
    for (int i = 0; i < 3; ++i) {
        if (plansza[i][0] != None and
            plansza[i][0] == plansza[i][1] and
            plansza[i][1] == plansza[i][2]) {
            return plansza[i][0];
        }
    }


    for (int j = 0; j < 3; ++j) {
        if (plansza[0][j] != None and
            plansza[0][j] == plansza[1][j] and
            plansza[1][j] == plansza[2][j]) {
            return plansza[0][j];
        }
    }


    if (plansza[0][0] != None and
        plansza[0][0] == plansza[1][1] and
        plansza[1][1] == plansza[2][2]) {
        return plansza[0][0];
    }


    if (plansza[0][2] != None and
        plansza[0][2] == plansza[1][1] and
        plansza[1][1] == plansza[2][0]) {
        return plansza[0][2];
    }

    return None;
}

void GameLogic::reset() {
    plansza = {
        {None, None, None},
        {None, None, None},
        {None, None, None}
    };
    movesX.clear();
    movesO.clear();
    obecnyksztalt = O;
}

GameLogic::Move GameLogic::usunNajstarszy() {
    Move usuwany;
    if (movesO.size() > 3) {
        usuwany = movesO.front();
        plansza[usuwany.wiersz][usuwany.kolumna] = None;
        movesO.pop_front();
    } else if (movesX.size() > 3) {
        usuwany = movesX.front();
        plansza[usuwany.wiersz][usuwany.kolumna] = None;
        movesX.pop_front();
    }
    ostatnioUsuniety = usuwany;
    return usuwany;
}

GameLogic::Move GameLogic::get_ostatnioUsuniety(){
    return ostatnioUsuniety;
}


GameLogic::ksztalt GameLogic::get_obecnyksztalt(){
    return obecnyksztalt;
}

GameLogic::ksztalt GameLogic::get_pole(int w, int k){
    if (w >= 0 and w < 3 and k >= 0 and k < 3) {
        return plansza[w][k];
    }
    return None;
}
