#include "game_of_life_transition.h"

//-----------------------------------------------------------------------------
game_of_life_transition::game_of_life_transition
(
	string p_name
):
	m_name(p_name)
{
}

//-----------------------------------------------------------------------------
game_of_life_transition::~game_of_life_transition(void)
{
}

//-----------------------------------------------------------------------------
string game_of_life_transition::toString(void)const
{
	return "name = "+m_name;
}
