#include "stdafx.h"
#include "Combination.h"
#include "Boat.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	boat boat(8, 5, 1500, 50, 800, 100, 200, 10, 100);
	boat.start();
	boat.print();

	system("pause");
	return 0;
}