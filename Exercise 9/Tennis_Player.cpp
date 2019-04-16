#pragma once
#include "Player.cpp"
#include "Tennis_player.h"

void Tennis_Player::set_season_score(unsigned int score){
    season_score = score;
}

unsigned int Tennis_Player::get_season_score()const{
    return season_score;
}

unsigned int Tennis_Player::get_score()const{
    return season_score;
}

void Tennis_Player::print_type()const{
    cout<<"Tennis_Player\n";
}
