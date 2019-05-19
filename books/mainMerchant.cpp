#include "mainMerchant.h"

void mainMerchant::run()
{


	cout << 1 << ":"
		<< "µÇÂ½" << endl;
	cout << 2 << ":"
		<< "Êé¿â" << endl;
	cout << 3 << ":"
		<< "Óà¶î" << endl;
	cout << 4 << ":" << "·µ»ØÉÏÒ»Ò³" << endl;
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
			cout << "ÇëµÇÂ½" << endl;
		else
		{
			Book book;
			for (int i = 0; i < merchantbookstore.bookNum; i++)
			{
				merchantbookstore.bookBox[i] = { book }; //Çå³ý»º´æ£¡
			}
			merchantbookstore.username = merchant.username;
			merchantbookstore.readFile();
			mainMerbookstore.sence();
		}
		run();
		break;
	case 3:
		if (Merlogin.username == "")
			cout << "ÇëµÇÂ½" << endl;
		else {
			mainmerchantaccount.sence();
			run();
		}
		break;
	default:
		break;

	}
}