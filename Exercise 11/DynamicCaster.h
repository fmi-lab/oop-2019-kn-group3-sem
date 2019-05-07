#pragma once
#include "../Exercise 9/Player.cpp"
#include "../Exercise 9/Tennis_Player.cpp"
#include "../Exercise 9/Football_Player.cpp"

class Dynamic_caster{
public:
    Dynamic_caster();
    Dynamic_caster(const Dynamic_caster&);
    ~Dynamic_caster();
    Dynamic_caster& operator=(const Dynamic_caster&);

    bool add_player(Player*);
    const Player* operator[](size_t) const;
    Player* operator[](size_t);


private:
    Player* players[10];
    size_t length;
};
