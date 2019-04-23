#pragma once
#include "Player.cpp"
#include "Tennis_player.h"

void Tennis_Player::set_season_score(unsigned int score)
{
    season_score = score;
}

unsigned int Tennis_Player::get_season_score()const
{
    return season_score;
}

unsigned int Tennis_Player::get_score()const
{
    return season_score;
}

void Tennis_Player::print_type()const
{
    cout<<"Tennis_Player\n";
}

Tennis_Player::Tennis_Player(const char* name, float height, const char* nick, unsigned int score): Player(name, height), season_score(score)
{
    cout<<"Tennis_Player()\n";
    nickname = new char[strlen(nick) + 1];
    assert(nickname);
    strcpy(nickname, nick);
}

Tennis_Player::Tennis_Player(const Tennis_Player& other): Player(other), season_score(other.season_score)
{
    nickname = new char[strlen(other.nickname) + 1];
    assert(nickname);
    strcpy(nickname, other.nickname);
}

Tennis_Player::~Tennis_Player()
{
    cout<<"~Tennis_Player()\n";
    if(nickname != NULL)
    {
        delete[] nickname;
    }
}

Tennis_Player& Tennis_Player::operator=(const Tennis_Player& other)
{
    if(this != &other)
    {
        this->Player::operator=(other);
        if(this->nickname != NULL)
        {
            delete[] this->nickname;
        }
        nickname = new char[strlen(other.nickname) + 1];
        assert(nickname);
        strcpy(nickname, other.nickname);
        season_score = other.season_score;
    }
    return *this;
}











