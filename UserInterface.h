//
// Created by Lautaro Cavichia on 06/11/23.
//

#ifndef PASSWORDGENERATOR_USERINTERFACE_H
#define PASSWORDGENERATOR_USERINTERFACE_H

#include "RandomGenerator.h"
#include <wx/wx.h>

class UserInterface: public wxFrame {
public:
    UserInterface(const wxString &title, const wxPoint &pos, const wxSize &size);

private:
    void OnGenerate(wxCommandEvent &event);

    void OnExit(wxCommandEvent &event);

    void OnAbout(wxCommandEvent &event);

    wxTextCtrl *passwordText;
    wxTextCtrl *lengthTextCtrl;
    wxCheckBox *upperCaseCheckBox;
    wxCheckBox *lowerCaseCheckBox;
    wxCheckBox *numbersCheckBox;
    wxCheckBox *symbolsCheckBox;
    wxButton *generateButton;
    wxButton *exitButton;
    wxButton *aboutButton;
};


#endif //PASSWORDGENERATOR_USERINTERFACE_H
