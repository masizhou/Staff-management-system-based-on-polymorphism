#pragma once  //防止头文件重复包含
#include <iostream> //包含输入输出流的头文件
using namespace std; //使用标准命名空间
#include "worker.h"
#include "employee.h"
#include "boss.h"
#include "manager.h"

#include <fstream>
#define FILENAME "empFile.txt"


class WorkerManager
{
public:
	//构造函数
	WorkerManager();

	//展示菜单
	void Show_Menu();

	//退出系统
	void ExitSystem();

	//添加职工
	void Add_Emp();

	//保存文件
	void Save();

	//统计文件中的人数
	int get_EmpNum();

	//初始化员工
	void init_Emp();

	//显示职工
	void Show_Emp();

	//删除职工
	void Del_Emp();

	//判断职工知否存在，如果存在 返回职工所在数组的下标，不存在返回-1
	int IsExist(int id);

	//修改职工
	void Mod_Emp();

	//查找职工
	void Find_Emp();

	//按职工编号排序
	void Sort_Emp();

	//清空文件
	void Clean_File();





public:

	//记录职工人数
	int m_EmpNum;

	//职工数组指针
	Worker** m_EmpArray;

	//判断文件是否为空的标志
	bool m_FileIsEmpty;






	//析构函数
	~WorkerManager();
};