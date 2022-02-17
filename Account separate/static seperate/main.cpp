#include <iostream>
#include "player.h"
using namespace std;

    void display_active_player(){
        cout<<"Active Players : "<<Player::get_num_players()<<endl;
    }

int main(){
        display_active_player();
        Player nisham{"Nisham"};
        display_active_player();
    {
        Player geri{"geri"};
        display_active_player();
    }
        display_active_player();
        Player *enemy = new Player{"Enemy",100,200};
        display_active_player();
        delete enemy;
        display_active_player();
    }