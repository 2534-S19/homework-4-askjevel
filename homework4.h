/*
 * homework4.h
 *
 *  Created on: April 3, 2020
 *      Author: Anders Skjeveland
 */

#ifndef HOMEWORK4_H_
#define HOMEWORK4_H_

// This function initializes the board by turning off the Watchdog Timer.
void initBoard();
bool charFSM(char rChar);

// TODO: Define any constants that are local to homework.c using #define
typedef enum{none, first, second, third} char_state_t;

#endif /* HOMEWORK4_H_ */
