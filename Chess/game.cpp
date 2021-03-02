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
    board.resize(8, vector<pieces>(8));
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
            } //if statement end
            if (i == 0 || i == 7) {
                board[i][j].first_move = true;
                // Switch statement to sort the order of the pieces on the board and assigns which pieces
                // belong to which player.
                switch (j) {
                    case 0:
                    case 7:
                        board[i][j].piece = 'r';
                        if (i == 0) {
                            board[i][j].type = p1;
                        } else {
                            board[i][j].type = p2;
                        }
                        break;
                    case 1:
                    case 6:
                        board[i][j].piece = 'n';
                        if (i == 0) {
                            board[i][j].type = p1;
                        } else {
                            board[i][j].type = p2;
                        }
                        break;
                    case 2:
                    case 5:
                        board[i][j].piece = 'b';
                        if (i == 0) {
                            board[i][j].type = p1;
                        } else {
                            board[i][j].type = p2;
                        }
                        break;
                    case 3:
                        board[i][j].piece = 'q';
                        if (i == 0) {
                            board[i][j].type = p1;
                        } else {
                            board[i][j].type = p2;
                        }
                        break;
                    case 4:
                        board[i][j].piece = 'k';
                        if (i == 0) {
                            board[i][j].type = p1;
                        } else {
                            board[i][j].type = p2;
                        }
                        break;
                    default:
                        cout << "This should never print/n";
                        break;
                }// Switch statement end
            } else if (i == 1 || i == 6) {
                //Assigns all pawns for each player
                board[i][j].piece = 'p';
                board[i][j].first_move = true;

                if (i == 1) {
                    board[i][j].type = p1;
                } else {
                    board[i][j].type = p2;
                }// if statement end
                
            } else {
                //Assigns every empty space
                board[i][j].piece = ' ';
                board[i][j].type = empty;
                board[i][j].first_move = false;
            } // If statement end
        }// for loop end
    }// for loop end
   
    for (int i = 0; i < 8; i++) {
        cout << h_border[i] << "   ";
    }
    cout << endl;
    
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cout << board[i][j].piece << " | ";
            
        }
        cout << v_border[i] << endl;
        for (int i = 0; i < 8; i++) {
            cout << "----";
        }
        cout << endl;
    }
}

void game::player_move(int pos1_a, int pos1_b, int pos2_a, int pos2_b) {
    
}
