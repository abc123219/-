#include <stdio.h>
#include <iostream>
#include <graphics.h>//ͼ�ν���ͷ�ļ�  ����Easyͼ�ο�
#include <windows.h>
#include <MMsystem.h>//����ͷ�ļ�    mci��ͷ�ļ�
#include <string.h>

//���߱�����,����winmm.lib���ļ�
#pragma comment(lib,"winmm.lib")
#define MAX 148

int main()
{
	char ad[MAX];
	IMAGE img[MAX];

	std::cout << "������...." << std::endl;

//****************************************************************************************************************

	//Ԥ����ͼƬ
	for (int i = 1; i <= MAX; i++)
	{
		/*              i
		_0147_ͼ��-1	1
		_0146_ͼ��-2	2
		*/
		//������Դ��ad������
		sprintf_s(ad, "D:\\��Ŀ�ز�\\��Ŀ5-���־���ͼƬ֡\\images2\\_%04d_ͼ��-%d.jpg", 148 - i, i);
		
		//��ͼƬ���ͼƬ����img��
		loadimage(&img[i], ad);	
	}
//******************************************************************************************************************

	// ���ý������
	initgraph(800, 450);

	//�ظ���������
	mciSendString(_T("play 9582.mp3 repeat"), 0, 0, 0);

//*******************************************************************************************************************

	while (1)
	{
		//���β���ͼƬ
		for (int i = 0; i < MAX; i++)
		{
			//ֱ����ʾͼƬ  ����ͼƬ����
			putimage(0, 0, &img[i]);

			Sleep(75);
		}

	}

	system("pause");
	
	return 0;
}