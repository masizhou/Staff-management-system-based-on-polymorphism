#pragma once  //��ֹͷ�ļ��ظ�����
#include <iostream> //���������������ͷ�ļ�
using namespace std; //ʹ�ñ�׼�����ռ�
#include "worker.h"
#include "employee.h"
#include "boss.h"
#include "manager.h"

#include <fstream>
#define FILENAME "empFile.txt"


class WorkerManager
{
public:
	//���캯��
	WorkerManager();

	//չʾ�˵�
	void Show_Menu();

	//�˳�ϵͳ
	void ExitSystem();

	//���ְ��
	void Add_Emp();

	//�����ļ�
	void Save();

	//ͳ���ļ��е�����
	int get_EmpNum();

	//��ʼ��Ա��
	void init_Emp();

	//��ʾְ��
	void Show_Emp();

	//ɾ��ְ��
	void Del_Emp();

	//�ж�ְ��֪����ڣ�������� ����ְ������������±꣬�����ڷ���-1
	int IsExist(int id);

	//�޸�ְ��
	void Mod_Emp();

	//����ְ��
	void Find_Emp();

	//��ְ���������
	void Sort_Emp();

	//����ļ�
	void Clean_File();





public:

	//��¼ְ������
	int m_EmpNum;

	//ְ������ָ��
	Worker** m_EmpArray;

	//�ж��ļ��Ƿ�Ϊ�յı�־
	bool m_FileIsEmpty;






	//��������
	~WorkerManager();
};