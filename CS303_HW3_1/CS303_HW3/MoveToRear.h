#ifndef MOVETOREAR_H_
#define MOVETOREAR_H_
#include <queue>

using namespace std;




/* It remove front from queue and adding it to queue*/
std::queue<int> move_to_rear(std::queue<int> test_que) {
	/*Getting front element from queue*/
	int num;
	num = test_que.front();
	/*removing element from queue*/
	test_que.pop();
	/*pushing num into queue*/
	test_que.push(num);
	return test_que;
}
;

#endif