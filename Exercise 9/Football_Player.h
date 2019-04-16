#pragma once
#include "Player.h"

class Football_Player : public Player{
private:
    unsigned int season_goals;

public:
    void set_season_goals(unsigned int);
    unsigned int get_season_goals()const;
    unsigned int get_score()const;
    void print_type()const;
};
