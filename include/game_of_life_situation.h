
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
