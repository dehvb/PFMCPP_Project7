#include "Paladin.h"
#include "Utility.h"

// Paladin::Paladin
Paladin::Paladin(const std::string& name_, int hp, int armor_) :
    Character(hp, armor_, 10),
    name(name_)
{
    helpfulItems = makeHelpfulItems(2);
    defensiveItems = makeDefensiveItems(1);
}
// Paladin::getName
const std::string& Paladin::getName()
{
    return name;
}

// Paladin::getStats
std::string Paladin::getStats()
{
    return getCharacterStats(this);
}
