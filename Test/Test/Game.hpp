#ifndef GAME_H
#define GAME_H
#include "GameObject.hpp"
#include <string>

class Game {
	GameObject scene[1];

public: 
	Game() {
		scene[0] = GameObject();
	}

	std::string selectGameObject(std::string name) {
		if (name == "door")
			return "open";
		
		return "half-open";
	}

	void selectInteraction();
	void setInteractionOptions();
	std::string startInteraction();
	std::string getName();
};

#endif