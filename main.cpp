#include <ctime>
#include <stdio.h>
#include <iostream>
#include <vector>

#include "sdl-2.0-textures/App.h"

/****************************************
 *                                      *
 *          Special thanks to:          *
 *                                      *
 * 	SDLTutorials.com                    *
 *  Tim Jones                           *
 *                                      *
 ****************************************/

int main(int argc, char *argv[])
{
  srandom(time(0));

  return App::GetInstance()->Execute(argc, argv);
}

