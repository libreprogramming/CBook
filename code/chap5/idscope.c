/*
 * Copyright (C) 2010, shiv Shankar Dayal
 * This file is part of Learn Correct programming.

 * This program is free software. All conditions of GNU GPLv3 or later are
 * applicable.

 * You should have received a copy of the GNU GPLv3 along with this document. If 
 * not, see <http://www.gnu.org/licenses/>.
 * Disclaimer: Any damage or loss of data because of programs given in this
 * will bear no responsibility to author under any circumstances.
 
 * Author: Shiv Shankar Dayal
 * Date: July 5th, 2010
 * Description: Scope of identifiers.
 */

#include <stdio.h>

int main()
{
	int i=5;
	if(i==5)
	{
		int i=7;
		printf("i=%d\n",i);
	}
	printf("i=%d\n",i);

	return 0;
}
