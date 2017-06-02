#include <iostream>

#include "BaseFileLoader.h"

using namespace std;

int main()
{
	BaseFileLoader loader;
	FileInfo fileInfo = loader.Load("mario.nes");
	getchar();
	return 0;
}
