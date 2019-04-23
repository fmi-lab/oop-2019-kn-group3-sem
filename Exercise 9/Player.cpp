#pragma once
#include "Player.h"
#include<iostream>
#include<cstring>
#include<cassert>
using namespace std;

void Player::set_height(float height)
{
    this->height = height;
}

float Player::get_height()const
{
    return height;
}

unsigned int Player::get_score()const
{
    return 0;
}

void Player::print_type()const
{
    cout<<"Player\n";
}

Player::Player(const char* name, float height): height(height)
{
    cout<<"Player()\n";
    this->name = new char[strlen(name) + 1];
    assert(this->name);
    strcpy(this->name, name);
}

Player::Player(const Player& other): height(other.height)
{
    this->name = new char[strlen(other.name) + 1];
    assert(this->name);
    strcpy(this->name, other.name);
}

Player::~Player()
{
    cout<<"~Player()\n";
    if(name!=NULL)
    {
        delete[] name;
    }
}

Player& Player::operator=(const Player& other)
{
    if(this != &other)
    {
        if(name!=NULL)
        {
            delete[] name;
        }
        this->name = new char[strlen(other.name) + 1];
        assert(this->name);
        strcpy(this->name, other.name);
        height = other.height;
    }
    return *this;
}











