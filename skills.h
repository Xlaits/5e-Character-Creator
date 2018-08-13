#include <iostream>
#include <string>

using namespace std;

class Skills
{
private:
<<<<<<< HEAD
	const string langs[16] = {"Common", "Dwarvish", "Elvish", "Giant", "Gnomish", "Goblin", "Halfling", "Orc", "Abyssal", "Celestial", "Draconic", "Deep Speech", "Infernal", "Primordial", "Sylvan", "Undercommon"};
	const string raceSkills[37] = {"Darkvision", "Dwarven Resilience", "Dwarven Combat Training", "Dwarven Tool Proficiency", "Stonecunning", "Dwarven Toughness", "Keen Senses", "Fey Ancestry", "Trance", "High Elf Weapon Training", "Eood Elf Weapon Training", "Fleet of Foot", "Mask of the Wild", "Superior Darkvision", "Sunlight Sensitivity", "Drow Magic", "Drow Weapon Training", "Lucky", "Brave", "Halfling Nimbleness", "Naturally Stealthy", "Stout Resilience", "Human Variant", "Draconic Ancestry", "Breath Weapon", "Draconic Resistance", "Gnome Cunning", "Natural Illusionist", "Speak with Small Beasts", "Artificer's Lore", "Tinker", "Skill Versatility", "Menacing", "Relentless Endurance", "Savage Attacks", "Hellish Resistance", "Infernal Legacy"};
=======
	const string langs[15] = {"Common", "Dwarvish", "Elvish", "Giant", "Gnomish", "Goblin", "Halfling", "Orc", "Abyssal", "Celestial", "Draconic", "Deep Speech", "Infernal", "Primordial", "Sylvan", "Undercommon"};
	
	const string raceSkills[] = {"Draconic Ancestry", "Breath Weapon", "Draconic Resistance", "Gnome Cunning", "Natural Illusionist", "Speak with Small Beasts", "Artificer's Lore", "Tinker", "Skill Versatility", "Menacing", "Relentless Endurance", "Savage Attacks", "Hellish Resistance", "Infernal Legacy"};

	const string hillDwarfSkills[5] = {"Darkvision", "Dwarven Resilience", "Dwarven Combat Training", "Dwarven Tool Proficiency", "Dwarven Toughness"};

	const string mountDwarfSkills[5] = {"Darkvision", "Dwarven Resilience", "Dwarven Combat Training", "Dwarven Tool Proficiency", "Dwarven Armor Training"};

	const string highElfSkills[6] = {"Keen Senses", "Fey Ancestry", "Trance", "High Elf Weapon Training", "Cantrip", "Extra Language"};

	const string woodElfSkills[6] = {"Keen Senses", "Fey Ancestry", "Trance", "Wood Elf Weapon Training", "Fleet of Foot", "Mask of the Wild"};

	const string drowSkills[7] = {"Keen Senses", "Fey Ancestry", "Trance", "Superior Darkvision", "Sunlight Sensitivity", "Drow Magic", "Drow Weapon Training"};

	const string lightfootSkills[4] = {"Lucky", "Brave", "Halfling Nimbleness", "Naturally Stealthy"};

	const string stoutSkills[4] = {"Lucky", "Brave", "Halfling Nimbleness", "Stout Resilience"};

	const string variantHumanSkills[2] = {"Human Skill Proficiency", "Human Feat"};

	const string dragonbornSkills[] = {};
>>>>>>> c3125d6b65a1c4a6db51ddd47f541806c8068a03

public:
	Skills()
	{
		//Nothing needs to be set, this is just a place to hold all the needed skills.
	}
};
