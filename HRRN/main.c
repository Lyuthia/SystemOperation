#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "list.c"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//�������� 
void insert();
int main(int argc, char** argv) {
	List * PList;
	insert(PList);
	return 0;
}
//�������� 
void insert(List * PList){
	PCB * P;
		do{
		char *name;
		int comeTime;
		int severTime;
		char judge;
		printf("%s","\n�����������\n");
		scanf("%s",&name);
		printf("%s","��������̵���ʱ��\n");
		scanf("%d",&comeTime);
		printf("%s","��������̷���ʱ��\n") ; 
		scanf("%d",&severTime);
		P=InsertPCB(name,comeTime,severTime);
		InsertNode(P,PList);
		printf("%s","������������� y/n\n"); 
		judge=getch();
		if(judge=='n'){
			//printf("yes");
			break;
		}else{
			//printf("no");
			continue;
		}
	}while(true);
} 
// ����Ӧ���㷨 
int HRRN(){
		
}