#include "game_of_life_situation_analyzer.h"

//-----------------------------------------------------------------------------
game_of_life_situation_analyzer::game_of_life_situation_analyzer
(
	void
):
FSM_situation_analyzer<game_of_life_situation,game_of_life_transition>()
{
}

//-----------------------------------------------------------------------------
game_of_life_situation_analyzer::~game_of_life_situation_analyzer(void)
{
}

//-----------------------------------------------------------------------------
string game_of_life_situation_analyzer::toString(void)
{
	return "game_of_life_situation_analyzer";
}

//-----------------------------------------------------------------------------
vector<game_of_life_transition*> game_of_life_situation_analyzer::getTransitions
(
	game_of_life_situation* p_situation
)
{
	vector<game_of_life_transition*> l_transitions;
	l_transitions.push_back(new game_of_life_transition("next_generation"));
	return l_transitions;
}
