#ifndef __CHAR_H__
#define __CHAR_H__

#define ABIL_LEN 0x06

#define STR 0x00
#define DEX 0x01
#define CON 0x02
#define INT 0x03
#define WIS 0x04
#define CHA 0x05

int ABIL_SCORES[6];

int abil_mod(int);// ability score modifier ((score[abil] / 2) - 5)
int carry(int);// carrying capacity



#endif
