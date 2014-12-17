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

#ifndef _GAME_OF_LIFE_SITUATION_H_
#define _GAME_OF_LIFE_SITUATION_H_

#include "FSM_situation.h"
#include "game_of_life_context.h"

#include <set>
using namespace std;

class game_of_life_situation:public FSM_situation<game_of_life_context>
{
	public:
		// Constructors and destructors
		game_of_life_situation(void);
		~game_of_life_situation(void);

		// Methods inherited from FSM_situation
		string toString(void)const;
		string getStringId(void)const;
		bool isFinal(void)const;
		bool less(const FSM_situation_if *p_object2)const;

		// Dedicated methods
		bool less(const game_of_life_situation *p_situation)const;
		void setAlived(unsigned int p_x,unsigned int p_y);
		void stayAlived(unsigned int p_x,unsigned int p_y);
		bool isAlived(unsigned int p_x,unsigned int p_y);
		void updateContext(unsigned int p_x,unsigned int p_y);
		unsigned char countNeighbour(unsigned int p_x,unsigned int p_y);
		set<pair<unsigned int,unsigned int> >& getAlivedList(void);

	private:
		set<pair<unsigned int,unsigned int> > m_alived;
};

#endif
