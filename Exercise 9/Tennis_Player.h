#pragma once
#include "Player.h"

class Tennis_Player : public Player{
private:
    unsigned int season_score;
public:
    void set_season_score(unsigned int);
    unsigned int get_season_score()const;
    unsigned int get_score()const;
    void print_type()const;
};
