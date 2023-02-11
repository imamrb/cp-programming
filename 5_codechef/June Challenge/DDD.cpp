// CHARACTER SET EXAMPLE
// CPP program to illustrate
// Implementation of erase() function
#include <iostream>
#include <set>
#include<vector>

using namespace std;

int main()
{
	// set declaration
	vector<char> myset{ 'A', 'C', 'E', 'G' };
	set<char>::iterator it1, it2;

	// defining it1 pointing to the first
	// element and it2 to the last element
//	it1 = myset.begin();
//	it2 = advance(it1, 2);

	// decrementing the it2 two times


	// erasing elements within the
	// range of it1 and it2
	myset.erase(myset.begin(), myset.begin()+3);

	// Printing the set
	for (auto it = myset.begin();
		it != myset.end(); ++it)
		cout << ' ' << *it;
	return 0;
}
