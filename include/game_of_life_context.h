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
