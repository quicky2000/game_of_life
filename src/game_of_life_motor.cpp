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

