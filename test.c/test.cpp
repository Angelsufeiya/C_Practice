namespace N1 // N1Ϊ�����ռ������
{
	// �����ռ��е����ݣ��ȿ��Զ��������Ҳ���Զ��庯�� int a;
	int Add(int left, int right)
	{
		return left + right;
	}
}
//2. �����ռ����Ƕ�� 
namespace N2
{
	int a;
	int b;
	int Add(int left, int right)
	{
		return left + right;
	}
	namespace N3
		//ע�� : һ�������ռ�Ͷ�����һ���µ������������ռ��е��������ݶ������ڸ������ռ���
		//	 2.2 �����ռ�ʹ�� �����ռ��г�Ա�����ʹ���� ? ���� :
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
		//printf("%d\n", a); // ������������޷�ʶ��a
		return 0;
	}