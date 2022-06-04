#include<stdio.h>
#include<stdlib.h> 

struct Account
{
	char name[100];
	char tel[12];
	char idCard[19];	
	char username[20];
	char password[7];
	float money;
	
	struct Account * next; 
};
typedef struct Account Account; 

Account * head;
Account * tail;

void showMenuEnglish()
{
	
}

void signUpChinese()
{
	
	Account * newNodeP=(Account *)malloc(sizeof(Account));
	printf("������������\n"); 
	scanf("%s",newNodeP->name);
	
	printf("������绰��\n");
	scanf("%s",newNodeP->tel); 
	
	printf("����������֤��\n");
	scanf("%s",newNodeP->idCard); 
	
	printf("�������˺ţ�\n");
	scanf("%s",newNodeP->username); 
	
	printf("���������룺\n");
	scanf("%s",newNodeP->password); 
	
	newNodeP->money=0.0f;
	newNodeP->next=NULL;
	
	
	if(head==NULL)
	{
		head=newNodeP;
		tail=newNodeP;
	} 
	else
	{
		tail->next=newNodeP;
		tail=newNodeP;
	}
	
	printf("���ӳɹ�\n");
	system("pause");
}

void signInChinese()
{
	
}

void signOut()
{
	exit(0);
}

void showMenuChinese()
{
	while(1)
	{
		system("cls");
		printf("��1������\n");
		printf("��2����¼\n");
		printf("��3���˳�\n");
		int n;
		scanf("%d",&n);
		if(n==1)
		{
			signUpChinese();
		}
		else if(n==2)
		{
			signInChinese();
		}
		else if(n==3)
		{
			signOut();
		}
	}
}

int main()
{
	printf("Press 1, English Service\n");
	printf("��2�����ķ���\n");
	int language;
	scanf("%d",&language);
	if(language==1)
	{
		showMenuEnglish();
	}
	else if(language==2)
	{
		showMenuChinese(); 
	}
	return 0;
}