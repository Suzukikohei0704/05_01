#include <stdio.h>
#include <list>
#include <iostream>

using namespace std;

int main()
{

	list<const char*> list_
	{
		"","_c","Ht΄","δk¬",
		"ιςJ","ϊι’","c[","ξ",
		"","εΛ","rά","Ϊ",
		"cnκ","VεvΫ","Vh","γXΨ",
		"΄h","aJ","bδυ","Ϊ",
		"ά½c","εθ","iμ","c¬",
		"lΌ¬","V΄","Ly¬"
	};

	printf("Ίa6NΜHό}\n");

	for (list<const char*>::iterator it_f = list_.begin(); it_f != list_.end(); ++it_f)
	{
		cout << *it_f << endl;
	}

	printf("\n");

	printf("Ίa47NΜHό}\n");

	for (list<const char*>::iterator it_f = list_.begin(); it_f != list_.end(); ++it_f)
	{
		if (*it_f == "c[")
		{
			it_f = list_.insert(it_f, "Όϊι’");

			++it_f;
		}
	}

	for (list<const char*>::iterator it_f = list_.begin(); it_f != list_.end(); ++it_f)
	{
		cout << *it_f << endl;
	}

	printf("\n");

	printf("ίa5NΜHό}\n");

	for (list<const char*>::iterator it_f = list_.begin(); it_f != list_.end(); ++it_f)
	{
		if (*it_f == "c¬")
		{
			it_f = list_.insert(it_f, "ΦQ[gEFC");

			++it_f;
		}
	}

	for (list<const char*>::iterator it_f = list_.begin(); it_f != list_.end(); ++it_f)
	{
		cout << *it_f << endl;
	}

	return 0;
}