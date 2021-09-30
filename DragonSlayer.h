#pragma once
#include "Character.h"

struct DragonSlayer : Character
{
    DragonSlayer(const std::string& name_, int hp, int armor_);

    const std::string& getName() override;
    std::string getStats() override;

    void attack(Character& other) override;

protected:
    std::vector<std::unique_ptr<Item>> attackItems;

private:
    const std::string name;
};
