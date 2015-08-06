// wu2Dlg.cpp : implementation file
//

#include "stdafx.h"
#include "wu1.h"
#include "wu2Dlg.h"
#include "afxdialogex.h"


// wu2Dlg dialog

IMPLEMENT_DYNAMIC(wu2Dlg, CDialogEx)

wu2Dlg::wu2Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(wu2Dlg::IDD, pParent)
	, m_number1(0)
	, m_number2(0)
	, m_diff(0)
{

}

wu2Dlg::~wu2Dlg()
{
}

void wu2Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_NUMBER1_EDIT, m_number1);
	DDX_Text(pDX, IDC_NUMBER2_EDIT, m_number2);
	DDX_Text(pDX, IDC_NUMBER3_EDIT, m_diff);
}


BEGIN_MESSAGE_MAP(wu2Dlg, CDialogEx)	
	ON_BN_CLICKED(ID_calculate, &wu2Dlg::OnBnClickedcalculate)
END_MESSAGE_MAP()


// wu2Dlg message handlers



void wu2Dlg::OnBnClickedcalculate()
{
	// TODO: Add your control notification handler code here
	UpdateData();//将控件中的值传给变量
	m_diff=m_number1-m_number2;
	UpdateData(false);
}
