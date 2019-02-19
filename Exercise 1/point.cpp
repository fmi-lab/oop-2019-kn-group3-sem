#include<iostream>
using namespace std;

class Point{
private:
    double X;
    double Y;

public:
    void setX(double other){
        X = other;
    }
    void setY(double other){
        Y = other;
    }

    double getX(){
        return X;
    }
    double getY(){
        return Y;
    }

    Point(){
        cout<<"Counstructor\n";
        X = 0;
        Y = 0;
    }

    Point(double other_x, double other_y){
        cout<<"Counstructor with params\n";
        X = other_x;
        Y = other_y;
    }

};


//int main(){
//    Point p1;
//    p1.setX(5);
//    cout<<p1.getX()<<endl;
//    Point p2(5,6);
//    cout<<p2.getY();
//}
//



















