#ifndef ABOUT_H
#define ABOUT_H

#include <Window.h>
#include <StringView.h>
#include <Button.h>

class AboutBox : public BWindow 
{
	BStringView* Info1;
	BStringView* Info2;
	BStringView* Info3;
	BStringView* Info4;
	BStringView* Info5;
	BButton* Bouton;
	BButton* Web;
	
 public:
	AboutBox();
	virtual void MessageReceived(BMessage* message);

};

#endif
