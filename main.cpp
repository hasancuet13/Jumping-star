#include<iostream>
#include<Windows.h>
using namespace std;
class A
{
public:
	virtual void game();
};
class B :public A
{
public:
	virtual void game();
};
class C :public B
{
public:
	virtual void game();
};
class D :public C
{
public:
	virtual void game();
};
class E :public D
{
public:
	virtual void game();
};
void A::game()
{
	int i, n = 10;
	system("color B0");
	cout<<"\n       Please count how many star in this box";Sleep(2000);system("cls");
	for (i = 1; i <= 5; i++)
	{
		n -= 1;
		cout << "\n\n\n\n";

		cout << "\n\n        LEVEL - 1      Count down( " << n << " )" << "\n\n";
		cout << " -----------------------------------------------" << endl;
		cout << " | *       *                                   |" << endl;
		cout << " |                             *               |" << endl;
		cout << " |                                             |" << endl;
		cout << " |                   *                      *  |" << endl;
		cout << " | *                                           |" << endl;
		cout << " |                                             |" << endl;
		cout << " |       *                              *      |" << endl;
		cout << " |                                             |" << endl;
		cout << " | *                                        *  |" << endl;
		cout << " -----------------------------------------------" << endl; Sleep(500); system("cls");
		cout << "\n\n\n\n"; n -= 1;

		cout << "\n\n        LEVEL - 1      Count down( " << n << " )" << "\n\n";
		cout << " -----------------------------------------------" << endl;
		cout << " |                                             |" << endl;
		cout << " |                                  *          |" << endl;
		cout << " |     *                                       |" << endl;
		cout << " |                *                       *    |" << endl;
		cout << " | *                                           |" << endl;
		cout << " |                                             |" << endl;
		cout << " |       *                                  *  |" << endl;
		cout << " | *                                 *         |" << endl;
		cout << " |                *                            |" << endl;
		cout << " -----------------------------------------------" << endl; Sleep(500); system("cls");
    }

	int num;
	cout << "\n\n\n              How many stars were in the box: ";
	do
	{
		cin >> num;
		if (num == 10){
                cout<<"\n\n\n\n\n                Congratulation !!!";Sleep(400);
			cout << "\n" << "               Your answer is correct." << "\n\n\n"; Sleep(200); cout << "                           A"; Sleep(200);
			 cout << "R"; Sleep(200); cout << "E"; Sleep(200); cout << " Y"; Sleep(200); cout << "O"; Sleep(200); cout << "U";
			  Sleep(200); cout << " W"; Sleep(200); cout << "A"; Sleep(200); cout << "N"; Sleep(200); cout << "T"; Sleep(200);
			   cout << " T"; Sleep(200); cout << "O"; Sleep(200); cout << " P"; Sleep(200); cout << "L"; Sleep(200); cout << "A";
			    Sleep(200);cout<<"Y";Sleep(200);cout<<" L";Sleep(200);cout << "E"; Sleep(200); cout << "V"; Sleep(200);
        cout << "E"; Sleep(200); cout << "L"; Sleep(200);
			     cout << " -"; Sleep(200); cout << " 2"; Sleep(200);
			cout << "\n\n\n\n" << "                  YES -> [ Y ]                       NO -> [ N ]" << "\n\n";
			 cout << "                                  Press: ";
		}
		else{
		    cout<<"\n\n\n\n\n       Oops !!!";Sleep(700);
			cout << "\n" << "    Your answer is wrong." << "\n\n" << "Please try again." << "\n"; Sleep(1200); system("cls");
			n = 10;
			for (i = 1; i <= 5; i++)
			{   n -= 1;

				cout << "\n\n\n\n";

		cout << "\n\n        LEVEL - 1      Count down( " << n << " )" << "\n\n";
		cout << " -----------------------------------------------" << endl;
		cout << " | *       *                                   |" << endl;
		cout << " |                             *               |" << endl;
		cout << " |                                             |" << endl;
		cout << " |                   *                      *  |" << endl;
		cout << " | *                                           |" << endl;
		cout << " |                                             |" << endl;
		cout << " |       *                              *      |" << endl;
		cout << " |                                             |" << endl;
		cout << " | *                                        *  |" << endl;
		cout << " -----------------------------------------------" << endl; Sleep(500); system("cls");
		cout << "\n\n\n\n"; n -= 1;

		cout << "\n\n        LEVEL - 1      Count down( " << n << " )" << "\n\n";
		cout << " -----------------------------------------------" << endl;
		cout << " |                                             |" << endl;
		cout << " |                                  *          |" << endl;
		cout << " |     *                                       |" << endl;
		cout << " |                *                       *    |" << endl;
		cout << " | *                                           |" << endl;
		cout << " |                                             |" << endl;
		cout << " |       *                                  *  |" << endl;
		cout << " | *                                 *         |" << endl;
		cout << " |                *                            |" << endl;
		cout << " -----------------------------------------------" << endl; Sleep(500); system("cls");	}
			cout << "\n\n\n             How many stars were in the box: ";
		}
	} while (num != 10);
}
void B::game()
{
    cout << ""; system("cls");
	cout << "\n\n\n\n\n\n\n\n\n\n                           L";
	Sleep(1500);
	cout << " O"; Sleep(280); cout << " A"; Sleep(280); cout << " D"; Sleep(280); cout << " I"; Sleep(280);
    cout << " N"; Sleep(280); cout << " G"; Sleep(280); cout << " ."; Sleep(280); cout << " ."; Sleep(280);
    cout << " ."; cout << " ."; Sleep(280); cout << " ."; Sleep(280); cout << " ."; Sleep(280); cout << " ."; Sleep(280);
	cout << " .";  Sleep(400); cout << " ."; Sleep(400); cout << " ."; Sleep(400); cout << " .";  Sleep(400);
	cout << " ."; Sleep(400); cout << " ."; Sleep(400); cout << " .";  Sleep(400);
	system("cls");
	cout<<"\n       Please count how many star in this box";Sleep(2000);system("cls");
	int i, n = 10;
	for (i = 1; i <= 5; i++)
	{
		n -= 1;
		cout << "\n\n\n\n";
		cout << "\n\n        LEVEL - 2      Count down( " << n << " )" << "\n\n";
		cout << " ---------------------------------------------------" << endl;
		cout << " | *                 *                             |" << endl;
		cout << " |           *                     *               |" << endl;
		cout << " |                                                 |" << endl;
		cout << " |       *                             *           |" << endl;
		cout << " |  *              *                            *  |" << endl;
		cout << " |                          *                      |" << endl;
		cout << " |       *                                  *      |" << endl;
		cout << " |                                                 |" << endl;
		cout << " | *                                   *         * |" << endl;
		cout << " ---------------------------------------------------" << endl; Sleep(400); system("cls");
		cout << "\n\n\n\n"; n -= 1;
		cout << "\n\n        LEVEL - 2      Count down( " << n << " )" << "\n\n";
		cout << " ---------------------------------------------------" << endl;
		cout << " | *                                             * |" << endl;
		cout << " |                                   *      *      |" << endl;
		cout << " |            *                                    |" << endl;
		cout << " |                        *        *               |" << endl;
		cout << " |                   *                             |" << endl;
		cout << " | *                                            *  |" << endl;
		cout << " |        *                *                       |" << endl;
		cout << " |                                                 |" << endl;
		cout << " | *         *                                  *  |" << endl;
		cout << " ---------------------------------------------------" << endl; Sleep(400); system("cls");
	}
	int num;
	cout << "\n\n\n             How many stars were in the box: ";
	do
	{
		cin >> num;
		if (num == 15){
			cout<<"\n\n\n\n\n                Congratulation !!!";Sleep(400);
			cout << "\n" << "               Your answer is correct." << "\n\n\n"; Sleep(200); cout << "                           A"; Sleep(200);
			 cout << "R"; Sleep(200); cout << "E"; Sleep(200); cout << " Y"; Sleep(200); cout << "O"; Sleep(200); cout << "U";
			  Sleep(200); cout << " W"; Sleep(200); cout << "A"; Sleep(200); cout << "N"; Sleep(200); cout << "T"; Sleep(200);
			   cout << " T"; Sleep(200); cout << "O"; Sleep(200); cout << " P"; Sleep(200); cout << "L"; Sleep(200); cout << "A";
			    Sleep(200);cout<<"Y";Sleep(200);cout<<" L";Sleep(200);cout << "E"; Sleep(200); cout << "V"; Sleep(200);
        cout << "E"; Sleep(200); cout << "L"; Sleep(200);
			     cout << " -"; Sleep(200); cout << " 3"; Sleep(200);
			cout << "\n\n\n\n" << "                  YES -> [ Y ]                       NO -> [ N ]" << "\n\n";
			 cout << "                                  Press: ";
		}
		else{
		    cout<<"\n\n\n\n\n       Oops !!!";Sleep(700);
			cout << "\n" << "    Your answer is wrong." << "\n\n" << "Please try again." << "\n"; Sleep(1200); system("cls");			n = 10;
			for (i = 1; i <= 5; i++)
			{
				n -= 1;
				cout << "\n\n\n\n";
		cout << "\n\n        LEVEL - 2      Count down( " << n << " )" << "\n\n";
		cout << " ---------------------------------------------------" << endl;
		cout << " | *                 *                             |" << endl;
		cout << " |           *                     *               |" << endl;
		cout << " |                                                 |" << endl;
		cout << " |       *                             *           |" << endl;
		cout << " |  *              *                            *  |" << endl;
		cout << " |                          *                      |" << endl;
		cout << " |       *                                  *      |" << endl;
		cout << " |                                                 |" << endl;
		cout << " | *                                   *         * |" << endl;
		cout << " ---------------------------------------------------" << endl; Sleep(1200); system("cls");
		cout << "\n\n\n\n"; n -= 1;
		cout << "\n\n        LEVEL - 2      Count down( " << n << " )" << "\n\n";
		cout << " ---------------------------------------------------" << endl;
		cout << " | *                                             * |" << endl;
		cout << " |                                   *      *      |" << endl;
		cout << " |            *                                    |" << endl;
		cout << " |                        *        *               |" << endl;
		cout << " |                   *                             |" << endl;
		cout << " | *                                            *  |" << endl;
		cout << " |        *                *                       |" << endl;
		cout << " |                                                 |" << endl;
		cout << " | *         *                                  *  |" << endl;
		cout << " ---------------------------------------------------" << endl; Sleep(1200); system("cls");
			}
			cout << "\n\n\n             How many stars were in the box: ";
		}
	} while (num != 15);
}
void C::game()
{
	cout << ""; system("cls");
		cout << "\n\n\n\n\n\n\n\n\n\n                           L";
	Sleep(1500);
	cout << " O"; Sleep(280); cout << " A"; Sleep(280); cout << " D"; Sleep(280); cout << " I"; Sleep(280);
    cout << " N"; Sleep(280); cout << " G"; Sleep(280); cout << " ."; Sleep(280); cout << " ."; Sleep(280);
    cout << " ."; cout << " ."; Sleep(280); cout << " ."; Sleep(280); cout << " ."; Sleep(280); cout << " ."; Sleep(280);
	cout << " .";  Sleep(400); cout << " ."; Sleep(400); cout << " ."; Sleep(400); cout << " .";  Sleep(400);
	cout << " ."; Sleep(400); cout << " ."; Sleep(400); cout << " .";  Sleep(400);
	system("cls");
	cout<<"\n       Please count how many star in this box";Sleep(2000);system("cls");
	int i, n = 10;
	for (i = 1; i <= 5; i++)
	{
		n -= 1;
		cout << "\n\n\n\n";
		cout << "\n\n        LEVEL - 3      Count down( " << n << " )" << "\n\n";
		cout << " ---------------------------------------------------" << endl;
		cout << " |                                     *           |" << endl;
		cout << " |              *                *             *   |" << endl;
		cout << " |                                                 |" << endl;
		cout << " |     *    *       *                              |" << endl;
		cout << " | *                  *        *                *  |" << endl;
		cout << " |          *                                      |" << endl;
		cout << " |                                   *      *      |" << endl;
		cout << " |                               *         *       |" << endl;
		cout << " | *         *          *                        * |" << endl;
		cout << " ---------------------------------------------------" << endl; Sleep(1800); system("cls");
		cout << "\n\n\n\n"; n -= 1;
		cout << "\n\n        LEVEL - 3      Count down( " << n << " )" << "\n\n";
		cout << " ---------------------------------------------------" << endl;
		cout << " |                             *                 * |" << endl;
		cout << " |               *                          *      |" << endl;
		cout << " | *                                *              |" << endl;
		cout << " |                      *                      *   |" << endl;
		cout << " |                                *        *       |" << endl;
		cout << " |       *           *                          *  |" << endl;
		cout << " |  *        *                 *                   |" << endl;
		cout << " |       *                                         |" << endl;
		cout << " | *                    *                       *  |" << endl;
		cout << " ---------------------------------------------------" << endl; Sleep(1800); system("cls");
	}
	int num;
	cout << "\n\n\n             How many stars were in the box: ";
	do
	{
		cin >> num;
		if (num == 20){

			cout<<"\n\n\n\n\n                Congratulation !!!";Sleep(400);
			cout << "\n" << "               Your answer is correct." << "\n\n\n"; Sleep(200); cout << "                           A"; Sleep(200);
			 cout << "R"; Sleep(200); cout << "E"; Sleep(200); cout << " Y"; Sleep(200); cout << "O"; Sleep(200); cout << "U";
			  Sleep(200); cout << " W"; Sleep(200); cout << "A"; Sleep(200); cout << "N"; Sleep(200); cout << "T"; Sleep(200);
			   cout << " T"; Sleep(200); cout << "O"; Sleep(200); cout << " P"; Sleep(200); cout << "L"; Sleep(200); cout << "A";
			    Sleep(200);cout<<"Y";Sleep(200);cout<<" L";Sleep(200);cout << "E"; Sleep(200); cout << "V"; Sleep(200);
        cout << "E"; Sleep(200); cout << "L"; Sleep(200);
			     cout << " -"; Sleep(200); cout << " 4"; Sleep(200);
			cout << "\n\n\n\n" << "                  YES -> [ Y ]                       NO -> [ N ]" << "\n\n";
			 cout << "                                  Press: ";
		}
		else{
		    cout<<"\n\n\n\n\n       Oops !!!";Sleep(700);
			cout << "\n" << "    Your answer is wrong." << "\n\n" << "Please try again." << "\n"; Sleep(1200); system("cls");			n = 10;
			n = 10;
			for (i = 1; i <= 5; i++)
			{
				n -= 1;
				cout << "\n\n        LEVEL - 3      Count down( " << n << " )" << "\n\n";
		cout << " ---------------------------------------------------" << endl;
		cout << " |                                     *           |" << endl;
		cout << " |              *                *             *   |" << endl;
		cout << " |                                                 |" << endl;
		cout << " |     *    *       *                              |" << endl;
		cout << " | *                  *        *                *  |" << endl;
		cout << " |          *                                      |" << endl;
		cout << " |                                   *      *      |" << endl;
		cout << " |                               *         *       |" << endl;
		cout << " | *         *          *                        * |" << endl;
		cout << " ---------------------------------------------------" << endl; Sleep(400); system("cls");
		cout << "\n\n\n\n"; n -= 1;
		cout << "\n\n        LEVEL - 3      Count down( " << n << " )" << "\n\n";
		cout << " ---------------------------------------------------" << endl;
		cout << " |                             *                 * |" << endl;
		cout << " |               *                          *      |" << endl;
		cout << " | *                                *              |" << endl;
		cout << " |                      *                      *   |" << endl;
		cout << " |                                *        *       |" << endl;
		cout << " |       *           *                          *  |" << endl;
		cout << " |  *        *                 *                   |" << endl;
		cout << " |       *                                         |" << endl;
		cout << " | *                    *                       *  |" << endl;
		cout << " ---------------------------------------------------" << endl; Sleep(400); system("cls");
					}

			cout << "\n\n\n             How many stars were in the box: ";

		}

	} while (num != 20);

}
void D::game()
{
	cout << ""; system("cls");
		cout << "\n\n\n\n\n\n\n\n\n\n                           L";
	Sleep(1500);
	cout << " O"; Sleep(280); cout << " A"; Sleep(280); cout << " D"; Sleep(280); cout << " I"; Sleep(280);
    cout << " N"; Sleep(280); cout << " G"; Sleep(280); cout << " ."; Sleep(280); cout << " ."; Sleep(280);
    cout << " ."; cout << " ."; Sleep(280); cout << " ."; Sleep(280); cout << " ."; Sleep(280); cout << " ."; Sleep(280);
	cout << " .";  Sleep(400); cout << " ."; Sleep(400); cout << " ."; Sleep(400); cout << " .";  Sleep(400);
	cout << " ."; Sleep(400); cout << " ."; Sleep(400); cout << " .";  Sleep(400);
	system("cls");
	cout<<"\n       Please count how many star in this box";Sleep(2000);system("cls");
	int i, n = 10;
	for (i = 1; i <= 5; i++)
	{
		n -= 1;
		cout << "\n\n\n\n";
		cout << "\n\n        LEVEL - 4      Count down( " << n << " )" << "\n\n";
		cout << " ---------------------------------------------------" << endl;
		cout << " |                  *                  *           |" << endl;
		cout << " |*         *               *               *      |" << endl;
		cout << " |                                                 |" << endl;
		cout << " |            *               *             *      |" << endl;
		cout << " |   *           *       *                      *  |" << endl;
		cout << " |       *                                         |" << endl;
		cout << " |   *        *        *            *              |" << endl;
		cout << " | *                *                              |" << endl;
		cout << " |        *           *       *        *         * |" << endl;
		cout << " ---------------------------------------------------" << endl; Sleep(400); system("cls");
		cout << "\n\n\n\n"; n -= 1;
		cout << "\n\n        LEVEL - 4      Count down( " << n << " )" << "\n\n";
		cout << " ---------------------------------------------------" << endl;
		cout << " |               *                               * |" << endl;
		cout << " |   *        *             *               *      |" << endl;
		cout << " | *               *                               |" << endl;
		cout << " |             *                               *   |" << endl;
		cout << " |    *      *            *                        |" << endl;
		cout << " | *                 *                          *  |" << endl;
		cout << " |       *                  *               *      |" << endl;
		cout << " |                               *                 |" << endl;
		cout << " |   *        *       *       *                 *  |" << endl;
		cout << " ---------------------------------------------------" << endl; Sleep(400); system("cls");
	}
	int num;
	cout << "\n\n\n             How many stars were in the box: ";
	do
	{
		cin >> num;
		if (num == 25){
			cout<<"\n\n\n\n\n                Congratulation !!!";Sleep(400);
			cout << "\n" << "               Your answer is correct." << "\n\n\n"; Sleep(200); cout << "                           A"; Sleep(200);
			 cout << "R"; Sleep(200); cout << "E"; Sleep(200); cout << " Y"; Sleep(200); cout << "O"; Sleep(200); cout << "U";
			  Sleep(200); cout << " W"; Sleep(200); cout << "A"; Sleep(200); cout << "N"; Sleep(200); cout << "T"; Sleep(200);
			   cout << " T"; Sleep(200); cout << "O"; Sleep(200); cout << " P"; Sleep(200); cout << "L"; Sleep(200); cout << "A";
			    Sleep(200);cout<<"Y";Sleep(200);cout<<" L";Sleep(200);cout << "A"; Sleep(200); cout << "S"; Sleep(200);
        cout << "T"; Sleep(200); cout << "- L"; Sleep(200);
			     cout << "E"; Sleep(200); cout << "V";Sleep(200);cout<<"A";Sleep(200);cout<<"S";Sleep(200);
			     cout<<"T"; Sleep(200);
			cout << "\n\n\n\n" << "                  YES -> [ Y ]                       NO -> [ N ]" << "\n\n";
			 cout << "                                  Press: ";
		}
		else{
		    cout<<"\n\n\n\n\n       Oops !!!";Sleep(700);
			cout << "\n" << "    Your answer is wrong." << "\n\n" << "Please try again." << "\n"; Sleep(1200); system("cls");			n = 6;
			int n=10;
			for (i = 1; i <= 5; i++)
			{
				n -= 1;
				cout << "\n\n\n\n";
		cout << "\n\n        LEVEL - 4      Count down( " << n << " )" << "\n\n";
		cout << " ---------------------------------------------------" << endl;
		cout << " |                  *                  *           |" << endl;
		cout << " |*         *               *               *      |" << endl;
		cout << " |                                                 |" << endl;
		cout << " |            *               *             *      |" << endl;
		cout << " |   *           *       *                      *  |" << endl;
		cout << " |       *                                         |" << endl;
		cout << " |   *        *        *            *              |" << endl;
		cout << " | *                *                              |" << endl;
		cout << " |        *           *       *        *         * |" << endl;
		cout << " ---------------------------------------------------" << endl; Sleep(2000); system("cls");
		cout << "\n\n\n\n"; n -= 1;
		cout << "\n\n        LEVEL - 4      Count down( " << n << " )" << "\n\n";
		cout << " ---------------------------------------------------" << endl;
		cout << " |               *                               * |" << endl;
		cout << " |   *        *             *               *      |" << endl;
		cout << " | *               *                               |" << endl;
		cout << " |             *                               *   |" << endl;
		cout << " |    *      *            *                        |" << endl;
		cout << " | *                 *                          *  |" << endl;
		cout << " |       *                  *               *      |" << endl;
		cout << " |                               *                 |" << endl;
		cout << " |   *        *       *       *                 *  |" << endl;
		cout << " ---------------------------------------------------" << endl; Sleep(400); system("cls");

			}

			cout << "\n\n\n             How many stars were in the box: ";
		}

	} while (num != 25);
}
void E::game()
{
	cout << ""; system("cls");
		cout << "\n\n\n\n\n\n\n\n\n\n                           L";
	Sleep(1500);
	cout << " O"; Sleep(280); cout << " A"; Sleep(280); cout << " D"; Sleep(280); cout << " I"; Sleep(280);
    cout << " N"; Sleep(280); cout << " G"; Sleep(280); cout << " ."; Sleep(280); cout << " ."; Sleep(280);
    cout << " ."; cout << " ."; Sleep(280); cout << " ."; Sleep(280); cout << " ."; Sleep(280); cout << " ."; Sleep(280);
	cout << " .";  Sleep(400); cout << " ."; Sleep(400); cout << " ."; Sleep(400); cout << " .";  Sleep(400);
	cout << " ."; Sleep(400); cout << " ."; Sleep(400); cout << " .";  Sleep(400);
	system("cls");
	cout<<"\n       Please count how many star in this box";Sleep(2000);system("cls");
	int i, n = 10;
	for (i = 1; i <= 5; i++)
	{
		n -= 1;
		cout << "\n\n\n\n";
		cout << "\n\n        LAST-LEVEL      Count down( " << n << " )" << "\n\n";
		cout << " ---------------------------------------------------" << endl;
		cout << " |      *                              *           |" << endl;
		cout << " |*        *      *      *       *                 |" << endl;
		cout << " |                   *                        *    |" << endl;
		cout << " |  *     *                  *                     |" << endl;
		cout << " |     *        *        *       *              *  |" << endl;
		cout << " |  *         *                                    |" << endl;
		cout << " |       *       *    *           *                |" << endl;
		cout << " |   *                                     *       |" << endl;
		cout << " | *            *           *                *   * |" << endl;
		cout << " ---------------------------------------------------" << endl; Sleep(2000); system("cls");
		cout << "\n\n\n\n"; n -= 1;
		cout << "\n\n        LAST-LEVEL      Count down( " << n << " )" << "\n\n";
		cout << " ---------------------------------------------------" << endl;
		cout << " | *                                             * |" << endl;
		cout << " |    *       *         *          *               |" << endl;
		cout << " | *     *       *          *                      |" << endl;
		cout << " |           *                                 *   |" << endl;
		cout << " |   *            *                        *       |" << endl;
		cout << " |           *  *                       *       *  |" << endl;
		cout << " |  *                  *      *                *   |" << endl;
		cout << " |        *                                *       |" << endl;
		cout << " |            *     *       *       *           *  |" << endl;
		cout << " ---------------------------------------------------" << endl; Sleep(2000); system("cls");
	}

	int num;
	cout << "\n\n\n             How many stars were in the box: ";
	do
	{
		cin >> num;
		if (num == 30){
			cout<<"\n\n\n\n\n                Congratulation !!!";Sleep(400);
			cout << "\n" << "               Your answer is correct." << "\n\n\n"; Sleep(200);
		}
		else{
		    cout<<"\n\n\n\n\n       Oops !!!";Sleep(700);
			cout << "\n" << "    Your answer is wrong." << "\n\n" << "Please try again." << "\n"; Sleep(1200); system("cls");
			n = 10;
			for (i = 1; i <= 5; i++)
			{
				n -= 1;
				cout << "\n\n\n\n";
        cout << "\n\n        LAST-LEVEL      Count down( " << n << " )" << "\n\n";
		cout << " ---------------------------------------------------" << endl;
		cout << " |      *                              *           |" << endl;
		cout << " |*        *      *      *       *                 |" << endl;
		cout << " |                   *                        *    |" << endl;
		cout << " |  *     *                  *                     |" << endl;
		cout << " |     *        *        *       *              *  |" << endl;
		cout << " |  *         *                                    |" << endl;
		cout << " |       *       *    *           *                |" << endl;
		cout << " |   *                                     *       |" << endl;
		cout << " | *            *           *                *   * |" << endl;
		cout << " ---------------------------------------------------" << endl; Sleep(2000); system("cls");
		cout << "\n\n\n\n"; n -= 1;
		cout << "\n\n        LAST-LEVEL      Count down( " << n << " )" << "\n\n";
		cout << " ---------------------------------------------------" << endl;
		cout << " | *                                             * |" << endl;
		cout << " |    *       *         *          *               |" << endl;
		cout << " | *     *       *          *                      |" << endl;
		cout << " |           *                                 *   |" << endl;
		cout << " |   *            *                        *       |" << endl;
		cout << " |           *  *                       *       *  |" << endl;
		cout << " |  *                  *      *                *   |" << endl;
		cout << " |        *                                *       |" << endl;
		cout << " |            *     *       *       *           *  |" << endl;
		cout << " ---------------------------------------------------" << endl; Sleep(2000); system("cls");			}
			cout << "\n\n\n             How many stars were in the box: ";
		}
	} while (num != 30);
}
int main()
{   int a=400;
    cout<<"\n\n\n\n\n\n";
    cout<<"                             W";Sleep(a);cout<<"E";Sleep(a);cout<<"L";Sleep(a);cout<<"C";Sleep(a);cout<<"O";Sleep(a);
    cout<<"M";Sleep(a);cout<<"E";Sleep(1000);cout<<"\n                               T";Sleep(a);cout<<"O";Sleep(1500);
    cout<<"\n                         J";cout<<"U";Sleep(a);cout<<"M";Sleep(a);cout<<"P";Sleep(a);cout<<"I";Sleep(a);
    cout<<"N";Sleep(a);cout<<"G";Sleep(a);cout<<" * ";Sleep(a);cout<<"S";cout<<"T";Sleep(a);
    cout<<"A";Sleep(a);cout<<"R";Sleep(2000);system("cls");
    cout<<"\n\n\n\n\n\n                             START";Sleep(1000);system("cls");
    cout<<"\n\n\n\n\n\n                           NEW GAME";Sleep(2000);system("cls");
    char name;
    cout << "\n\n\n\n\n\n\n\n\n\n                           L";
	Sleep(1500);
	cout << " O"; Sleep(280); cout << " A"; Sleep(280); cout << " D"; Sleep(280); cout << " I"; Sleep(280);
    cout << " N"; Sleep(280); cout << " G"; Sleep(280); cout << " ."; Sleep(280); cout << " ."; Sleep(280);
    cout << " ."; cout << " ."; Sleep(280); cout << " ."; Sleep(280); cout << " ."; Sleep(280); cout << " ."; Sleep(280);
	cout << " .";  Sleep(400); cout << " ."; Sleep(400); cout << " ."; Sleep(400); cout << " .";  Sleep(400);
	cout << " ."; Sleep(400); cout << " ."; Sleep(400); cout << " .";  Sleep(400);
	system("cls");

	int u;
	for (u = 1; u <= 5; u++)
	{

		cout << "\n";
		cout << "                                                                  " << endl;
		cout << "                                         *                        " << endl;
		cout << "                                      * * * *                     " << endl;
		cout << "                                       *   *                      " << endl;
		cout << "                                      * * * *                     " << endl;
		cout << "                                         *                        " << endl;
		cout << "                                                                  " << endl;
		cout << "                       *                                     *    " << endl;
		cout << "                    * * * *                               * * * * " << endl;
		cout << "                     *   *     J U M P I N G * S T A R     *   *  " << endl;
		cout << "                    * * * *                               * * * * " << endl;
		cout << "                       *                                     *    " << endl;
		cout << "                                                                  " << endl;
		cout << "                                         *                        " << endl;
		cout << "                                      * * * *                     " << endl;
		cout << "                                       *   *                      " << endl;
		cout << "                                      * * * *                     " << endl;
		cout << "                                         *                        " << endl;
		cout << "                                                                  " << endl; Sleep(200); system("cls");
		cout << "\n\n";
		cout << "                                *                                 " << endl;
		cout << "                             * * * *                              " << endl;
		cout << "                              *   *                               " << endl;
		cout << "                             * * * *                              " << endl;
		cout << "                                *                          *      " << endl;
		cout << "                                                        * * * *   " << endl;
		cout << "                                                         *   *    " << endl;
		cout << "                                                        * * * *   " << endl;
		cout << "                                                           *      " << endl;
		cout << "                               J U M P I N G * S T A R            " << endl;
		cout << "                                                                  " << endl;
		cout << "                           *                                      " << endl;
		cout << "                        * * * *                                   " << endl;
		cout << "                         *   *                                    " << endl;
		cout << "                        * * * *                  *                " << endl;
		cout << "                           *                  * * * *             " << endl;
		cout << "                                               *   *              " << endl;
		cout << "                                              * * * *             " << endl;
		cout << "                                                 *                " << endl; Sleep(200); system("cls");
		cout << "\n";
		cout << "                                                                  " << endl;
		cout << "                                                    *             " << endl;
		cout << "                                                 * * * *          " << endl;
		cout << "                                                  *   *           " << endl;
		cout << "                        *                        * * * *          " << endl;
		cout << "                     * * * *                        *             " << endl;
		cout << "                      *   *                                       " << endl;
		cout << "                     * * * *                                      " << endl;
		cout << "                        *                                         " << endl;
		cout << "                               J U M P I N G * S T A R            " << endl;
		cout << "                                                                  " << endl;
		cout << "                                                          *        " << endl;
		cout << "                                                       * * * *    " << endl;
		cout << "                                                        *   *     " << endl;
		cout << "                              *                        * * * *    " << endl;
		cout << "                           * * * *                        *        " << endl;
		cout << "                            *   *                                 " << endl;
		cout << "                           * * * *                                " << endl;
		cout << "                              *                                   " << endl; Sleep(200); system("cls");
		cout << "                                *                                 " << endl;
		cout << "                             * * * *                              " << endl;
		cout << "                              *   *                               " << endl;
		cout << "                             * * * *                              " << endl;
		cout << "                                *                          *      " << endl;
		cout << "                                                        * * * *   " << endl;
		cout << "                                                         *   *    " << endl;
		cout << "                                                        * * * *   " << endl;
		cout << "                                                           *      " << endl;
		cout << "                               J U M P I N G * S T A R            " << endl;
		cout << "                                                                  " << endl;
		cout << "                           *                                      " << endl;
		cout << "                        * * * *                                   " << endl;
		cout << "                         *   *                                    " << endl;
		cout << "                        * * * *                  *                " << endl;
		cout << "                           *                  * * * *             " << endl;
		cout << "                                               *   *              " << endl;
		cout << "                                              * * * *             " << endl;
		cout << "                                                 *                " << endl; Sleep(200); system("cls");

	}

	cout << "\n\n\n\n\n\n\n\n\n                                  L"; Sleep(400);
    cout << "E"; Sleep(400); cout << "V"; Sleep(400); cout << "E"; Sleep(400); cout << "L"; Sleep(400);
    cout << " - 1"; Sleep(400);
	cout << "\n\n\n\n" << "                  YES -> [ Y ]                       NO -> [ N ]" << "\n\n";
	cout << "                                  Press: ";
	char ch;
	cin >> ch;
	system("cls");
	if (ch == 'Y')
	{
		int i; char ch;
		A a;
		B b;
		C c;
		D d;
		E e;
		A *p = &a;
		p->game();
		for (i = 1; i == 1; i++)
		{
			cin >> ch;
			if (ch == 'N'){ system("cls"); break; }
			else if (ch == 'Y'){
				p = &b; p->game();
				cin >> ch;
				if (ch == 'N'){ system("cls"); break; }
				else if (ch == 'Y'){
					p = &c; p->game();
					cin >> ch;
					if (ch == 'N'){ system("cls"); break; }
					else if (ch == 'Y'){
						p = &d; p->game();
						cin >> ch;
						if (ch == 'N'){ system("cls"); break; }
						else if (ch == 'Y'){ p = &e; p->game(); }
					}
				}
			}


if (ch != 'N'&&ch != 'Y'){ system("cls"); cout << "\n\n\n" << "             ---   YOU PRESS WRONG KEYWORD   ---  " << "\n\n";
 Sleep(1000); system("cls"); }
			else{};
		}

	}
	else if (ch == 'N'){ cout << ""; }
	else
	{

		cout << "\n\n\n" << "          ---   YOU PRESS WRONG KEYWORD   ---" << "\n\n"; Sleep(2000); system("cls");
	}

	cout << "\n\n\n\n\n\n" << "                           T"; Sleep(200); cout << "H"; Sleep(200); cout << "A"; Sleep(200);
    cout << "N"; Sleep(200); cout << "K"; Sleep(200); cout << "  Y"; Sleep(200); cout << "O"; Sleep(200);
    cout << "U"; Sleep(200); cout << "  F"; Sleep(200); cout << "O"; Sleep(200); cout << "R"; Sleep(200);
    cout << "  P"; Sleep(200); cout << "L"; Sleep(200); cout << "A"; Sleep(200); cout << "Y"; Sleep(200);
    cout << "I"; Sleep(200); cout << "N"; Sleep(200); cout << "G"; Sleep(200);
	cout << "\n\n\n" << "                          -"; Sleep(200); cout << "-"; Sleep(200); cout << "-"; Sleep(200);
    cout << "  -"; Sleep(200); cout << "-"; Sleep(200); cout << "-"; Sleep(200); cout << "   E"; Sleep(200);
    cout << " N"; Sleep(200); cout << " D"; Sleep(200); cout << "   -"; Sleep(200); cout << "-"; Sleep(200);
    cout << "-"; Sleep(200); cout << "  -"; Sleep(200); cout << "-"; Sleep(200); cout << "-"; Sleep(200);
    cout << "\n\n\n";
	cout << "\n" << "                                                      C"; Sleep(150); cout << "r"; Sleep(150);
    cout << "e"; Sleep(150); cout << "a"; Sleep(150); cout << "t"; Sleep(150); cout << "e"; Sleep(150);
    cout << "d"; Sleep(150); cout << " b"; Sleep(150); cout << "y"; Sleep(150); cout << " : "; Sleep(100);
    cout << "H"; Sleep(100); cout << "A"; Sleep(100); cout << "S"; Sleep(100); cout << "A"; Sleep(100);
    cout << "N"; Sleep(100);cout << "\n"; Sleep(1000); cout << "\n\n";
	return 0;
}
