#include<iostream>



//특정 클래스만 사용하는 데이터타입일 경우에는 클래스 안에 임시로 사용할 수 있게 쓰는 게 맞습니다.
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