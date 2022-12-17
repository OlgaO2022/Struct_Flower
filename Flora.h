#pragma once
#include <string>;

struct WildFlowers { // структура 3
	std::string name;
	int	number_of_petals;
	std::string color;
};
struct Roses {  // структура 2
	std::string family_of_flowers;
	double flower_height;
	WildFlowers roseship;
};
struct Flowers { // структура 1
	std::string type;
	std::string group_by_decorative;
	Roses rose;
};
	
/*
struct Flowers {
	std::string type;
	std::string group_by_decorative;
	struct Roses {
		std::string family_of_flowers;
		double flower_height;
		struct WildFlowers {
			std::string name;
			int	number_of_petals;
			std::string color;
		};
	};
};*/