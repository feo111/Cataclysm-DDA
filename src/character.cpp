#include "character.h"

Character::Character() {
    Creature::set_speed_base(100);
};

Character::Character(const Creature &) {
    Creature::set_speed_base(100);
};

