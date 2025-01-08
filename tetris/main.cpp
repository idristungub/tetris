#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include "game.h"

int main()
{
    // init game engine
    game game;


    // Each frame Game loop
    while (game.running())
    {
   


        // Update

        game.update();



        // Render

        game.render();


        
    }
}