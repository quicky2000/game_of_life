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
