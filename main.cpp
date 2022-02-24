#include <iostream>
#include "blowfish.h"
using namespace std;

int main()
{
	const char* key = "hello world";
	BlowFish bf(key);
	auto t = bf.encrypt("abcdefgh");
	auto s = bf.decrypt(t);

	return 0;
}
