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
#ifndef _GAME_OF_LIFE_SITUATION_ANALYZER_
#define _GAME_OF_LIFE_SITUATION_ANALYZER_

#include "FSM_situation_analyzer.h"
#include "game_of_life_situation.h"
#include "game_of_life_transition.h"

class game_of_life_situation_analyzer: public FSM_situation_analyzer<game_of_life_situation,game_of_life_transition>
{
 public:
  // Constructors and Destructors
  game_of_life_situation_analyzer(void);
  ~game_of_life_situation_analyzer(void);
  
  // Methods inherited from FSM_situation_analyzer
  string toString(void);
  vector<game_of_life_transition*> getTransitions(game_of_life_situation* p_situation);
};
#endif /* _GAME_OF_LIFE_SITUATION_ANALYZER_ */
