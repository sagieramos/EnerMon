#include "../imuwahen.h"
#include <iostream>

using namespace std;

enermon::iotData iot;

int main()
{
	iot.set_key("key");
	iot.set_macaddress("mac address");
	iot.add_value(44.65); iot.add_value(4.24);
	iot.add_swtch(enermon::toggle::HIDDEN);
	iot.add_swtch(enermon::toggle::INACTIVE);
	iot.add_swtch(enermon::toggle::OFF);
	iot.add_swtch(enermon::toggle::ON);

	cout << iot.DebugString() << endl;

	return 0;
}
