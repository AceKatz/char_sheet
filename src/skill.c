#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "../include/misc.h"
#include "../include/skill.h"


void build_skill(struct skill **point,
                 int index,
                 int ranks,
                 int class)
{
  *point = (struct skill*) malloc(sizeof(struct skill));
  struct skill *loc = *point;
  strcpy(loc->name, skill_names[index]);
  loc->abil = index;
  loc->ranks = ranks;
  loc->classSkill |= class;
}

int skill_mod(struct skill *point)
{
  int ret = point->ranks + abil_mod(point->abil) + \
            point->misc + ((point->classSkill) ? 3 : 0);
  return ret;

}
