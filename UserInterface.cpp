//
// Created by Lautaro Cavichia on 06/11/23.
//

#include "UserInterface.h"

UserInterface::UserInterface(const wxString &title, const wxPoint &pos, const wxSize &size):wxFrame(NULL,wxID_ANY,title,pos,size) {

    wxPanel* panel = new wxPanel(this, wxID_ANY);

    wxBoxSizer* vSizer = new wxBoxSizer(wxVERTICAL);

    wxStaticText* lengthLabel = new wxStaticText(panel, wxID_ANY, wxT("Password Length:"));
    lengthTextCtrl = new wxTextCtrl(panel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);

    upperCaseCheckBox = new wxCheckBox(panel, wxID_ANY, wxT("Include Uppercase"));
    lowerCaseCheckBox = new wxCheckBox(panel, wxID_ANY, wxT("Include Lowercase"));
    numbersCheckBox = new wxCheckBox(panel, wxID_ANY, wxT("Include Numbers"));
    symbolsCheckBox = new wxCheckBox(panel, wxID_ANY, wxT("Include Symbols"));

    generateButton = new wxButton(panel, wxID_ANY, wxT("Generate"));
    passwordText = new wxTextCtrl(panel, wxID_ANY, wxT(""), wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE | wxTE_READONLY);

    vSizer->Add(lengthLabel, 0, wxALL, 5);
    vSizer->Add(lengthTextCtrl, 0, wxEXPAND | wxALL, 5);
    vSizer->Add(upperCaseCheckBox, 0, wxALL, 5);
    vSizer->Add(lowerCaseCheckBox, 0, wxALL, 5);
    vSizer->Add(numbersCheckBox, 0, wxALL, 5);
    vSizer->Add(symbolsCheckBox, 0, wxALL, 5);
    vSizer->Add(generateButton, 0, wxALL | wxALIGN_CENTER, 5);
    vSizer->Add(passwordText, 1, wxEXPAND | wxALL, 5);

    panel->SetSizer(vSizer);

    generateButton->Bind(wxEVT_BUTTON, &UserInterface::OnGenerate, this);
}

void UserInterface::OnGenerate(wxCommandEvent& event) {
    int length;
    lengthTextCtrl->GetValue().ToInt(&length);
    bool upperCase = upperCaseCheckBox->IsChecked();
    bool lowerCase = lowerCaseCheckBox->IsChecked();
    bool numbers = numbersCheckBox->IsChecked();
    bool symbols = symbolsCheckBox->IsChecked();
    RandomGenerator Generator;

    std::string password = Generator.generatePassword(length, upperCase, lowerCase, numbers, symbols);
    passwordText->SetValue(password);
}