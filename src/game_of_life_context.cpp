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
