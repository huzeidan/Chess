//
//  game.cpp
//  Chess
//
//  Created by Husam Zeidan on 2/23/21.
//  Copyright © 2021 Husam Zeidan. All rights reserved.
//

#include "game.hpp"
using namespace std;

    
void game::board_setup() {
    board.resize(8, vector<char>(8));
    h_border.resize(8);
    v_border.resize(8);
    
    char hPos = 97;
    int vPos = 8;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (i == 0) {
                h_border[j] = hPos;
                v_border[j] = vPos;
                hPos++;
                vPos--;
            }
            if (i == 0 || i == 7) {
                switch (j) {
                    case 0:
                    case 7:
                        board[i][j] = rook;
                        break;
                    case 1:
                    case 6:
                        board[i][j] = knight;
                        break;
                    case 2:
                    case 5:
                        board[i][j] = bishop;
                        break;
                    case 3:
                        board[i][j] = queen;
                        break;
                    case 4:
                        board[i][j] = king;
                        break;
                    default:
                        cout << "This should never print/n";
                        break;
                }
            } else if (i == 1 || i == 6) {
                board[i][j] = pawn;
            } else {
                board[i][j] = ' ';
            }
        }
    }
   
    for (int i = 0; i < 8; i++) {
        cout << h_border[i] << " ";
    }
    cout << endl;
    
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cout << board[i][j] << " ";
        }
        cout << v_border[i] << endl;
    }
}
