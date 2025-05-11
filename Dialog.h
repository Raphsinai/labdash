//
// Created by Raphael Sinai on 11/05/2025.
//

#ifndef DIALOG_H
#define DIALOG_H

#include <wx/wx.h>

class Dialog : public wxDialog {
public:
    Dialog(wxWindow* parent, wxString title, wxString message);
    void btn_pressed(wxCommandEvent& event);
};



#endif //DIALOG_H
