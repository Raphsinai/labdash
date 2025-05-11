//
// Created by Raphael Sinai on 11/05/2025.
//

#ifndef BLEPANEL_H
#define BLEPANEL_H

#include <wx/wx.h>
#include <vector>
#include "Person.h"

class BLEPanel {
public:
    BLEPanel(std::vector<Person*> persons);

    wxPanel* get_panel(wxWindow* parent);
private:
    std::vector<Person*> persons;
};



#endif //BLEPANEL_H
