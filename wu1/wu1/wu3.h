#pragma once


// wu3 dialog

class wu3 : public CDialogEx
{
	DECLARE_DYNAMIC(wu3)

public:
	wu3(CWnd* pParent = NULL);   // standard constructor
	virtual ~wu3();

// Dialog Data
	enum { IDD = IDD_wu3_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTvnSelchangedTree1(NMHDR *pNMHDR, LRESULT *pResult);
};
