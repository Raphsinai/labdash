//
// Created by Raphael Sinai on 10/05/2025.
//

#include "MainFrame.h"
#include "Dialog.h"
#include "Person.h"
#include "BLEPanel.h"
#include <wx/image.h>

MainFrame::MainFrame(wxString title) : wxFrame(NULL, wxID_ANY, title) {
    wxPanel* main_panel = new wxPanel(this, wxID_ANY);

    main_panel->SetBackgroundColour(wxColour(0, 132, 255));
    wxInitAllImageHandlers();

    wxImage logo("/Users/raphsinai/Documents/ICRS/lab_dashboard/src/labdash/assets/images/icrs-logo.png", wxBITMAP_TYPE_PNG);
    wxBitmap bitmap(logo);

    wxStaticBitmap* display_logo = new wxStaticBitmap(main_panel, wxID_ANY, bitmap, wxPoint(50, 50), wxSize(100, 100));

    wxPanel* content_panel = new wxPanel(main_panel, wxID_ANY);

    std::vector<Person*> persons;
    Person* person1 = new Person("raph", "likes poo", bitmap);
    persons.push_back(person1);
    Person* person2 = new Person("raph2222", "gooner", bitmap);
    persons.push_back(person2);

    Person* person3 = new Person("alice", "loves science", bitmap);
    persons.push_back(person3);

    Person* person4 = new Person("bob", "enjoys hiking", bitmap);
    persons.push_back(person4);

    Person* person5 = new Person("carol", "robotics enthusiast", bitmap);
    persons.push_back(person5);

    Person* person6 = new Person("dave", "coffee addict", bitmap);
    persons.push_back(person6);

    BLEPanel* ble_panel = new BLEPanel(persons);
    wxPanel* bl_panel = ble_panel->get_panel(content_panel);

    wxBoxSizer* contentbox = new wxBoxSizer(wxHORIZONTAL);

    wxSizerFlags flags = wxSizerFlags(1).Align(wxLEFT).CenterVertical();
    contentbox->Add(bl_panel, flags);
    content_panel->SetSizer(contentbox);
    contentbox->SetSizeHints(main_panel);

    wxBoxSizer* mainbox = new wxBoxSizer(wxVERTICAL);
    mainbox->Add(display_logo, wxSizerFlags(0).Align(wxLEFT).Border(wxTOP | wxLEFT, 50));
    mainbox->Add(content_panel, wxSizerFlags(0).Align(wxLEFT).Border(wxTOP, 50).Expand());
    main_panel->SetSizer(mainbox);
    mainbox->SetSizeHints(this);
}


