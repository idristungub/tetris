#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
class game
{
private:

	// Private function
	void initVariables();
	void initWindow();
	void initTetrimino();
	void initGridMap();

	// Game logic
	int points;
	float fallTimer;
	float fallTimerMax;



	// grid
	sf::Vector2f Tile_Size;
	sf::Vector2f Grid_Size;
	sf::RectangleShape grid;
	sf::RectangleShape tile;


	// Window
	sf::RenderWindow* window;
	sf::VideoMode videoMode;
	



public:

	// Functions for update and render for window
	void update();
	void updatePollEvents();
	void render();

	// Accessors
	const bool running() const;

	// Contructors and Destructors
	game();
	virtual ~game();

};

