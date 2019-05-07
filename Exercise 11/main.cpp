#include"DynamicCaster.cpp"

using namespace std;

int main(){
    Player p1;
    Football_Player f1, f2;
    Tennis_Player t1;
    Player* p_p1 = &p1;
    Player* p_t1 = &t1;
    Player* p_f1 = &f1;
    Player* p_f2 = &f2;

    Dynamic_caster dc;

    dc.add_player(p_p1);
    dc.add_player(p_t1);
    dc.add_player(p_f1);
    dc.add_player(p_f2);

    dc[0]->print_type();
    dc[1]->print_type();


    const Dynamic_caster dc2(dc);
    dc2[2]->print_type();

    Dynamic_caster dc3;
    dc3 = dc;

    dc3[0]->print_type();
    dc3[1]->print_type();



}
