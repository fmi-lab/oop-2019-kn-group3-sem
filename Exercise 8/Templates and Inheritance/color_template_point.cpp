
#include "template_point.cpp"

template <typename T>
class Color_template_point : public Template_point<T>{
    float color;
};

int main(){
    Color_template_point<float> p1;
}
