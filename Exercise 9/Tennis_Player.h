#pragma once
#include "Player.h"

class Tennis_Player : public Player{
private:
    char* nickname;
    unsigned int season_score;
public:
    void set_season_score(unsigned int);
    unsigned int get_season_score()const;
    unsigned int get_score()const;
    void print_type()const;

    Tennis_Player(const char* = "name", float = 0, const char* = "Nickname", unsigned int = 0);
    Tennis_Player(const Tennis_Player&);
    ~Tennis_Player();
    Tennis_Player& operator=(const Tennis_Player&);
};
