#include <stdio.h>
#include <iostream>
#include <graphics.h>//图形界面头文件  引用Easy图形库
#include <windows.h>
#include <MMsystem.h>//音乐头文件    mci库头文件
#include <string.h>

//告诉编译器,加载winmm.lib库文件
#pragma comment(lib,"winmm.lib")
#define MAX 148

int main()
{
	char ad[MAX];
	IMAGE img[MAX];

	std::cout << "加载中...." << std::endl;

//****************************************************************************************************************

	//预加载图片
	for (int i = 1; i <= MAX; i++)
	{
		/*              i
		_0147_图层-1	1
		_0146_图层-2	2
		*/
		//加载资源到ad数组中
		sprintf_s(ad, "D:\\项目素材\\项目5-极乐净土图片帧\\images2\\_%04d_图层-%d.jpg", 148 - i, i);
		
		//将图片存进图片数组img里
		loadimage(&img[i], ad);	
	}
//******************************************************************************************************************

	// 设置界面比例
	initgraph(800, 450);

	//重复播放音乐
	mciSendString(_T("play 9582.mp3 repeat"), 0, 0, 0);

//*******************************************************************************************************************

	while (1)
	{
		//依次播放图片
		for (int i = 0; i < MAX; i++)
		{
			//直接显示图片  设置图片坐标
			putimage(0, 0, &img[i]);

			Sleep(75);
		}

	}

	system("pause");
	
	return 0;
}