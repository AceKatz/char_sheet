#ifndef __SKILL_H__
#define __SKILL_H__



//Assigne each skill a number, build an array of struct skill, each #define will be its index
//
#define SKILL_LEN 0x23

#define ACROBATICS_I      0x00
#define APPRAISE_I        0x01
#define BLUFF_I           0x02
#define CLIMB_I           0x03
#define CRAFT_I           0x04
#define DIPLOMACY_I       0x05
#define DISABLE_DEVICE_I  0x06
#define DISGUISE_I        0x07
#define ESCAPE_ARTIST_I   0x08
#define FLY_I             0x09
#define HANDLE_ANIMAL_I   0x0A
#define HEAL_I            0x0B
#define INTIMIDATE_I      0x0C
#define KNOWLEDGE_ARCAN_I 0x0D
#define KNOWLEDGE_DUNGE_I 0x0E
#define KNOWLEDGE_ENGIN_I 0x0F
#define KNOWLEDGE_GEOGR_I 0x10
#define KNOWLEDGE_HISTO_I 0x11
#define KNOWLEDGE_LOCAL_I 0x12
#define KNOWLEDGE_NATUR_I 0x13
#define KNOWLEDGE_NOBIL_I 0x14
#define KNOWLEDGE_PLANE_I 0x15
#define KNOWLEDGE_RELIG_I 0x16
#define LINGUISTICS_I     0x17
#define PERCEPTION_I      0x18
#define PERFORM_I         0x19
#define PROFESSION_I      0x1A
#define RIDE_I            0x1B
#define SENSE_MOTIVE_I    0x1C
#define SLEIGHT_OF_HAND_I 0x1D
#define SPELLCRAFT_I      0x1E
#define STEALTH_I         0x1F
#define SURVIVAL_I        0x20
#define SWIM_I            0x21
#define USE_MAGIC_DEV_I   0x22

char* skill_names[] = {"Acrobatics","Appraise", "Bluff",
                       "Climb","Craft","Diplomacy",
                       "Disable Device", "Disguise", 
                       "Escape Artist", "Fly", "Handle Animal", 
                       "Heal", "Intimidate",
                       "Knowledge (Arcana)", 
                       "Knowledge (Dungeoneering)",
                       "Knowledge (Engineering)", 
                       "Knowledge (Geography)",
                       "Knowledge (History)", "Knowledge (Local)",
                       "Knowledge (Nature)", "Knowledge (Nobility)",
                       "Knowledge (Planes)", "Knowledge (Religion)",
                       "Linguistics", "Perception", "Perform",
                       "Profession", "Ride", "Sense Motive",
                       "Sleight of Hand", "Spellcraft",
                       "Stealth", "Survival", "Swim",
                       "Use Magic Device"
                      };


struct skill
{
	char name[30]; // full name of skill (ex. "Acrobatics")
	int abil;      // Index of relevant ability (see char.h macros)
	int ranks;     // Number of ranks character has in skill
  int classSkill;// Bool whether or not the skill is a class skill
                 //    for the character
  int misc;      // the sum of all miscelanious modifiers,
                 //    to be entered by player during
                 //    creation/leveling
};

/**
 * Call to create a struct skill, used when loading char file
 *
 * @param point pointer to struct, where data will be saved in memory
 * @param index index of the skill (its macro can be passed for ease)
 * @param ranks the number of ranks the character has in the skill
 * @param class whether or not the character has the skill as a class skill
 * @return pointer to struct skill
 */
void build_skill(struct skill **, int, int, int);

/**
 * Call to get the value of the modifier for a check with this skill
 *
 * @param index the index of the skill in question
 * @return the sum of all the skill modifiers
 */
int skill_mod(struct skill*);

/**
 *
 *
 */


#endif
