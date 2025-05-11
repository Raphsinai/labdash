//
// Created by Raphael Sinai on 11/05/2025.
//

#ifndef PERSON_H
#define PERSON_H

#include <wx/wx.h>

class Person {
public:
    Person(wxString name, wxString bio, wxBitmap image);
    wxPanel* getPanel(wxWindow* parent);

    // TODO: delete this
    wxString getName();
    // END TODO
private:
    wxString name;
    wxString bio;
    wxBitmap image;
};



#endif //PERSON_H
