#include "template_point.cpp"

template <typename T, typename L>
class Template_color_template_point : public Template_point<T>{
    L color;
};

int main(){
    Template_color_template_point<float, float> p1;
}

