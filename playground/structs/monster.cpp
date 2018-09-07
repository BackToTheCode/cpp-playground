#include <iostream>
#include <string>

enum class MonsterType
{
    OGRE, 
    DRAGON,
    ORC,
    GIANT_SPIDER,
    SLIME
};

struct Monster 
{
    MonsterType type;
    std::string name;
    int health;

};

std::string getMonsterTypeString(Monster monster)
{
	if (monster.type == MonsterType::OGRE)
		return "Ogre";
	if (monster.type == MonsterType::DRAGON)
		return "Dragon";
	if (monster.type == MonsterType::ORC)
		return "Orc";
	if (monster.type == MonsterType::GIANT_SPIDER)
		return "Giant Spider";
	if (monster.type == MonsterType::SLIME)
		return "Slime";
 
	return "Unknown";
}

void printMonster(Monster monster)
{
    std::cout << "This ";
    std::cout << getMonsterTypeString(monster);
    std::cout << " is named ";
    std::cout << monster.name;
    std::cout << " and has ";
    std::cout << monster.health;
    std::cout << " health. \n";
}

int main()
{
    Monster ogre = { MonsterType::OGRE, "Torg", 6000 };
    Monster slime = { MonsterType::SLIME, "Blurp", 200 };
    printMonster(ogre);
    printMonster(slime);
}
