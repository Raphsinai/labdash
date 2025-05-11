//
// Created by Raphael Sinai on 10/05/2025.
//

#include "App.h"
#include "MainFrame.h"


bool App::OnInit() {
    MainFrame* main_frame = new MainFrame("test");
    main_frame->Show();
    main_frame->EnableFullScreenView();
    main_frame->ShowFullScreen(true);
    main_frame->Center();
    return true;
}

wxIMPLEMENT_APP(App);