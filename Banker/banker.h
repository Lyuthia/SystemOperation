#define false 0
#define true !false

//ϵͳ�����н�������
#define PROCESSES_NUMBER	5
typedef int bool;

typedef struct {
	int	A;
	int	B;
	int	C;
}RESOURCE;

//����������
RESOURCE Max[PROCESSES_NUMBER] = 
{
	{7,5,3},
	{3,2,2},
	{9,0,2},
	{2,2,2},
	{4,3,3}
};

//�ѷ�����Դ������
RESOURCE Allocation[PROCESSES_NUMBER] = 
{
	{0,1,0},
	{2,0,0},
	{3,0,2},
	{2,1,1},
	{0,0,2}
};

//�������
RESOURCE Need[PROCESSES_NUMBER] = 
{
	{7,4,3},
	{1,2,2},
	{6,0,0},
	{0,1,1},
	{4,3,1}
};

//������Դ����
RESOURCE Available = {3,3,2};

//��¼��ȫ���� 
int safe[PROCESSES_NUMBER];