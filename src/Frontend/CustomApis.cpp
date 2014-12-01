/*

Decoda
Copyright (C) 2007-2013 Unknown Worlds Entertainment, Inc. 

This file is part of Decoda.

Decoda is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Decoda is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Decoda.  If not, see <http://www.gnu.org/licenses/>.

*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
#include "CustomApis.h"


#include <algorithm>

void CustomApis::buildSymbols(){
	/*Symbol sym1 = Symbol("","gvsrao_func1",0);
	Symbol sym2 = Symbol("","gvsrao_func2",0);
	core_symbols.push_back(sym1);
	core_symbols.push_back(sym2);*/
	string line;
	ifstream myfile("apis.txt");
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			Symbol sym1 = Symbol("", line, 0);
			core_symbols.push_back(sym1);
		}
		myfile.close();
	}
	return;
}
