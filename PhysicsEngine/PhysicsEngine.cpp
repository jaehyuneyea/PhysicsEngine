// PhysicsEngine.cpp : Defines the entry point for the application.
//

#include <SDL.h>
#include "PhysicsEngine.h"

using namespace std;
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

int main(int argc, char* argv[])
{
	// initialize SDL subsystems here
	SDL_Init(SDL_INIT_VIDEO); 

	SDL_Window* window = SDL_CreateWindow("Physics Engine", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, 0);
	SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);

	bool running = 1;
	while (running) {
		SDL_Event event;
		SDL_PollEvent(&event);
		switch (event.type)
		{
			case SDL_QUIT:
			{
				running = false;
				break;
			}
		}
	}

	SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
	SDL_RenderClear(renderer);

	// destroy reference on exit
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);

	cout << "Hello CMake." << endl;

	SDL_Quit();
	return 0;
}
