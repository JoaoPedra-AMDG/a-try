// Exercising the Screen class
#include "screen.h"
#include <iostream>

using namespace std;

int main()
{
	auto screen = Screen{10,15,' '};
	screen.display();
	cout << endl;
	screen.box(1,1,8,5);
	screen.box(8,8,4,3);
	screen.display();


/*
	auto test = Screen{3,2,'#'};
	test.display();
	test.set(' ');
	test.back();
	test.set(' ');

	//test.back();
	test.set(' ');
	test.back();
	test.set(' ');

	//test.back();
	test.set(' ');
	test.back();
	test.set(' ');

	//test.back();
	test.set(' ');
	test.back();
	test.set(' ');

	test.back();
	test.set(' ');
	
	test.back();
	test.set(' ');

	test.back();
	test.set(' ');

	test.back();
	test.set(' ');

	test.back();
	test.set(' ');

	test.back();
	test.set(' ');

	test.back();
	test.set(' ');

	test.back();
	test.set(' ');

	test.back();
	test.set(' ');

	test.back();
	test.set(' ');

	test.back();
	test.set(' ');

	test.back();
	test.set(' ');

	test.back();
	test.set(' ');

	test.back();
	test.set(' ');

	test.back();
	test.set(' ');

	test.back();
	test.set(' ');

	test.back();
	test.set(' ');

	test.back();
	test.set(' ');

	test.back();
	test.set(' ');

	test.back();
	test.set(' ');

	test.back();
	test.set(' ');

	test.back();
	test.set(' ');

	test.display();


	auto Joao = Screen{6,6};
	Joao.clear(' ');
	Joao.set("******");
	Joao.move(1,3);
	for (int i =0; i <5; i++){
		Joao.move(Direction::back);
		Joao.set('*');
	}
	Joao.move(6,1);
	Joao.set("**");
	Joao.display();
*/

	return 0;
}

