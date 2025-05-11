//
// Created by Raphael Sinai on 11/05/2025.
//

#include "BLEPanel.h"

BLEPanel::BLEPanel(std::vector<Person *> persons) : persons(persons)
{}

wxPanel *BLEPanel::get_panel(wxWindow *parent) {
    wxPanel* main_panel = new wxPanel(parent);
    std::vector<wxPanel*> panels;

    for (Person* person : persons) {
        panels.push_back(person->getPanel(main_panel));
    }

    wxBoxSizer *main_box = new wxBoxSizer(wxVERTICAL);
    wxSizerFlags flags = wxSizerFlags(1).Border(wxBOTTOM, 10);

    for (wxPanel* panel : panels) {
        main_box->Add(panel, flags);
    }

    main_panel->SetSizer(main_box);
    main_box->SetSizeHints(parent);

    return main_panel;
}
