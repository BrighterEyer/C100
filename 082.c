// 【程序82】
// 题目：八进制转换为十进制
// 1.程序分析：
// 2.程序源代码：
main() {
	char *p, s[6]; int n;
	p = s;
	gets(p);
	n = 0;
	while (*(p) != '\0') {
		n = n * 8 + *p - '0';
		p++;
	}
	printf("%d", n);
}
