#include "game_of_life.h"
#include "game_of_life_motor.h"
#include "game_of_life_situation_analyzer.h"

#include <iostream>
using namespace std;

//-----------------------------------------------------------------------------
game_of_life::game_of_life(void):FSM<game_of_life_situation,game_of_life_transition>("game_of_life",new game_of_life_motor(), new game_of_life_situation_analyzer())
{
	setSituation(new game_of_life_situation());
	getSituation()->setAlived(2,2);
	getSituation()->setAlived(3,2);
	getSituation()->setAlived(4,2);
}

//-----------------------------------------------------------------------------
game_of_life::~game_of_life(void)
{
}

//-----------------------------------------------------------------------------
void game_of_life::configure(void)
{
}

//-----------------------------------------------------------------------------
string game_of_life::toString(void)const
{
	string l_result = "Not implemented";
	return l_result;
}

//-----------------------------------------------------------------------------
FSM_if* createGameOfLife()
{
	return new game_of_life();
}

//-----------------------------------------------------------------------------
extern "C"
{
	void registerFsm(map<string,FSM_creator> *p_factory)
	{
		registerFsm("game_of_life",createGameOfLife,p_factory);
	}
}
