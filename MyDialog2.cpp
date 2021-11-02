// MyDialog2.cpp: файл реализации
//

#include "pch.h"
#include "MFCApplication5.h"
#include "MyDialog2.h"
#include "afxdialogex.h"
#include "Struct.h"



// Диалоговое окно MyDialog2

IMPLEMENT_DYNAMIC(MyDialog2, CDialogEx)

MyDialog2::MyDialog2(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_SETTINGS, pParent)
{

}

MyDialog2::~MyDialog2()
{
}

void MyDialog2::DoDataExchange(CDataExchange* pDX)
{
    CDialogEx::DoDataExchange(pDX);
    DDX_Control(pDX, IDC_LIST2, MyListCtrl);
}


BEGIN_MESSAGE_MAP(MyDialog2, CDialogEx)
	
   ON_BN_CLICKED(IDC_BUTTON1, &MyDialog2::OnClickedUP)
	ON_NOTIFY(HDN_ITEMCLICK, 0, &MyDialog2::OnHdnItemclickList2)
    ON_NOTIFY(LVN_KEYDOWN, IDC_LIST2, &MyDialog2::OnKeydownList2)
    ON_NOTIFY(NM_RCLICK, IDC_LIST2, &MyDialog2::OnRclickList2)
    ON_NOTIFY(HDN_ITEMDBLCLICK, 0, &MyDialog2::OnItemdblclickList2)
END_MESSAGE_MAP()


// Обработчики сообщений MyDialog2

BOOL MyDialog2::OnInitDialog()
{
    CDialogEx::OnInitDialog();

    // TODO:  Добавить дополнительную инициализацию

  //  CWnd*  hListView = GetDlgItem(IDC_LIST2);

    auto hListView = GetDlgItem(IDC_LIST2);

    //LVITEM item;
    //item.mask = LVIF_TEXT;
    //item.pszText = _T("Column 1");
    //item.iSubItem = 0;
    //item.iItem = 0;
    //item.cchTextMax = 10;
    //auto ret = ListView_InsertItem(hListView->m_hWnd, &item);

    //LVITEM item1;
    //item1.mask = LVIF_TEXT;
    //item1.pszText = _T("Column 2");
    //item1.iSubItem = 0;
    //item1.iItem = 1;
    //item1.cchTextMax = 10;
    //ret = ListView_InsertItem(hListView->m_hWnd, &item1);

    ListView_SetExtendedListViewStyle(hListView->m_hWnd, LVS_EX_CHECKBOXES);
    
    MyListCtrl.InsertItem(0, _T("Column 1"));
    MyListCtrl.InsertItem(1, _T("Column 2"));
    MyListCtrl.InsertItem(2, _T("Column 3"));
    return TRUE;  // return TRUE unless you set the focus to a control
                  // Исключение: страница свойств OCX должна возвращать значение FALSE
}


void MyDialog2::OnClickedUP()
{
    // TODO: добавьте свой код обработчика уведомлений
 
    //*pResult = 0;
    LVITEM item;
   // auto hListView = GetDlgItem(IDC_LIST2);
    int Hotindex = MyListCtrl.GetHotItem();
    //int checked = MyListCtrl.GetCheck(Hotindex);

    //// MyListCtrl.SetItemPosition(Hotindex);
    //MyListCtrl.DeleteAllItems();
    //switch (Hotindex)
    //{
    ////case 0:
    ////{
    ////     MyListCtrl.InsertItem(0, _T("Column 2"));
    ////     MyListCtrl.InsertItem(1, _T("Column 1"));
    ////     MyListCtrl.InsertItem(2, _T("Column 3"));
    ////}
    //case 1:
    //{
    //    
    //    //item.mask = LVIF_TEXT;
    //    //item.pszText = _T("Column 1");
    //    //item.iSubItem = 0;
    //    //item.iItem = 0;
    //    //item.cchTextMax = 10;
    //    //auto ret = ListView_InsertItem(hListView->m_hWnd, &item);

    //    //LVITEM item1;
    //    //item1.mask = LVIF_TEXT;
    //    //item1.pszText = _T("Column 2");
    //    //item1.iSubItem = 0;
    //    //item1.iItem = 1;
    //    //item1.cchTextMax = 10;
    //    //ret = ListView_InsertItem(hListView->m_hWnd, &item1);
    //    MyListCtrl.InsertItem(0, _T("Column 2"));
    //    MyListCtrl.InsertItem(1, _T("Column 1"));
    //    MyListCtrl.InsertItem(2, _T("Column 3"));
    //}
    //case 2:
    //{
    //    MyListCtrl.InsertItem(0, _T("Column 1"));
    //    MyListCtrl.InsertItem(1, _T("Column 3"));
    //    MyListCtrl.InsertItem(2, _T("Column 2"));
    //}
    //}

    // //MyListCtrl.MoveItemToGroup();

    //MyListCtrl.GetItem(&item);
    //MyListCtrl.SetHotItem(2);
    //MyListCtrl.GetItem(&item);

    //LVITEM item1 = { 0 };
    //item1.mask = LVIF_TEXT;
    //item1.pszText = _T("text");
    ////item1.cchTextMax = strlen(item1.pszText) + 1;
    //item1.iSubItem = 0;
    //item1.iItem = Hotindex;
    //MyListCtrl.InsertItem(&item1);
    //// item1.iSubItem = 1;//по идеи теперь вставка во вторую колонку должна быть.
    ////MyListCtrl.InsertItem(&item1);

    //MyListCtrl.InsertItem(&item);
}


void MyDialog2::OnHdnItemclickList2(NMHDR* pNMHDR, LRESULT* pResult)
{
	LPNMHEADER phdr = reinterpret_cast<LPNMHEADER>(pNMHDR);
	// TODO: добавьте свой код обработчика уведомлений
	*pResult = 0;
}


void MyDialog2::OnKeydownList2(NMHDR* pNMHDR, LRESULT* pResult)
{
    LPNMLVKEYDOWN pLVKeyDow = reinterpret_cast<LPNMLVKEYDOWN>(pNMHDR);
    // TODO: добавьте свой код обработчика уведомлений
    *pResult = 0;
    LVITEM item;
    int Hotindex = MyListCtrl.GetHotItem();
    int checked = MyListCtrl.GetCheck(Hotindex);

   // MyListCtrl.SetItemPosition(Hotindex);

    //MyListCtrl.MoveItemToGroup();
    
    //MyListCtrl.GetItem(Hotindex);
   // MyListCtrl.SetHotItem(2);
    MyListCtrl.GetItem(&item);

    LVITEM item1 = { 0 };
    item1.mask = LVIF_TEXT;
    //item1.pszText = _T("text");
    ////item1.cchTextMax = strlen(item1.pszText) + 1;
    //item1.iSubItem = 0;
    item1.iItem = Hotindex;

    
    CString sTextFromList= MyListCtrl.GetItemText(Hotindex, 0);//сюда поместим текст.
    item1.pszText = sTextFromList;

    //int iIndex;   //хранит номер вделенной строки
    //iIndex = MyListCtrl.GetCurSel();     // получение номера выделенной строки.
    //MyListCtrl.GetText(iIndex, sTextFromList);   //засовываем текст N строки в буф.
    //MessageBox(sTextFromList);   //выводим выделенную строку.

    MyListCtrl.GetItemData(Hotindex);
    MyListCtrl.DeleteItem(Hotindex);
    item1.iItem = Hotindex-1;
    MyListCtrl.InsertItem(&item1);
   // item1.iSubItem = 1;//по идеи теперь вставка во вторую колонку должна быть.
   //MyListCtrl.InsertItem(&item1);

    MyListCtrl.InsertItem(&item);
}


void MyDialog2::OnRclickList2(NMHDR* pNMHDR, LRESULT* pResult)
{
    LPNMITEMACTIVATE pNMItemActivate = reinterpret_cast<LPNMITEMACTIVATE>(pNMHDR);
    // TODO: добавьте свой код обработчика уведомлений
    *pResult = 0;
    int Hotindex = MyListCtrl.GetHotItem();
}


void MyDialog2::OnItemdblclickList2(NMHDR* pNMHDR, LRESULT* pResult)
{
    LPNMHEADER phdr = reinterpret_cast<LPNMHEADER>(pNMHDR);
    // TODO: добавьте свой код обработчика уведомлений
    *pResult = 0;
}
