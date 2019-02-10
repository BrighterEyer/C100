// 【程序5】
// 题目：输入三个整数x,y,z，请把这三个数由小到大输出。
// 1.程序分析：我们想办法把最小的数放到x上，先将x与y进行比较，如果x>y则将x与y的值进行交换，然后再用x与z进行比较，如果x>z则将x与z的值进行交换，这样能使x最小。最后把y、z中最大的一个数放在z位置上。
// 2.程序源代码：
main()
{
	int x, y, z, t;
	scanf("%d%d%d", &x, &y, &z); //输入的每个数用空格相隔
	if (x > y)
	{t = x; x = y; y = t;} /*交换x,y的值*/
	if (x > z)
	{t = z; z = x; x = t;} /*交换x,z的值*/
	if (y > z)
	{t = y; y = z; z = t;} /*交换z,y的值*/
	printf("small to big: %d %d %d\n", x, y, z);
}