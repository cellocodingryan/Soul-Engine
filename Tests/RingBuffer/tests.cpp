#include "../../Source Files/Core/Structures/RingBuffer.h
#include <cassert>
#include <iostream>
#include <cstdio>

int main()
{
	RingBuffer<int,103> test;
	RingBuffer<int,3> test1;
	test.Push(54);
	test.Push(23);
	test.Push(75);
	
	test1.Push(54);
	test1.Push(23);
	test1.Push(75);
	
	assert(test == test1);
	assert(test[0] == 75);
	assert(test[1] == 23);
	assert(test.Front() == 75);
	assert(test.Back() == 54);
	return 0;
	
}