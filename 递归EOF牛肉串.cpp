
#include <stdio.h>

int main(void) {
	long long int f[40] = { 0, 3, 8, 22 };
	int n;
	for (n = 4; n <= 39; n++) {
		f[n] = f[n - 2] * 2 * 3 + f[n - 3] * 2 * 1 * 2; // 两种情况：f[n - 1] 不以 O 结尾 (× 3) 和 f[n - 1] 以 O 结尾 (× 2)
	}
	int N;
	while (scanf("%d", &N) != EOF) {
		printf("%lld\n", f[N]);
	}
	return 0;
}

/*法二
int main(void) {
	// 0 号单元不用
	long long int A[40] = { 0, 1, 2 }; // 以 O 结尾
	long long int B[40] = { 0, 2, 6 }; // 不以 O 结尾

	for (int n = 3; n <= 39; n++) {
		A[n] = B[n - 1]; // 以 O 结尾
		B[n] = (A[n - 1] + B[n - 1]) * 2; // 不以 O 结尾
	}

	int N;
	while (scanf("%d", &N) != EOF) {
		printf("%lld\n", A[N] + B[N]);
	}

	return 0;
}*/
 

//
// Problem Description：
// 今年的 ACM 暑期集训队一共有 18 人，分为 6 支队伍。
// 其中有一个叫做 EOF 的队伍，由 04 级的阿牛、XC 以及 05 级的 COY 组成。
// 在共同的集训生活中，大家建立了深厚的友谊，阿牛准备做点什么来纪念这段激情燃烧的岁月。
// 想了一想，阿牛从家里拿来了一块上等的牛肉干，准备在上面刻下一个长度为 n 的只由 "E"、"O"、"F" 三种字符组成的字符串。
// (可以只有其中一种或两种字符，但绝对不能有其他字符)
// 阿牛同时禁止在串中出现 O 相邻的情况，他认为，"OO" 看起来就像发怒的眼睛，效果不好。
// 你，NEW ACMer，EOF 的崇拜者，能帮阿牛算一下一共有多少种满足要求的不同的字符串吗？
// PS: 阿牛还有一个小秘密，就是准备把这个刻有 EOF 的牛肉干，作为神秘礼物献给杭电五十周年校庆。
// 可以想象，当校长接过这块牛肉干的时候该有多高兴！这里，请允许我代表杭电的 ACMer 向阿牛表示感谢！
// 再次感谢！
//
// Input：输入数据包含多个测试实例，每个测试实例占一行，由一个整数 n 组成 (0 < n < 40)。
//
// Output：对于每个测试实例，请输出全部的满足要求的涂法，每个实例的输出占一行。
//
// Sample Input：
// 1
// 2
//
// Sample Output：
// 3
// 8
