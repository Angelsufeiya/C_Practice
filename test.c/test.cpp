namespace N1 // N1为命名空间的名称
{
	// 命名空间中的内容，既可以定义变量，也可以定义函数 int a;
	int Add(int left, int right)
	{
		return left + right;
	}
}
//2. 命名空间可以嵌套 
namespace N2
{
	int a;
	int b;
	int Add(int left, int right)
	{
		return left + right;
	}
	namespace N3
		//注意 : 一个命名空间就定义了一个新的作用域，命名空间中的所有内容都局限于该命名空间中
		//	 2.2 命名空间使用 命名空间中成员该如何使用呢 ? 比如 :
//	namespace N 
	{
		int a = 10;
		int b = 20;
		int Add(int left, int right)
		{
			return left + right;
		}
		int Sub(int left, int right)
		{
			return left - right;
		}
}
	int main() 
	{
		//printf("%d\n", a); // 该语句编译出错，无法识别a
		return 0;
	}