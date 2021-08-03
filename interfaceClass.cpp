#include<iostream>
#include<string>
using namespace std;

class IErrorLog//interface class: ���ο� ����ִ� �Լ����� ��� pure virtual function�� ��쿡. �ڱⰡ �� �� ���� ���� 
{//~�� �ؾ��Ѵٸ� �ִ� ����. �ܺο��� ����� �� �� �߰�� ������ ���༭ �������̽� Ŭ����.
public:
	virtual bool reportError(const char * errorMessage) = 0;
	virtual ~IErrorLog(){}//�Ҹ���.
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