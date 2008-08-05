#include "game_of_life_context.h"

#include <sstream>
using namespace std;

//-----------------------------------------------------------------------------
game_of_life_context::game_of_life_context(void)
{
}

//-----------------------------------------------------------------------------
string game_of_life_context::toString(void)const
{
	stringstream l_result;
	set<pair<unsigned int,unsigned int> >::iterator l_iter = m_modified.begin();
	set<pair<unsigned int,unsigned int> >::iterator l_iter_end = m_modified.end();
	while(l_iter != l_iter_end)
    {
		l_result  << "(" << l_iter->first << " , " << l_iter->second << ")" << endl ;
		l_iter++;
    }
	return l_result.str();
}

//-----------------------------------------------------------------------------
void game_of_life_context::setModified(unsigned int p_x,unsigned int p_y)
{
	m_modified.insert(pair<unsigned int, unsigned int>(p_x,p_y));
}

//-----------------------------------------------------------------------------
set<pair<unsigned int, unsigned int> > game_of_life_context::getModified(void)
{
	return m_modified;
}
