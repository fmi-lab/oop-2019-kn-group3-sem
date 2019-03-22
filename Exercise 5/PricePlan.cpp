#include<iostream>
using namespace std;

class PricePlan{
private:
    float hot_price;
    float cold_price;
    float electricity_price;
    unsigned int discount;

public:

    PricePlan(float hot_price = 0, float cold_price = 0, float electricity_price = 0, unsigned int discount = 0):
        hot_price(hot_price), cold_price(cold_price), electricity_price(electricity_price), discount(discount){}


    float get_hot_price() const{
        return hot_price;
    }
    float get_cold_price() const{
        return cold_price;
    }
    float get_electricity_price() const{
        return electricity_price;
    }
    unsigned int get_discount() const{
        return discount;
    }
};

