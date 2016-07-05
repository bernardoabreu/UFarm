#include <cstdlib>
#include <iostream>
#include <unistd.h>
#include <RF24/RF24.h>
#include "rfsignal.h"

using namespace std;


RF24 radio(22,0);


/********************************/

// Radio pipe addresses for the 2 nodes to communicate.
const uint8_t pipes[][6] = {"1Node","2Node"};


int main(int argc, char** argv){

	unsigned long code;
	
	cout << "starting Test\n";

	setup(pipes[0],pipes[1]);


	do{	
		cin >> code;

		sendcode(code);
		sleep(1);

	} while(code != 0)

  return 0;
}

