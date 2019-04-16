#pragma once
#include "Player.cpp"
#include "Football_Player.h"


void Football_Player::set_season_goals(unsigned int goals){
    season_goals = goals;
}


unsigned int Football_Player::get_season_goals()const{
    return season_goals;
}

unsigned int Football_Player::get_score()const{
    return season_goals;
}

void Football_Player::print_type()const{
    cout<<"Football_player\n";
}
