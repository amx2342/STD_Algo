//#include <cstring>
//#include <iostream>
//#include "Menu.h"
//using namespace std;
//
//OfferMenu::OfferMenu() {} //����Ʈ ������
//
//OfferMenu::OfferMenu(const OfferMenu& copy)
//{
//    cout << " --------- MENU --------- " << "\n";
//
//}
//
//OfferMenu::ShowMenu(OfferMenu ob)
//{
//    cout << "|   OksusuButter   3000  |" << "\n";
//    cout << "|   JjamBbong      8000  |" << "\n";
//    cout << "|   GongCha      5000  |" << "\n";
//    cout << "|   HotDogSet      6000  |" << "\n";
//    cout << "|   KolPop         4500  |" << "\n";
//    cout << " ------------------------ " << "\n";
//}
//
//explicit int OfferMenu::SaleMenu(char* WantMenu, int num)
//{
//    int len = strlen(WantMenu) + 1;
//    Menu = new char[len];
//    strcpy(Menu, WantMenu);
//    this->num = num;
//
//    if (Menu == "OksusuButter")
//        price += 3000 * num;
//
//    if (Menu == "JjamBbong")
//        price += 8000 * num;
//
//    if (Menu == "GongChar")
//        price += 5000 * num;
//
//    if (Menu == "HotDogSet")
//        price += 6000 * num;
//
//    if (Menu == "KolPop")
//        price += 4500 * num;
//}
//
//OfferMenu::~OfferMenu()
//{
//    delete[]Menu;
//}
//
//void OfferMenu::ShowSaleFood()
//{
//    cout << "�ֹ��Ͻ� �޴� " << Menu << " �� " << num << "�� �ֹ��ϼ̽��ϴ�." << endl;
//    cout << "�� ������ " << price << "�� �Դϴ�." << endl;
//}