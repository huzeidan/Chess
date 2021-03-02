//
//  player.hpp
//  Chess
//
//  Created by Husam Zeidan on 2/23/21.
//  Copyright © 2021 Husam Zeidan. All rights reserved.
//

#ifndef player_hpp
#define player_hpp

#include <stdio.h>
#include <string>

class Player {
public:
    Player(std::string n) : name(n) {};
    void move();
    
private:
    std::string name;
    
};

#endif /* player_hpp */
