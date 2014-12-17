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
