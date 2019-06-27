#ifndef GAME_H
#define GAME_H
#include "Player.h"

class Game
{
    public:
        Game();
        virtual ~Game();
        void play();

    protected:

    private:
    Player player1;
    Player player2;

};

#endif // GAME_H
