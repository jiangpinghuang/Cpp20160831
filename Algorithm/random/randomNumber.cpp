/*
 * randomNumber.cpp
 *
 *  Created on: Dec 12, 2015
 *      Author: hjp
 */
#include <iostream>
#include <time.h>
using namespace std;

int main(){
	// srand 相当于随机数的初始化函数，为随机数播下种子，
	// srand((unsigned)time(0));    // time返回的是time_t类型
	srand(1);
	// time_t t= time(0);
	for(int i = 0; i < 10; i++)
	{

		cout << rand() << endl;
	}

	return 0;
}
