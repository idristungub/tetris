
#include "game.h"




// Function

void game::initVariables()
{
	this->window = nullptr;
	this->points = 0;
	this->fallTimer = 0;
	this->fallTimerMax = 100.f;

	// grid variables
	this->Tile_Size = { 42.f, 35.f };
	this->Grid_Size = { 420.f, 700.f };
}

void game::initWindow()
{
	this->videoMode.size.y = 1000;
	this->videoMode.size.x = 1000;

	this->window = new sf::RenderWindow(this->videoMode, "Tetris", sf::Style::Titlebar | sf::Style::Close);

	this->window->setFramerateLimit(60);
}

void game::initTetrimino()
{

}


void game::initGridMap()
{ 

	this->grid.setSize(this->Grid_Size);
	this->tile.setSize(this->Tile_Size);



	this->grid.setPosition(sf::Vector2f(10.0f, 10.0f));
	this->grid.setOutlineColor(sf::Color::Green);
	this->grid.setFillColor(sf::Color::Transparent);
	this->grid.setOutlineThickness(1.0f);


	// testing tile
	this->tile.setPosition(sf::Vector2f(10.f, 10.f));
	this->tile.setOutlineColor(sf::Color::Green);
	this->tile.setFillColor(sf::Color::Transparent);
	this->tile.setOutlineThickness(1.0f);
	
}

// Updates window frame by frame
void game::update()
{

	// poll event
	this->updatePollEvents();
	

}

void game::updatePollEvents()
{
	// Polling event
	while (const std::optional event = this->window->pollEvent())
	{
		if (event->is<sf::Event::Closed>())
			this->window->close();

		if (event->is<sf::Event::KeyPressed>() && sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Escape))
			this->window->close();

		/*if (event->is<sf::Event::Resized>())
			this->videoMode.getDesktopMode;*/

	}
}


void game::render()
{
	this->window->clear();  // Clear old frame

	// Draw your game objects
	this->window->draw(this->grid);
	this->window->draw(this->tile);

	this->window->display(); // Tell app window is done drawing

}

// Accessors
const bool game:: running() const
{
	return this->window->isOpen();
}



game::game()
{
	// init Window
	this->initVariables();
	this->initWindow();
	this->initGridMap();
	

	

	

}

game::~game()
{
	delete this->window;
}

