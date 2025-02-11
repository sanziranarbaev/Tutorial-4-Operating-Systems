/*
 * Tutorial 4 Jeopardy Project for SOFE 3950U / CSCI 3020U: Operating Systems
 *
 * Copyright (C) 2015, <Arno Nazarian 100868853
                        Hasaan Rashidi 100876631
                        Sanzir Anarbaev 100704172 >
 * All rights reserved.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "players.h"

// Returns true if the player name matches one of the existing players
bool player_exists(player *players, int num_players, char *name)
{
    for (int i = 0; i < num_players; i++) {
        if (strcmp(players[i].name, name) == 0) {
            return true;  // Player found
        }
    }
    return false;  // Player not found
}

// Go through player list and update the score for given player 

void update_score(player *players, int num_players, char *name, int score)
{
    for (int i = 0; i < num_players; i++) {
        if (strcmp(players[i].name, name) == 0) {
            players[i].score += score;  // Add score to the player's current score
            break;  // Exit loop once the player is found and score is updated
        }
    }
}
