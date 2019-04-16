#pragma once
#include "Player.h"
#include<iostream>
using namespace std;

void Player::set_height(float height)
{
    this->height = height;
}

float Player::get_height()const
{
    return height;
}

unsigned int Player::get_score()const{
    return 0;
}

void Player::print_type()const{
    cout<<"Player\n";
}
