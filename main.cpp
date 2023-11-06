#include <iostream>
#include "RandomGenerator.h"
#include "UserInterface.h"
#include <wx/wx.h>

class MyApp : public wxApp {
public:
    virtual bool OnInit();
};

wxIMPLEMENT_APP(MyApp);

bool MyApp::OnInit() {
    UserInterface* frame = new UserInterface("Password Generator", wxPoint(50, 50), wxSize(450, 340));
    frame->Show(true);
    return true;
}
