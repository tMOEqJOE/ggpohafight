#ifndef _HAFIGHT_H
#define _HAFIGHT_H

#include "ggponet.h"

/*
 * hafightwar.h --
 *
 * Interface to the HAFight application.
 *
 */

 /*
  * HAFight_Init --
  *
  * Initialize the fight game.  This initializes the game state and
  * the video renderer and creates a new network session.
  */
void HAFight_Init(unsigned short localport, int player_num, int num_players, GGPOPlayer* players, int num_spectators);
/*
 * HAFight_InitSpectator --
 *
 * Create a new spectator session
 */
void HAFight_InitSpectator(unsigned short localport, int num_players, char* host_ip, unsigned short host_port);
/*
 * HAFight_DrawCurrentFrame --
 *
 * Draws the current frame without modifying the game state.
 */
void HAFight_DrawCurrentFrame();
/*
 * HAFight_AdvanceFrame --
 *
 * Advances the game state by exactly 1 frame using the inputs specified
 * for player 1 and player 2.
 */
void HAFight_AdvanceFrame(int inputs[], int disconnect_flags);
/*
 * HAFight_RunFrame --
 *
 * Run a single frame of the game.
 */
void HAFight_RunFrame();
/*
 * HAFight_Idle --
 *
 * Spend our idle time in ggpo so it can use whatever time we have left over
 * for its internal bookkeeping.
 */
void HAFight_Idle(int time);
/*
 * HAFight_DisconnectPlayer --
 *
 * Disconnects a player from this session.
 */
void HAFight_DisconnectPlayer(int player);
/*
 * HAFight_Exit --
 *
 * Close down the session
 */
void HAFight_Exit();

#define ARRAY_SIZE(n)      (sizeof(n) / sizeof(n[0]))
#define FRAME_DELAY        2

#endif
