// defaults.h


#ifndef _DEFAULTS_H
#define _DEFAULTS_H

#include "definitions.h"

#define WIDTH 15
const u8 DIAG = (u8) (WIDTH/sqrt(2));
const u8 HEIGHT = WIDTH + 2*DIAG - 2;

#define MAX_STAMINA 10
#define STARTING_STAMINA 10
#define STAMINA_RECHARGE 3
 


#define KING_STAMINA_DRAIN 1.0f
#define GUARD_STAMINA_DRAIN 3.0f
#define RIFLEMAN_STAMINA_DRAIN 1.0f
#define SPECOPS_STAMINA_DRAIN 2.0f
#define PARATROOPER_STAMINA_DRAIN 2.0f
#define ENGINEER_STAMINA_DRAIN 2.0f
#define SCOUT_STAMINA_DRAIN 1.0f
#define SEARCHLIGHT_STAMINA_DRAIN 255.0f


#define KING_HEALTH_DAMAGE 0
#define GUARD_HEALTH_DAMAGE 0
#define RIFLEMAN_HEALTH_DAMAGE 0
#define SPECOPS_HEALTH_DAMAGE 0
#define PARATROOPER_HEALTH_DAMAGE 0
#define ENGINEER_HEALTH_DAMAGE 0
#define SCOUT_HEALTH_DAMAGE 0
#define SEARCHLIGHT_HEALTH_DAMAGE 0


#define KING_ARMOR_DAMAGE 0
#define GUARD_ARMOR_DAMAGE 0
#define RIFLEMAN_ARMOR_DAMAGE 0
#define SPECOPS_ARMOR_DAMAGE 0
#define PARATROOPER_ARMOR_DAMAGE 0
#define ENGINEER_ARMOR_DAMAGE 0
#define SCOUT_ARMOR_DAMAGE 0
#define SEARCHLIGHT_ARMOR_DAMAGE 0


#define KING_STARTING_HEALTH 1
#define GUARD_STARTING_HEALTH 1
#define RIFLEMAN_STARTING_HEALTH 1
#define SPECOPS_STARTING_HEALTH 1
#define PARATROOPER_STARTING_HEALTH 1
#define ENGINEER_STARTING_HEALTH 1
#define SCOUT_STARTING_HEALTH 1
#define SEARCHLIGHT_STARTING_HEALTH 1


#define KING_VISION 5
#define GUARD_VISION 2
#define RIFLEMAN_VISION 4
#define SPECOPS_VISION 3
#define ENGINEER_VISION 2
#define SCOUT_VISION 6
#define SEARCHLIGHT_VISION 5


#define KING_STARTING_ARMOR 1
#define GUARD_STARTING_ARMOR 1
#define RIFLEMAN_STARTING_ARMOR 1
#define SPECOPS_STARTING_ARMOR 1
#define PARATROOPER_STARTING_ARMOR 1
#define ENGINEER_STARTING_ARMOR 1
#define SCOUT_STARTING_ARMOR 1
#define SEARCHLIGHT_STARTING_ARMOR 1


#endif
