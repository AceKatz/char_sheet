#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "char.h"
#include "skill.h"


void build_skill(struct skill **point, 
                          int index, int ranks, int class)
{
  *point = (struct skill*) malloc(sizeof(struct skill));
  strcpy((*point)->name, skill_names[index]);

}
