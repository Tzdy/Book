#include "mainMerchant.h"

void mainMerchant::run()
{


	cout << 1 << ":"
		<< "��½" << endl;
	cout << 2 << ":"
		<< "���" << endl;
	cout << 3 << ":"
		<< "���" << endl;
	cout << 4 << ":" << "������һҳ" << endl;
	int operate;
	cin >> operate;
	system("cls");
	switch (operate)
	{
	case 1:
		mainlog.sence();
		run();
		break;
	case 2:
		if (Merlogin.username == "")
			cout << "���½" << endl;
		else
		{
			Book book;
			for (int i = 0; i < merchantbookstore.bookNum; i++)
			{
				merchantbookstore.bookBox[i] = { book }; //������棡
			}
			merchantbookstore.username = merchant.username;
			merchantbookstore.readFile();
			mainMerbookstore.sence();
		}
		run();
		break;
	case 3:
		if (Merlogin.username == "")
			cout << "���½" << endl;
		else {
			mainmerchantaccount.sence();
			run();
		}
		break;
	default:
		break;

	}
}