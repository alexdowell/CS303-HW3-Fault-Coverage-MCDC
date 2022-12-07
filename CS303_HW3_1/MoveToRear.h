#ifndef MOVETOREAR_H_
#define MOVETOREAR_H_
#include <queue>

using namespace std;




//Method that removes front from queue and adding it to queue
std::queue<int> move_to_rear(std::queue<int> test_que) {
	int num;

	//Getting front element from queue
	num = test_que.front();

	//Removing element from queue
	test_que.pop();

	//Pushing num into queue
	test_que.push(num);
	return test_que;
}
;

#endif