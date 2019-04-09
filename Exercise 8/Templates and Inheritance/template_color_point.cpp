#include"Point.cpp"

template <typename T>
class Template_color_point : public Point{
    T color;
};

int main(){
    Template_color_point<float> p1;
}
