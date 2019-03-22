#include<iostream>
using namespace std;

class HotWaterUsage{
private:
    float amount;
    char tariff;

public:
    HotWaterUsage(float amount = 0, char tariff = 'd'): amount(amount), tariff(tariff){}
    HotWaterUsage(const HotWaterUsage& other): amount(other.amount), tariff(other.tariff){}
    void set_amount(float amount){
        this->amount = amount;
    }
    void set_tariff(char tariff){
        this->tariff = tariff;
    }

    float get_amount() const{
        return amount;
    }

    char get_tariff() const{
        return tariff;
    }
};
