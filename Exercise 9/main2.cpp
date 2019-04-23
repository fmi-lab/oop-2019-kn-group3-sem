#include"Tennis_Player.cpp"

using namespace std;

int main(){
    Player p1("Ivan", 180);
    Tennis_Player t1("Petar", 178, "strelata", 20);

    Player* p_p1 = new Tennis_Player();

    p_p1->print_type();

    delete p_p1;
}
