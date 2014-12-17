/*
    This file is part of game of life
    Copyright (C) 2012  Julien Thevenon ( julien_thevenon at yahoo.fr )

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>
*/
#include "game_of_life_motor.h"

#include <string>
using namespace std;

//-----------------------------------------------------------------------------
string game_of_life_motor::toString(void)
{
  string l_result = "game_of_life_motor";
  return l_result;
}

//-----------------------------------------------------------------------------
game_of_life_situation* game_of_life_motor::run(game_of_life_situation* p_situation,game_of_life_transition *p_transition)
{
	game_of_life_situation *l_result = new game_of_life_situation();
	set<pair<unsigned int , unsigned int> > l_modifed_list = p_situation->getContext()->getModified();
	set<pair<unsigned int , unsigned int> >::iterator l_iter = l_modifed_list.begin();
	set<pair<unsigned int , unsigned int> >::iterator l_iter_end = l_modifed_list.end();
	while(l_iter != l_iter_end)
    {
		unsigned char l_nb_neighbour = p_situation->countNeighbour(l_iter->first,l_iter->second);
		bool l_alive = p_situation->isAlived(l_iter->first,l_iter->second);
		if(l_alive && ( l_nb_neighbour < 2 || l_nb_neighbour > 3))
		{
			l_result->updateContext(l_iter->first,l_iter->second);
		}
		else if(!l_alive && ( l_nb_neighbour > 2 && l_nb_neighbour < 4))
		{
			l_result->setAlived(l_iter->first,l_iter->second);
		}
		else if(l_alive)
		{
			l_result->stayAlived(l_iter->first,l_iter->second);
		}
		l_iter++;
    }
  return l_result;
}

//-----------------------------------------------------------------------------
game_of_life_motor::~game_of_life_motor(void)
{
}

//-----------------------------------------------------------------------------
game_of_life_motor::game_of_life_motor(void)
{
}

