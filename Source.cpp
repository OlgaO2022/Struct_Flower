#include <iostream>
#include <array>
#include <string>
#include "Flora.h"




int main() {

		Flowers flower;
		flower.type = "rosaceae";
		flower.group_by_decorative = "blooming";
		flower.rose.family_of_flowers = "rose";
		flower.rose.flower_height = 30.5;
		flower.rose.roseship.name = "rosehip";
		flower.rose.roseship.number_of_petals = 5;
		flower.rose.roseship.color = "red";


		// можно проинициализировать так:
		// Flowers flower{ "rosaceae", "blooming", "rose", 30.5, "rosehip", 5, "red" };

		std::cout << "color - " << flower.rose.roseship.color << '\n';


	return 0;
}