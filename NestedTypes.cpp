#include<iostream>



//Ư�� Ŭ������ ����ϴ� ������Ÿ���� ��쿡�� Ŭ���� �ȿ� �ӽ÷� ����� �� �ְ� ���� �� �½��ϴ�.
class Fruit
{
public:
	enum class FruitType
	{
		APPLE, BANANA, CHERRY,
	};

	class InnerClass
	{

	};

	struct InnerStruct
	{

	};


private:
	FruitType m_type;

public:

	
	Fruit(FruitType type): m_type(type)
	{}

	FruitType getType() { return m_type; }
};

int main()
{
	Fruit apple(Fruit::FruitType::APPLE);

	if (apple.getType == Fruit::FruitType::APPLE)
	{
		std::cout << "Apple" << std::endl;
	}

	return 0;
}