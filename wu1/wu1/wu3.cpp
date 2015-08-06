// wu3.cpp : implementation file
//

#include "stdafx.h"
#include "wu1.h"
#include "wu3.h"
#include "afxdialogex.h"


// wu3 dialog

IMPLEMENT_DYNAMIC(wu3, CDialogEx)

wu3::wu3(CWnd* pParent /*=NULL*/)
	: CDialogEx(wu3::IDD, pParent)
{

}

wu3::~wu3()
{
}

void wu3::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(wu3, CDialogEx)
	ON_NOTIFY(TVN_SELCHANGED, IDC_TREE1, &wu3::OnTvnSelchangedTree1)
END_MESSAGE_MAP()


// wu3 message handlers


void wu3::OnTvnSelchangedTree1(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMTREEVIEW pNMTreeView = reinterpret_cast<LPNMTREEVIEW>(pNMHDR);
	// TODO: Add your control notification handler code here
	*pResult = 0;
}
