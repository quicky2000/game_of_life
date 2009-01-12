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
