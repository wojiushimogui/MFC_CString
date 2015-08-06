#pragma once


// wu2Dlg dialog

class wu2Dlg : public CDialogEx
{
	DECLARE_DYNAMIC(wu2Dlg)

public:
	wu2Dlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~wu2Dlg();

// Dialog Data
	enum { IDD = IDD_plus };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	// 瓜受方
	double m_number1;
	// 受方
	double m_number2;
	// 餓
	double m_diff;
	afx_msg void OnBnClickedcalculate();
};
