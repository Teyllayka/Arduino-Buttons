#include <windows.h>
#include <iostream>
#include "SerialClass.h"
#include <typeinfo>
using namespace std;

int main() {
	Serial* SP = new Serial(L"\\\\.\\COM3");
	if (SP->IsConnected())
	{
		cout << "We're connected" << endl;
		cout << "________________" << endl;
	}

	char incomingData[256] = "";
	int readResult = 0;

	while (SP->IsConnected())
	{
		readResult = SP->ReadData(incomingData, 10);
		incomingData[readResult] = 0;

		if (strlen(incomingData) > 0) {
			

			if (atoi(incomingData) == 1) {
				ShellExecute(0, 0, L"http://www.rvt.lv", 0, 0, SW_SHOW);
			}
			if (atoi(incomingData) == 2) {
				system("code");
			}


		}
	}
}



    
