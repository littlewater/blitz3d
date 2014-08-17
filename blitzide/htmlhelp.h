
#ifndef HTMLHELP_H
#define HTMLHELP_H

class Htmlhelp;

class HelpListener{
public:
	virtual void helpOpen( Htmlhelp *help,const string &file )=0;
	virtual void helpTitleChange( Htmlhelp *help,const string &title )=0;
};

class Htmlhelp : public CHtmlView{
public:
	Htmlhelp( HelpListener *l ):listener(l){}

	string getTitle();

DECLARE_DYNAMIC( Htmlhelp )
DECLARE_MESSAGE_MAP()

	afx_msg BOOL OnEraseBkgnd( CDC *dc );

private:
	virtual void OnTitleChange( LPCTSTR t );
	virtual void OnBeforeNavigate2( LPCTSTR lpszURL, DWORD nFlags, LPCTSTR lpszTargetFrameName, CByteArray& baPostedData, LPCTSTR lpszHeaders, BOOL* pbCancel );

	string title;
	HelpListener *listener;
};

#endif
