//Hannah Naetzker
//CS3560 Final Exam

#include "counter.h"

using namespace std;

int main()
{
	char* file;
	Counter theCounter;
	cin >> file;
	if(file != ""){
		theCounter.countLine(file);
		theCounter.countChar(file);
	}else{
		theCounter.countLine();
		theCounter.countChar();
	}
}
