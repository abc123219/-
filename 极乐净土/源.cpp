#include<graphics.h>
#include<windows.h>
#include<mmsystem.h>//����ͷ�ļ�

//���߱�����,��������winmm.lib���ļ�
#pragma comment(lib,"winmm.lib")
int main(void)
{
	//���ý������,����ͼƬ
	initgraph(800, 480);
	loadimage(0,_T("_0147_ͼ�� - 1.jpg"));

	//�ظ���������
	mciSendString( _T("paly 9582.mp3 repeat"), 0, 0, 0);
	system("pause");//��ͣ����

	closegraph();//�رս���

}


