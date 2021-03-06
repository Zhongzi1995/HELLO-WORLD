// HELLO WORLD.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>

//声明使用的标准库名称
using std::cin;
using std::endl;
using std::cout;
using std::string;


int main()
{
	//请求用户输入姓名
	cout << "Please enter your first name:";

	//读用户输入的姓名
	string name;
	cin >> name;
	
	//构造我们将要输出的信息
	const string greeting = "HELLO," + name + "!";

	//围住问候语空白的个数
	const int pad = 1;

	//待输出的行数和列数
	const int rows = pad * 2 + 3;
	const string::size_type cols = greeting.size() + pad * 2 + 2;

	//输出一个空白行，把输出如输入隔开
	cout << endl;

	//输出rows行
	//不变式：到目前为止，我们已经输出了r行
	for (int r = 0; r!= rows; ++r)
	{
		string::size_type c = 0;

		//不变式：到目前为止，我们已经输出了c个字符
		while (c != cols)
		{
			//应该输出问候语了么？
			if (r == pad  + 1 && c == pad + 1 )
			{
				cout << greeting;
				c += greeting.size();
			}
			else
			{
				//我们位于边界上么？
				if ( r == 0 || r == rows - 1 || c == 0 || c == cols - 1)
					cout << "*";
				else
					cout << " ";
					++ c;
			}
		}
		cout << endl;
	}
return 0;
    
}

