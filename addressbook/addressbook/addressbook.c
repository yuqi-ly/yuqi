#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#pragma warning(disable:4996)
//�ȴ����ṹ�壬��ʾһ����ϵ��
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
	printf("1.������ϵ��\n");
	printf("2.������ϵ��\n");
	printf("3.ɾ����ϵ��\n");
	printf("4.�޸���ϵ��\n");
	printf("5.�鿴������ϵ��\n");
	printf("6.���������ϵ��\n");
	printf("0.�˳�\n");
	printf("====================\n");
	printf("����������ѡ��");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
void init(AddressBook* addressBook){
	addressBook->size = 0;
}
void addPerson(AddressBook* addressBook){
	printf("�½���ϵ��\n");
	int currentSize = addressBook->size;
	if (currentSize >= MAX_PERSON){
		printf("ͨѶ¼�������½�ʧ�ܣ�\n");
		return;
	}
	Person*p = &addressBook->persons[currentSize];
	printf("������������ϵ��������");
	scanf("%s", p->name);
	printf("�������½���ϵ�˵绰��");
	scanf("%s", p->tel);
	printf("�½���ϵ�˳ɹ���\n");
	addressBook->size++;
}

void findPerson(AddressBook* addressBook){
	printf("��������������ϵ�ˣ�\n");
	printf("������Ҫ������ϵ��������");
	char name[1024] = { 0 };
	scanf("%s", name);
	for (int i = 0; i < addressBook->size; i++){
		Person*p = &addressBook->persons[i];
		if (strcmp(name, p->name) == 0){
			printf("[%d]\t\t%s\t\t%s\n", i, p->name, p->tel);
		}
	}
	printf("������ϵ�˳ɹ���\n");
}
void delPerson(AddressBook* addressBook){
	printf("ɾ����ϵ��\n");
	printf("������Ҫɾ������ϵ�˵ı��: ");
	int id = 0;
	scanf("%d", &id);
	if (id < 0 || id >= addressBook->size) {
		printf("������ı������!\n");
		return;
	}
	if (id == addressBook->size - 1) {
		addressBook->size--;
		printf("ɾ���ɹ�!\n");
		return;
	}
	addressBook->persons[id]
		= addressBook->persons[addressBook->size - 1];
	addressBook->size--;
	printf("ɾ���ɹ�!\n");
}
void updatePerson(AddressBook* addressBook) {
		printf("������ϵ��\n");
		printf("������Ҫ���µ���ϵ�˵ı��: ");
		int id = 0;
		scanf("%d", &id);
		if (id < 0 || id >= addressBook->size) {
			printf("������ı������!\n");
			return;
		}
		Person* p = &addressBook->persons[id];
		printf("��������ϵ��������");
		scanf("%s", p->name);
		printf("��������ϵ�˵绰��");
		scanf("%s", p->tel);
		printf("������ϵ�˳ɹ�!\n");
}

void printPerson(AddressBook* addressBook) {
	printf("��ӡ������ϵ��\n");
	for (int i = 0; i < addressBook->size; i++) {
		Person* p = &addressBook->persons[i];
		printf("[%d]\t\t%s\t\t%s\n", i, p->name, p->tel);
	}
	printf("���� [%d] ����¼\n", addressBook->size);
}

void clearPerson(AddressBook* addressBook) {
	for (int i = 0; i < addressBook->size; i++) {
		addressBook->size--;
		if (addressBook->size == 0){
			break;
		}
	}
	printf("��ճɹ�\n");
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
			printf("����������Ч�����������룡\n");
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