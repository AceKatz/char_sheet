#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "../include/misc.h"
#include "../include/skill.h"


int abil_mod(int abil)
{
  return ((ABIL_SCORES[abil] / 2) -5);
}

int carry_cap(int load)
{
  int strength = ABIL_SCORES[STR];
  int light, med, heavy, lift, push;
  if (strength <= 10)
    heavy = strength * 10;
  else
  {
    double expon = 0.2 * (double) strength;
    double r1 = pow((double)2, floor(expon));
    double r2 = pow((double)2, expon);
    double roundVal = 1.25 * r1;
    heavy =(int) (round(((double)(25) * r2) / roundVal) * roundVal);
  }
  light = (int) floor((double) heavy * (1.0/3.0));
  med   = (int) floor((double) heavy * (2.0/3.0));
  lift = heavy * 2;
  push = heavy * 5;

  if (load == 0) return light;
  else if (load == 1) return med;
  else if (load == 2) return heavy;
  else if (load == 3) return lift;
  else if (load == 4) return push;
  
  return -1;
}
