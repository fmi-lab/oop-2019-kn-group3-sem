#include"HotWaterUsage.cpp"
#include"ColdWaterUsage.cpp"
#include"ElectricityUsage.cpp"
#include"PricePlan.cpp"

using namespace std;

class UtilitiesInvoicing{
private:
    HotWaterUsage hot;
    ColdWaterUsage cold;
    ElectricityUsage electricity;
    PricePlan plan;

public:
    UtilitiesInvoicing(const PricePlan& plan):  hot(), cold(), electricity(), plan(plan){}
    UtilitiesInvoicing(const UtilitiesInvoicing& other): hot(other.hot), cold(other.cold), electricity(other.electricity), plan(other.plan){}
    ~UtilitiesInvoicing() = default;
    UtilitiesInvoicing& operator=(const UtilitiesInvoicing& other) = default;

    void addHotWaterUsage(const HotWaterUsage& hot){
        this->hot = hot;
    }
    void addColdWaterUsage(const ColdWaterUsage& cold){
        this->cold = cold;
    }
    void addElectricityUsage(const ElectricityUsage& electricity){
        this->electricity = electricity;
    }

    void printInvoice() const{
        cout<<"Hot Water:\n";
        cout<<"Usage: "<<hot.get_amount()<<endl;
        cout<<"Price: "<<hot.get_amount() * plan.get_hot_price()<<endl;
        cout<<"Discounted Price: "<<hot.get_amount()*plan.get_hot_price()*(1 - (float)plan.get_discount()/100)*
        (hot.get_tariff() == 'n' ? 0.95 : 1)<<endl;
    }

};

int main(){


    HotWaterUsage hotWaterUsage(0.5, 'd');
    ColdWaterUsage coldWaterUsage();
    ElectricityUsage electricityUsage();

    PricePlan pricePlan(10,3,4.1,30);

    UtilitiesInvoicing utilitiesInvoicing(pricePlan);
    utilitiesInvoicing.addHotWaterUsage(hotWaterUsage);
//    utilitiesInvoicing.addColdWaterUsage(coldWaterUsage);
//    utilitiesInvoicing.addElectricityUsage(electricityUsage);

    utilitiesInvoicing.printInvoice();


}
