//
// Created by Raphael Sinai on 11/05/2025.
//

#include "Person.h"

Person::Person(wxString name, wxString bio, wxBitmap image) : name(name), bio(bio), image(image)
{}

wxPanel* Person::getPanel(wxWindow* parent) {
    wxPanel* main_panel = new wxPanel(parent, wxID_ANY);
    wxPanel* text_panel = new wxPanel(main_panel, wxID_ANY);

    wxFont font(16, wxFONTFAMILY_MODERN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_LIGHT);

    wxStaticText* display_name = new wxStaticText(text_panel, wxID_ANY, name);
    wxStaticText* display_bio = new wxStaticText(text_panel, wxID_ANY, bio);
    display_name->SetFont(font.Bold());
    display_bio->SetFont(font);

    wxStaticBitmap* display_image = new wxStaticBitmap(main_panel, wxID_ANY, image, wxDefaultPosition, wxSize(100, 100));

    wxBoxSizer* textbox = new wxBoxSizer(wxVERTICAL);
    wxSizerFlags textflags = wxSizerFlags(1).Align(wxLEFT);
    textbox->AddStretchSpacer();
    textbox->Add(display_name, textflags);
    textbox->AddStretchSpacer();
    textbox->Add(display_bio, textflags);
    textbox->AddStretchSpacer();

    text_panel->SetSizer(textbox);
    // textbox->SetSizeHints(main_panel);

    wxBoxSizer* mainbox = new wxBoxSizer(wxHORIZONTAL);
    wxSizerFlags main_flags = wxSizerFlags(1).CenterVertical();
    mainbox->Add(display_image, main_flags.Border(wxRIGHT, 25));
    mainbox->Add(text_panel, main_flags.Border(wxLEFT, 25));

    main_panel->SetSizer(mainbox);

    return main_panel;
}

wxString Person::getName() {
    return name;
}
