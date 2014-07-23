#ifndef __MISC_H__
#define __MISC_H__

#define ABIL_LEN 0x06

#define STR 0x00
#define DEX 0x01
#define CON 0x02
#define INT 0x03
#define WIS 0x04
#define CHA 0x05

#define LG 0x00
#define NG 0x01
#define CG 0x02
#define LN 0x10
#define N  0x11
#define CN 0x12
#define LE 0x20
#define NE 0x21
#define CE 0x22

char* alignment[] = {"Lawful Good", "Neutral Good", "Chaotic Good",
                     "Lawful Neutral", "Neutral", "Chaotic Neutral",
                     "Lawful Evil", "Neutral Evil", "Chaotic Evil"};


int ABIL_SCORES[6];

int abil_mod(int);// ability score modifier ((score[abil] / 2) - 5)
int carry(int);// carrying capacity



#endif
