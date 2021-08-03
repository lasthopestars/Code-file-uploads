#include<iostream>
using namespace std;

int add(int x, int y)
{
	return x + y;
}

int subtract(int x, int y)
{
	return x - y;
}

int multiply(int x, int y)
{
	return x * y;
}

int main()
{
	int x, y;
	cin >> x >> y;
	/*
	int op;
	cout << "0:add, 1:subtract, 2:multiply" << endl;
	cin >> op;

	int result;

	switch (op)
	{
	case 0:result = add(x, y); break;
	case 1: result = subtract(x, y); break;
	case 2: result = multiply(x, y); break;
	}*/
	//->static binding이 빠르기는 빠르다.

	int op;
	cout << "0:add, 1:subtract, 2:multiply" << endl;
	cin >> op;

	//Dynamic binding.
	//주소를 한번 타야 함. 다형성 virtual function처럼 약간 느릴 수 있다.
	//동적바인딩 쓰면 훨씬 유연한 프로그래밍이 된다.
	int(*func_ptr)(int, int) = nullptr;
	//function에 대한 pointer

	switch (op)
	{
	case 0:func_ptr = add; break;//func_ptr이 가리키는 함수가 add가 될 지.
	case 1:func_ptr = subtract; break;
	case 2:func_ptr = multiply; break;

	}

	cout << func_ptr(x, y) << endl;
}