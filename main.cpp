#include <iostream>
#include <unistd.h>
#include "ProcessData.h"

using std::cout;
using std::endl;

int main(void) {

    ProcessData* pd = new ProcessData();

    const Process *p;

    int pid = getpid();


    p = pd->getStatData(pid);


    cout << p->name << endl;
    cout << p->numThreads << endl;
    cout << p->rss/1024/1024. << endl;

    return 0;
}
