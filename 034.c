// 【程序34】
// 题目：练习函数调用
// 1. 程序分析：
// 2.程序源代码：
#include <stdio.h>
void hello_world(void) {
	printf("Hello, world!\n");
}
void three_hellos(void) {
	int counter;
	for (counter = 1; counter <= 3; counter++)
		hello_world();/*调用此函数*/
}
void main(void) {
	three_hellos();/*调用此函数*/
}