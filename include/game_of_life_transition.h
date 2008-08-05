#ifndef _GAME_OF_LIFE_TRANSITION_
#define _GAME_OF_LIFE_TRANSITION_

#include "FSM_transition_if.h"

class game_of_life_transition: public FSM_transition_if
{
	public:
		// Constructors && Destructors
		game_of_life_transition(string p_name);
		~game_of_life_transition(void);

		// Methods inherited from interface
		string toString(void)const;

	private:
		string m_name;
};
#endif /* _GAME_OF_LIFE_TRANSITION_ */
