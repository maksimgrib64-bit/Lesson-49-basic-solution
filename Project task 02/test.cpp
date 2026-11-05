#include "test.h"
void test(int number,bool expected, string name) {
	bool actual = is_perfect_number(number);
	string msg = name + "-->";
	msg += actual==expected ? "Pass" : "Fail";
	cout << msg << endl;
}

void run_all_tests() {
	test(6, true, "test01");
	test(28,true, "test02");
	test(496, true, "test03");
	test(8'128, true, "test04");
	test(33'550'336, true, "test05");
	test(-1, false, "test06");
	test(20, false, "test07");
	test(0, false, "test08");
	test(21, false, "test09");

}