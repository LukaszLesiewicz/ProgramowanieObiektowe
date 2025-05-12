#ifndef GAMELOGIC_H
#define GAMELOGIC_H
#include <vector>
#include <deque>

class GameLogic{
public:
    enum ksztalt {None, X, O};

    struct Move{
        int wiersz;
        int kolumna;
        ksztalt ksztalt;
    };

    GameLogic();
    bool makeMove(int wiersz, int kolumna);
    ksztalt check_winner();
    void reset();
    ksztalt get_obecnyksztalt();
    ksztalt get_pole(int wiersz, int kolumna);
    Move usunNajstarszy();
    Move get_ostatnioUsuniety();

private:

    std::vector<std::vector<ksztalt>> plansza;
    std::deque<Move> movesX;
    std::deque<Move> movesO;
    ksztalt obecnyksztalt;
    Move ostatnioUsuniety;
};


#endif // GAMELOGIC_H
