// 【程序1】
// 题目：有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
// 1.程序分析：可填在百位、十位、个位的数字都是1、2、3、4。组成所有的排列后再去
// 掉不满足条件的排列。 当然这里的去掉并不是减去而是条件判断，比如符合这个条件（i!=k&&i!=j&&j!=k）的才打印出来
// 2.程序源代码：
main()
{
	int i, j, k;
	printf("\n");
	/*以下为三重循环*/
	for (i = 1; i < 5; i++)
		for (j = 1; j < 5; j++)
			for (k = 1; k < 5; k++)
			{
				/*确保i、j、k三位互不相同*/
				if (i != k && i != j && j != k)
					printf("%d,%d,%d\n", i, j, k);
			}
}