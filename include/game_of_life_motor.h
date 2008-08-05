
#ifndef _GAME_OF_LIFE_MOTOR_H_
#define _GAME_OF_LIFE_MOTOR_H_

#include "FSM_motor.h"
#include "game_of_life_situation.h"
#include "game_of_life_transition.h"

class game_of_life_motor:public FSM_motor<game_of_life_situation,game_of_life_transition>
{
	public:
		// Constructors and destructors
		game_of_life_motor(void);
		~game_of_life_motor(void);

		// Methods inherited from FSM_motor
		string toString(void);
		game_of_life_situation* run(game_of_life_situation* p_situation, game_of_life_transition *p_transition);
};

#endif
