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

enum space {p1, p2, empty};

struct pieces {
    char piece;
    space type;
    bool first_move;
};

class game {
public:
    void board_setup();
    void player_move(int pos1_a, int pos1_b, int pos2_a, int pos2_b);
    void move_pawn(int &pos1_a, int &pos1_b, int &pos2_a, int &pos2_b);
    void move_rook(int &pos1_a, int &pos1_b, int &pos2_a, int &pos2_b);
    void move_knight(int &pos1_a, int &pos1_b, int &pos2_a, int &pos2_b);
    void move_bishop(int &pos1_a, int &pos1_b, int &pos2_a, int &pos2_b);
    void move_queen(int &pos1_a, int &pos1_b, int &pos2_a, int &pos2_b);
    void move_king(int &pos1_a, int &pos1_b, int &pos2_a, int &pos2_b);
private:
    std::vector<std::vector<pieces>> board;
    std::vector<char> h_border;
    std::vector<int> v_border;
};

#endif /* game_hpp */
