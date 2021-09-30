#include "AttackItem.h"
#include "Utility.h"
#include <iostream>

void AttackItem::use(Character* character)
{
    useAttackItem(character, this);
}
