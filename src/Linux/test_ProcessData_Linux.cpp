#include <iostream>
#include <unistd.h>
#include "ProcessData.h"

using std::cout;
using std::endl;

int main(int argc, char **argv) {

	if(argc != 2) {
		cout << "Run: ./exec PID" << endl;
		return -1;
	}		

	int pid = atoi(argv[1]);

	ProcessData* pd = new ProcessData();

	const Process *p;


	p = pd->getStatData(pid);

	cout << p->name << endl;
	cout << p->numThreads << endl;
	cout << p->rss/1024/1024. << endl;

	return 0;
}
