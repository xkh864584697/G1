#include<iostream>
#include<graphics.h>
#include<Windows.h>
#include<string>

int main(){
	
	std::string name;
	std::string pwd;
	
	while(1){
		system("cls");//�����Ļ
		std::cout << "�������˺ţ�";
		std::cin >>name;

		std::cout << "���������룺";
		std::cin >>pwd;
		if(name == "54hk" && pwd == "123456"){
			break;
		}else{
			std::cout << "�˺Ż��������"<<std::endl;
		}
		system("pause");
	}
	


		initgraph(600,400);

	//����ͼƬ
	loadimage(0,"bg.jpg");
	//�����ı�����
	settextstyle(30,0,"΢���ź�");
	settextcolor(RGB(255,255,0));

	//��һ�����ľ��Σ�
	rectangle(300,40,550,80);
	//�ھ����ڴ�ӡ�ı�
	outtextxy(310,45,"1-��վ 404����");

	//��һ�����ľ��Σ�
	rectangle(300,100,550,140);
	//�ھ����ڴ�ӡ�ı�
	outtextxy(310,105,"2-��վ�۸Ĺ���");

	rectangle(300,160,550,200);
	outtextxy(310,165,"3-��վ�����޸�");

	rectangle(300,220,550,260);
	outtextxy(310,225,"4-�鿴������¼");

	rectangle(300,280,550,320);
	outtextxy(310,285,"5-DNS����");

	rectangle(300,340,550,380);
	outtextxy(310,345,"6-�˳�");
	
	
	
	
	system("pause");
	//closegraph();
	return 0;
}