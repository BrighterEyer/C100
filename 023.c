// 【程序23】
// 题目：打印出如下图案（菱形）

// *
// ***
// ******
// ********
// ******
// ***
// *
// 1.程序分析：先把图形分成两部分来看待，前四行一个规律，后三行一个规律，利用双重
//              for循环，第一层控制行，第二层控制列。
// 2.程序源代码：
main()
{
  int i, j, k;

//前面四行
  for (i = 0; i <= 3; i++)
  {
    for (j = 0; j <= 2 - i; j++)
      printf(" ");
    for (k = 0; k <= 2 * i; k++)
      printf("*");
    printf("\n");
  }

//后面三行
  for (i = 0; i <= 2; i++)
  {
    for (j = 0; j <= i; j++)
      printf(" ");
    for (k = 0; k <= 4 - 2 * i; k++)
      printf("*");
    printf("\n");
  }
}
