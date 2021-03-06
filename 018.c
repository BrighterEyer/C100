// 【程序18】
// 题目：求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字=2。例如2+22+222+2222+22222(此时共有n=5个数相加)，几个数相加有键盘控制。
// 1.程序分析：关键是计算出每一项的值
// （注意这里数值的变化拿2来说，第一次是2，第二次是22，比第一次大20，第三次是222，比第二次大200，，所以后面数值相差是2000,20000…，十倍也就是一个零的关系这是和a的关系，还要知道后面那个数和前面一个数值的关系比如：

// 2=2+0;第一项值

// 22=2+20第二项值

// 222=22+200第三项值

// 2222=222+2000第四项值

// 22222=2222+20000…

// ）While语句的使用：N项依次相加，相加的次数是n次
// 2.程序源代码：
main() {
  int a, n, count = 1;
  long int sn = 0, tn = 0;
  printf("please input a and n\n");
  scanf("%d,%d", &a, &n);
  printf("a=%d,n=%d\n", a, n);
  while (count <= n) {
    tn = tn + a; //tn是下一项数值
    sn = sn + tn; //sn是前面的数值总和加上下一项数值
    a = a * 10; //a是每次相邻两项的差值，
    ++count;
  }
  printf("a+aa+...=%ld\n", sn);
}
