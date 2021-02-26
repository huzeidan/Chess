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
};

class game {
public:
    void board_setup();
private:
    std::vector<std::vector<pieces>> board;
    std::vector<char> h_border;
    std::vector<int> v_border;
};

#endif /* game_hpp */
