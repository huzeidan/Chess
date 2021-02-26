//
//  game.hpp
//  Chess
//
//  Created by Husam Zeidan on 2/23/21.
//  Copyright © 2021 Husam Zeidan. All rights reserved.
//

#ifndef game_hpp
#define game_hpp

#include <stdio.h>
#include <vector>
#include <iostream>

struct pieces {
    char piece;
    bool p1;
    
};

class game {
public:
    void board_setup();
private:
    std::vector<std::vector<char>> board;
    std::vector<char> h_border;
    std::vector<int> v_border;
    char pawn = 'p';
    char bishop = 'b';
    char rook = 'r';
    char knight = 'n';
    char king = 'k';
    char queen = 'q';
};

#endif /* game_hpp */
