#pragma once
#include "DynamicCaster.h"

Dynamic_caster::Dynamic_caster(): length(0)
{
    for(int i = 0; i<10; i++)
    {
        players[i] = NULL;
    }
}



Dynamic_caster::Dynamic_caster(const Dynamic_caster& other): length(other.length)
{
    const Player* p;
    const Tennis_Player* t;
    const Football_Player* f;

    for(int i = 0; i<other.length; i++)
    {
        p = dynamic_cast<Player*>(other.players[i]);
        if(p)
        {
            this->players[i] = new Player(*p);
        }
        t = dynamic_cast<Tennis_Player*>(other.players[i]);
        if(t)
        {
            this->players[i] = new Tennis_Player(*t);
        }
        else
        {
            f = dynamic_cast<Football_Player*>(other.players[i]);
            if(f)
            {
                this->players[i] = new Football_Player(*f);
            }
        }
    }
}

Dynamic_caster::~Dynamic_caster()
{
    for(int i = 0; i<length; i++)
    {
        delete players[i];
        players[i] = NULL;
    }
}

Dynamic_caster& Dynamic_caster::operator=(const Dynamic_caster& other)
{
    if(this != &other)
    {
        length = other.length;
        const Player* p;
        const Tennis_Player* t;
        const Football_Player* f;

        for(int i = 0; i<other.length; i++)
        {
            delete this->players[i];
            players[i] = NULL;
            p = dynamic_cast<Player*>(other.players[i]);
            if(p)
            {
                this->players[i] = new Player(*p);
            }
            t = dynamic_cast<Tennis_Player*>(other.players[i]);
            if(t)
            {
                delete this->players[i];
                this->players[i] = new Tennis_Player(*t);
            }
            else
            {
                f = dynamic_cast<Football_Player*>(other.players[i]);
                if(f)
                {
                    delete this->players[i];
                    this->players[i] = new Football_Player(*f);
                }
            }
        }
    }
    return *this;
}

bool Dynamic_caster::add_player(Player* player)
{
    const Player* p;
    const Tennis_Player* t;
    const Football_Player* f;

    if(length < 9)
    {
        p = dynamic_cast<Player*>(player);
        if(p)
        {
            this->players[length] = new Player(*p);
        }
        t = dynamic_cast<Tennis_Player*>(player);
        if(t)
        {
            this->players[length] = new Tennis_Player(*t);
        }
        else
        {
            f = dynamic_cast<Football_Player*>(player);
            if(f)
            {
                this->players[length] = new Football_Player(*f);
            }
        }
        length ++;
        return true;
    }
    cout<<"No capacity!\n";
    return false;
}

const Player* Dynamic_caster::operator[](size_t pos) const
{
    cout<<"operator[] const\n";
    return players[pos];
}


Player* Dynamic_caster::operator[](size_t pos){
    cout<<"operator[]\n";
    return players[pos];
}


