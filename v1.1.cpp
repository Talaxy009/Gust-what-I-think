//猜数游戏

#include "stdafx.h"
#include<iostream>
#include<ctime>
using namespace std;

int main()
{
	int x, y, z;
	char ch=89;
	srand(time(0));
	while (ch==89||ch==121)
	{
		z = rand() % 200 + 1;
		y = 0;
		cout << "====================" << endl << "猜猜我想了啥？(=v=)" << endl;
		do
		{
			y++;
			cin >> x;
			if (x < z)
				cout << "猜小了喔~" << endl << "再猜！加油！" << endl;
			else if (x > z)
				cout << "猜大了喔~" << endl << "再猜！加油！" << endl;
			else
				cout << "猜对啦！" << endl << "你猜了" << y << "次" << endl;
			if (y > 10)break;
		} while (x!=z);
		if (y > 10)
			cout << "超过10次啦，我换个数吧！还玩吗？(Y/N)" << endl;
		else
			cout << "太强了!还玩吗？(Y/N)" << endl;
		cin >> ch;
	}
    return 0;
}

