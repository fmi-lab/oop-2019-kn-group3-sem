#pragma once

class Player{
private:
    char* name;
    float height;

public:
    Player(const char* = "Player", float height = 0);
    Player(const Player&);
    virtual ~Player();
    Player& operator=(const Player&);

    void set_height(float);
    float get_height()const;
    virtual unsigned int get_score()const;
    virtual void print_type()const;
};
