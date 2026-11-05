#include "test.h"
void test(int* array, int size, int* expected, string name) {
	reverse(array, size);
	bool flag = true;
	int n = size / 2;
	for (int i = 0; i < size; i++) {
		if(array[i] != expected[i]) {
			flag = false;
			break;
		}

	}

	string msg = name + "-->";
	msg += flag ? "Pass" : "Fail";
	cout << msg << endl;
}

void test01() {
	int size = 5;
	int array[]{ 1,2,3,4,5 };
	int expected[]{ 5,4,3,2,1 };
	test(array, size, expected, "test01");
}

void test02() {
	int size = 6;
	int array[]{ 1,2,3,4,5,6 };
	int expected[]{ 6,5,4,3,2,1 };
	test(array, size, expected, "test02");
}
void test03() {
	int size = 3;
	int array[]{ 1,1,1 };
	int expected[]{ 1,1,1 };
	test(array, size, expected, "test03");
}
void test04() {
	int size = 1;
	int array[]{ 7 };
	int expected[]{ 7 };
	test(array, size, expected, "test04");
}


void run_all_tests() {
	test01();
	test02();
	test03();
	test04();
}