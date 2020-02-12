#include<graphics.h>
#include<windows.h>
#include<mmsystem.h>//音乐头文件

//告诉编译器,加载音乐winmm.lib库文件
#pragma comment(lib,"winmm.lib")
int main(void)
{
	//设置界面比例,插入图片
	initgraph(800, 480);
	loadimage(0,_T("_0147_图层 - 1.jpg"));

	//重复播放音乐
	mciSendString( _T("paly 9582.mp3 repeat"), 0, 0, 0);
	system("pause");//暂停界面

	closegraph();//关闭界面

}


