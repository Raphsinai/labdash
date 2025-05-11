//
// Created by Raphael Sinai on 11/05/2025.
//

#include "Dialog.h"

Dialog::Dialog(wxWindow* parent ,wxString title, wxString message) : wxDialog(parent, wxID_ANY, title) {
    wxStaticText* text = new wxStaticText(this, wxID_ANY, message);
    wxButton* btn = new wxButton(this, wxID_ANY, wxT("OK"));
    wxBoxSizer* mainSizer = new wxBoxSizer(wxVERTICAL);
    wxSizerFlags flags = wxSizerFlags(0).Center().Border(wxALL, 25);
    mainSizer->Add(text, flags);
    mainSizer->Add(btn, flags);
    this->SetSizerAndFit(mainSizer);

    btn->Bind(wxEVT_BUTTON, &Dialog::btn_pressed, this);
}

void Dialog::btn_pressed(wxCommandEvent &event) {
    this->Destroy();
}

