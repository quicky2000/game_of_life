
#ifndef _GAME_OF_LIFE_BASE_H_
#define _GAME_OF_LIFE_BASE_H_

#include "FSM.h"
#include "game_of_life_situation.h"
#include "game_of_life_transition.h"
#include "game_of_life_context.h"

class game_of_life:public FSM<game_of_life_situation,game_of_life_transition>
{
	public:
	// Constructors && Destructors
	game_of_life(void);
	~game_of_life(void);

	// Methods inherited from FSM
	void configure(void);
	string toString(void)const;
};
#endif
