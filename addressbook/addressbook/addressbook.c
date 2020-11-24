#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#pragma warning(disable:4996)
//先创建结构体，表示一个联系人
typedef struct Person{
	char name[1024];
	char tel[1024];
}Person;
#define MAX_PERSON 1024
	

typedef struct AddressBook{
	Person persons[MAX_PERSON];
	int size;
}AddressBook;

int menu(){
	printf("====================\n");
	printf("1.新增联系人\n");
	printf("2.查找联系人\n");
	printf("3.删除联系人\n");
	printf("4.修改联系人\n");
	printf("5.查看所有联系人\n");
	printf("6.清空所有联系人\n");
	printf("0.退出\n");
	printf("====================\n");
	printf("请输入您的选择：");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
void init(AddressBook* addressBook){
	addressBook->size = 0;
}
void addPerson(AddressBook* addressBook){
	printf("新建联系人\n");
	int currentSize = addressBook->size;
	if (currentSize >= MAX_PERSON){
		printf("通讯录已满，新建失败！\n");
		return;
	}
	Person*p = &addressBook->persons[currentSize];
	printf("请输入新联联系人姓名：");
	scanf("%s", p->name);
	printf("请输入新建联系人电话：");
	scanf("%s", p->tel);
	printf("新建联系人成功！\n");
	addressBook->size++;
}

void findPerson(AddressBook* addressBook){
	printf("按照姓名查找联系人！\n");
	printf("请输入要查找联系人姓名：");
	char name[1024] = { 0 };
	scanf("%s", name);
	for (int i = 0; i < addressBook->size; i++){
		Person*p = &addressBook->persons[i];
		if (strcmp(name, p->name) == 0){
			printf("[%d]\t\t%s\t\t%s\n", i, p->name, p->tel);
		}
	}
	printf("查找联系人成功！\n");
}
void delPerson(AddressBook* addressBook){
	printf("删除联系人\n");
	printf("请输入要删除的联系人的编号: ");
	int id = 0;
	scanf("%d", &id);
	if (id < 0 || id >= addressBook->size) {
		printf("您输入的编号有误!\n");
		return;
	}
	if (id == addressBook->size - 1) {
		addressBook->size--;
		printf("删除成功!\n");
		return;
	}
	addressBook->persons[id]
		= addressBook->persons[addressBook->size - 1];
	addressBook->size--;
	printf("删除成功!\n");
}
void updatePerson(AddressBook* addressBook) {
		printf("更新联系人\n");
		printf("请输入要更新的联系人的编号: ");
		int id = 0;
		scanf("%d", &id);
		if (id < 0 || id >= addressBook->size) {
			printf("您输入的编号有误!\n");
			return;
		}
		Person* p = &addressBook->persons[id];
		printf("请输入联系人姓名：");
		scanf("%s", p->name);
		printf("请输入联系人电话：");
		scanf("%s", p->tel);
		printf("更新联系人成功!\n");
}

void printPerson(AddressBook* addressBook) {
	printf("打印所有联系人\n");
	for (int i = 0; i < addressBook->size; i++) {
		Person* p = &addressBook->persons[i];
		printf("[%d]\t\t%s\t\t%s\n", i, p->name, p->tel);
	}
	printf("共计 [%d] 条记录\n", addressBook->size);
}

void clearPerson(AddressBook* addressBook) {
	for (int i = 0; i < addressBook->size; i++) {
		addressBook->size--;
		if (addressBook->size == 0){
			break;
		}
	}
	printf("清空成功\n");
}
typedef void(*Func)(AddressBook*);
AddressBook addressBook;
int main(){
	Func funcs[] = {
		NULL,
		addPerson,
		findPerson,
		delPerson,
		updatePerson,
		printPerson,
		clearPerson
	};	
	init(&addressBook);
	while (1){
		int choice = menu();
		if (choice < 0 || choice >= sizeof(funcs) / sizeof(funcs[0])){
			printf("您的输入无效，请重新输入！\n");
			continue;
		}
		if (choice == 0){
			printf("GoodBye!\n");
				break;
		}
		funcs[choice](&addressBook);
	}
	system("pause");
	return 0;
}