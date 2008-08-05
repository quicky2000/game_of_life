
#ifndef _GAME_OF_LIFE_CONTEXT_H_
#define _GAME_OF_LIFE_CONTEXT_H_

#include "FSM_context.h"
#include "game_of_life_transition.h"

#include <set>
using namespace std;

class game_of_life_context:public FSM_context<game_of_life_transition>
{
	public:
		game_of_life_context(void);

		// Methods inherited from interface
		string toString(void)const;

		// Specific methods
		void setModified(unsigned int p_x,unsigned int p_y);
		set<pair<unsigned int,unsigned int> > getModified(void);

	private:
		set<pair<unsigned int,unsigned int> > m_modified;
};

#endif
