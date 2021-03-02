//
//  main.cpp
//  Chess
//
//  Created by Husam Zeidan on 2/16/21.
//  Copyright © 2021 Husam Zeidan. All rights reserved.
//

#include <iostream>
#include "game.hpp"
#include "player.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    string p1_name, p2_name;
    cout << "Enter Player1: ";
    cin >> p1_name;
    cout << "Enter Player2: ";
    cin >> p2_name;
    
    Player p1(p1_name);
    Player p2(p2_name);
    
    cout << p1_name << " vs. " << p2_name << endl;
    game p;
    p.board_setup();
    
    return 0;
}
