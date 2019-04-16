#pragma once

class Player{
private:
    float height;

public:
    void set_height(float);
    float get_height()const;
    virtual unsigned int get_score()const;
    virtual void print_type()const;
};
