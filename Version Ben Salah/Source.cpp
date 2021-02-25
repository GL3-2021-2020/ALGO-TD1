#include <bits/stdc++.h>

using namespace std;


void insert(strct el, int[] hashTable, strct2[] debordTable, int lastEl)
{
	int index = el.cle % 9;
	debordTable[lastEl].strct = el;
	debordTable[lastEl].next = -1;

	if (hashTable[index] == null)
	{
		hashTable[index] = lastEl;
	}
	else
	{
		int i = hashTable[index];
		while (debordTable[i].next != -1)
		{
			i = debordTable[i].next;
		}
		debordTable[i].next = lastEl;
	}
	lastEl++;
}

strct search((int cle, int[] hashTable, strct2[] debordTable) {
	int index = cle % 9;

	int i = hashTable[index];

	while (debordTable[i] next != -1)
	{
		if (debordTable[i].el.cle == cle)
			return debordTable[i].el;
	}
	return null;
}