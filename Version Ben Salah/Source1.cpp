#include <bits/stdc++.h>

using namespace std;

int search(hashstruct[] hashTable, int n, int key)
{
	int index = hashFunction(key);
	for (int i = index; i < n + index; ++i)
	{
		if (hashTable[i % n].key == key)
			return i % n;
	}
	return -1;
}

void insert(hashstruct[] hashTable, int n, hashstruct el)
{
	int index = hashFunction(el.key);

	for (int i = index; i < n + index; ++i)
	{
		if (hashTable[i % n] == null)
		{
			hashTable[i % n] = el;
			return;
		}
	}
}