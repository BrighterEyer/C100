// 【程序85】
// 题目：判断一个素数能被几个9整除
// 1.程序分析：
// 2.程序源代码：
main() {
	long int m9 = 9, sum = 9;
	int zi, n1 = 1, c9 = 1;
	scanf("%d", &zi);
	while (n1 != 0) {
		if (!(sum % zi))
			n1 = 0;
		else {
			m9 = m9 * 10;
			sum = sum + m9;
			c9++;
		}
	}
	printf("%ld,can be divided by %d \"9\"", sum, c9);
}