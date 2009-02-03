
#include "game_of_life_situation.h"

#include <iostream>
#include <sstream>
using namespace std;

//-----------------------------------------------------------------------------
bool game_of_life_situation::isFinal(void)const
{
  return m_alived.size() == 0;
}

//-----------------------------------------------------------------------------
string game_of_life_situation::getStringId(void)const
{
  cout << "Not implemented" << endl ;
  exit(-1);
  return "";
}

//-----------------------------------------------------------------------------
string game_of_life_situation::toString(void)const
{
	stringstream l_result ;
	l_result << "Situation :" << endl;
	set<pair<unsigned int,unsigned int> >::iterator l_iter = m_alived.begin();
	set<pair<unsigned int,unsigned int> >::iterator l_iter_end = m_alived.end();
	while(l_iter != l_iter_end)
    {
		l_result  << "(" << l_iter->first << " , " << l_iter->second << ")" << endl ;
		l_iter++;
    }
	l_result << "Context : " << endl ;
	l_result << getContext()->toString();
	return l_result.str();
}

//-----------------------------------------------------------------------------
game_of_life_situation::~game_of_life_situation(void)
{
}

//-----------------------------------------------------------------------------
void game_of_life_situation::setAlived(unsigned int p_x,unsigned int p_y)
{
	stayAlived(p_x,p_y);
	updateContext(p_x,p_y);
}

//-----------------------------------------------------------------------------
void game_of_life_situation::stayAlived(unsigned int p_x,unsigned int p_y)
{
	m_alived.insert(pair<unsigned int,unsigned int>(p_x,p_y));
}

//-----------------------------------------------------------------------------
void game_of_life_situation::updateContext(unsigned int p_x,unsigned int p_y)
{
	for(int i=-1; i<=1 ; i++)
	{
		for(int j=-1; j<=1 ; j++)
		{
			if( i!=0 || j != 0)
			{
				getContext()->setModified(p_x + i,p_y +j);
			}
		}
    }
}

//-----------------------------------------------------------------------------
unsigned char game_of_life_situation::countNeighbour(unsigned int p_x,unsigned int p_y)
{
	unsigned char l_result = 0;
	for(int i=-1; i<=1 ; i++)
    {
		for(int j=-1; j<=1 ; j++)
		{
			if( i!=0 || j != 0)
			{
				l_result += isAlived(p_x + i,p_y +j);
			}
		}
	}
	return l_result;
}

//-----------------------------------------------------------------------------
bool game_of_life_situation::isAlived(unsigned int p_x,unsigned int p_y)
{
	return m_alived.count(pair<unsigned int,unsigned int>(p_x,p_y));
}

//-----------------------------------------------------------------------------
game_of_life_situation::game_of_life_situation(void)
{
	this->setContext(new game_of_life_context());
}

//-----------------------------------------------------------------------------
set<pair<unsigned int,unsigned int> >& game_of_life_situation::getAlivedList(void)
{
	return m_alived;
}

//-----------------------------------------------------------------------------
bool game_of_life_situation::less(const FSM_situation_if *p_situation)const
{
  return this->less(dynamic_cast<const game_of_life_situation*>(p_situation)); 
}

//-----------------------------------------------------------------------------
bool game_of_life_situation::less(const game_of_life_situation *p_situation)const
{
  return m_alived < p_situation->m_alived; 
}
