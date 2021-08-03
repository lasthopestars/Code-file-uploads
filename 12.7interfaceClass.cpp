#include<iostream>
#include<string>
using namespace std;

class IErrorLog//interface class: 내부에 들어있는 함수들이 모두 pure virtual function일 경우에. 자기가 뭘 할 지는 없고 
{//~를 해야한다만 있는 구조. 외부에서 사용을 할 때 중계기 역할을 해줘서 인터페이스 클래스.
public:
	virtual bool reportError(const char * errorMessage) = 0;
	virtual ~IErrorLog(){}//소멸자.
};

class FileErrorLog : public IErrorLog
{
public:
	bool reportError(const char * errorMessage) override
	{
		cout << "Writing error to a file" << endl;
		return true;
	}
};

class ConsoleErrorLog : public IErrorLog
{
public:
	bool reportError(const char * errorMessage) override
	{
		cout << "Printing error to a file" << endl;
		return true;
	}
};

void doSomething(IErrorLog & log)
{
	log.reportError("Runtime error!!");
}

int main()
{
	FileErrorLog file_log;
	ConsoleErrorLog console_log;
	
	doSomething(file_log);
	doSomething(console_log);

	return 0;
}