#include<iostream>
using namespace std;

class USBDevice
{
private:
	long m_id;

public:
	USBDevice(long id): m_id(id){}
	long getID() { return m_id; }
	void plugAndPlay(){}
};

class NetWorkDevice
{
private:
	long m_id;

public:
	NetWorkDevice(long id): m_id(id){}

	long getID() { return m_id; }

	void networking(){}
};

class USBNetworkDevice :public USBDevice, public NetWorkDevice
{
public:
	USBNetworkDevice(long usb_id, long net_id)
		: USBDevice(usb_id), NetWorkDevice(net_id)//USBDevice 따로, NetWorkDevice따로
	{}



};


int main()
{
	USBNetworkDevice my_device(3.14, 6.022);
	my_device.networking();
	my_device.plugAndPlay();
	

	//my_device.getID();
	//문제는 중복되는 함수에서 생김.

	my_device.USBDevice::getID();
	my_device.NetWorkDevice::getID();

}