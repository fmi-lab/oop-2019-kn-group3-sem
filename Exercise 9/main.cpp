#include "Tennis_Player.cpp"
#include "Football_Player.cpp"
#include<iostream>

using namespace std;

int main()
{
    Player* players[5];

    Player p1, p2;
    p1.set_height(182.5);
    p2.set_height(173.2);

    Football_Player f1;
    f1.set_height(123.4);
    f1.set_season_goals(5);

    Tennis_Player t1, t2;
    t1.set_height(172.0);
    t2.set_height(183.9);
    t1.set_season_score(20);
    t2.set_season_score(9);

    players[0] = &p1;
    players[1] = &t1;
    players[2] = &f1;
    players[3] = &t2;
    players[4] = &p2;


    for(int i = 0; i<5; i++)
    {
        cout<<"players["<<i<<"]:"<<endl;
        players[i]->print_type();
        cout<<players[i]->get_height()<<endl;
        cout<<players[i]->get_score()<<endl;
    }

}
