#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>

//分支语句if、else

//int main()
//{
//	int age = 20;
//
//	if (age >= 18)
//		printf("成年\n");
//	else
//	{
//		printf("未成年\n");
//		printf("不能谈恋爱\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	int age = 60;
//
//	if (age < 18)
//		printf("少年\n");
//	else if (age >= 18 && age < 26)
//		printf("青年\n");
//	else if (age >= 26 && age < 40)
//		printf("壮年\n");
//	else if (age >= 40 && age < 60)
//		printf("中年\n");
//	else if (age >= 60 && age < 100)
//		printf("老年\n");
//	else 
//		printf("老不死\n");
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//			printf("%d\n", i);
//	}
//
//	return 0;
//}


//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	default:
//		printf("输入错误\n"); break;
//	case 1:
//		printf("星期1\n"); break;
//	case 2:
//		printf("星期2\n"); break;
//	case 3:
//		printf("星期3\n"); break;
//	case 4:
//		printf("星期4\n"); break;
//	case 5:
//		printf("星期5\n"); break;
//	case 6:
//		printf("星期6\n"); break;
//	case 7:
//		printf("星期7\n"); break;
//	}
//
//	return 0;
//}


//int main() 
//{
//	int i = 1;
//	
//	while (i <= 10)
//	{
//		if (i == 5)
//
//			continue;
//
//			/*break;*/
//
//		printf("%d", i);
//		i++;
//	}
//
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//
//	}
//
//	return 0;
//}


//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码：>");
//	scanf("%s", password);
//	printf("请确认密码（Y/N):>");
//	getchar();
//	/*int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
//		;
//	}*/
//	int ch = getchar;
//
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//
//	}
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int n = 0;
//	int m = 1;
//	int sum = 0;
//	/*for(n=1;n<=10;n++)
//	{
//		m = 1;
//		for (i = 1; i <= n; i++)
//		{
//			m *= i;
//			sum += m;
//		}*/
//	for (i = 1; i <= 3; i++)
//	{
//		m *= i;
//		sum += m;
//		printf("%d\n", sum);
//	}
//	return 0;
//} 


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int left = 0;
//	int right = sz - 1;
//	
//	
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到了\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//睡眠一秒
//		system("cls");//清空屏幕
//		left++;
//		right--;
//	}
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//
//	char password[20] = { 0 };
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，请重新输入！\n");
//		}
//	}
//	if (i == 3)
//		printf("三次密码均错误退出程序\n");
//	return 0;
//}

//void menu()
//{
//	printf("**********************************\n");
//	printf("***********   1.play   ***********\n");
//	printf("***********   0.exit   ***********\n");
//	printf("**********************************\n");
//}
//void game()
//{
//	//猜数字游戏实现
//	//1.生成随机数
//	int ret = rand() % 100+1;
//	//printf("%d\n", ret);//输出要猜的数字
//	//2.猜数字
//	int guess = 0;
//	while (1)
//	{
//		printf("请猜数字：>");
//		scanf("%d", &guess);
//		if (guess < ret) 
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//}
//
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//
//	do
//	{
//		menu();//打印菜单
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input) 
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，重新选择\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}



//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int tmp = 0;
//
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	/*for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}*/
//	for (i = 3; i <= 100; i += 3) 
//	{
//		printf("%d ", i);
//	}
//}


//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int max = 0;
//
//	if (m > n)
//	{
//		max = n;
//	}
//	else
//	{
//		max = m;
//	}
//	while (1)
//	{
//		if (m % max == 0 && n % max == 0)
//		{
//			printf("最大公约数就是：%d\n", max);
//			break;
//		}
//		max--;
//	}
//
//	return 0;
//}


int main()
{
	int y = 0;
	int count = 0;
	for (y = 1000; y <= 2000; y++)
	{
		if (y % 4 == 0)
		{
			if (y % 100 != 0)
			{
				printf("%d ", y);
				count++;
			}
			
		}
	}
	printf("\ncount=%d\n", count);
	return 0;

}












