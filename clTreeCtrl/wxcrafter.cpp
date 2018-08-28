//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: wxcrafter.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "wxcrafter.h"

// Declare the bitmap loading function
extern void wxC9ED9InitBitmapResources();

static bool bBitmapLoaded = false;

MainFrameBaseClass::MainFrameBaseClass(
    wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style)
    : wxFrame(parent, id, title, pos, size, style)
{
    if(!bBitmapLoaded) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxC9ED9InitBitmapResources();
        bBitmapLoaded = true;
    }

    wxBoxSizer* boxSizer1 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer1);

    m_mainPanel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(this, wxSize(500, 300)), wxTAB_TRAVERSAL);

    boxSizer1->Add(m_mainPanel, 1, wxEXPAND, WXC_FROM_DIP(5));

    wxBoxSizer* boxSizer11 = new wxBoxSizer(wxVERTICAL);
    m_mainPanel->SetSizer(boxSizer11);

    m_stc15
        = new wxStyledTextCtrl(m_mainPanel, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_mainPanel, wxSize(-1, -1)), 0);
#ifdef __WXMSW__
    // To get the newer version of the font on MSW, we use font wxSYS_DEFAULT_GUI_FONT with family set to
    // wxFONTFAMILY_TELETYPE
    wxFont m_stc15Font = wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT);
    m_stc15Font.SetFamily(wxFONTFAMILY_TELETYPE);
#else
    wxFont m_stc15Font = wxSystemSettings::GetFont(wxSYS_ANSI_FIXED_FONT);
    m_stc15Font.SetFamily(wxFONTFAMILY_TELETYPE);
#endif
    m_stc15->SetFont(m_stc15Font);
    // Configure the fold margin
    m_stc15->SetMarginType(4, wxSTC_MARGIN_SYMBOL);
    m_stc15->SetMarginMask(4, wxSTC_MASK_FOLDERS);
    m_stc15->SetMarginSensitive(4, true);
    m_stc15->SetMarginWidth(4, 0);

    // Configure the tracker margin
    m_stc15->SetMarginWidth(1, 0);

    // Configure the symbol margin
    m_stc15->SetMarginType(2, wxSTC_MARGIN_SYMBOL);
    m_stc15->SetMarginMask(2, ~(wxSTC_MASK_FOLDERS));
    m_stc15->SetMarginWidth(2, 0);
    m_stc15->SetMarginSensitive(2, true);

    // Configure the line numbers margin
    m_stc15->SetMarginType(0, wxSTC_MARGIN_NUMBER);
    m_stc15->SetMarginWidth(0, 0);

    // Configure the line symbol margin
    m_stc15->SetMarginType(3, wxSTC_MARGIN_FORE);
    m_stc15->SetMarginMask(3, 0);
    m_stc15->SetMarginWidth(3, 0);
    // Select the lexer
    m_stc15->SetLexer(wxSTC_LEX_NULL);
    // Set default font / styles
    m_stc15->StyleClearAll();
    for(int i = 0; i < wxSTC_STYLE_MAX; ++i) { m_stc15->StyleSetFont(i, m_stc15Font); }
    m_stc15->SetWrapMode(0);
    m_stc15->SetIndentationGuides(0);
    m_stc15->SetKeyWords(0, wxT(""));
    m_stc15->SetKeyWords(1, wxT(""));
    m_stc15->SetKeyWords(2, wxT(""));
    m_stc15->SetKeyWords(3, wxT(""));
    m_stc15->SetKeyWords(4, wxT(""));

    boxSizer11->Add(m_stc15, 1, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    m_menuBar = new wxMenuBar(0);
    this->SetMenuBar(m_menuBar);

    m_name6 = new wxMenu();
    m_menuBar->Append(m_name6, _("File"));

    m_menuItem7 = new wxMenuItem(m_name6, wxID_EXIT, _("Exit\tAlt-X"), _("Quit"), wxITEM_NORMAL);
    m_name6->Append(m_menuItem7);

    m_menuItem13 = new wxMenuItem(m_name6, ID_SCROLL, _("Scroll Window"), wxT(""), wxITEM_NORMAL);
    m_name6->Append(m_menuItem13);

    m_name8 = new wxMenu();
    m_menuBar->Append(m_name8, _("Help"));

    m_menuItem9 = new wxMenuItem(m_name8, wxID_ABOUT, _("About..."), wxT(""), wxITEM_NORMAL);
    m_name8->Append(m_menuItem9);

    SetName(wxT("MainFrameBaseClass"));
    SetSize(500, 300);
    if(GetSizer()) { GetSizer()->Fit(this); }
    if(GetParent()) {
        CentreOnParent(wxBOTH);
    } else {
        CentreOnScreen(wxBOTH);
    }
#if wxVERSION_NUMBER >= 2900
    if(!wxPersistenceManager::Get().Find(this)) {
        wxPersistenceManager::Get().RegisterAndRestore(this);
    } else {
        wxPersistenceManager::Get().Restore(this);
    }
#endif
    // Connect events
    this->Connect(m_menuItem7->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrameBaseClass::OnExit),
        NULL, this);
    this->Connect(m_menuItem13->GetId(), wxEVT_COMMAND_MENU_SELECTED,
        wxCommandEventHandler(MainFrameBaseClass::OnScroll), NULL, this);
    this->Connect(m_menuItem9->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrameBaseClass::OnAbout),
        NULL, this);
}

MainFrameBaseClass::~MainFrameBaseClass()
{
    this->Disconnect(m_menuItem7->GetId(), wxEVT_COMMAND_MENU_SELECTED,
        wxCommandEventHandler(MainFrameBaseClass::OnExit), NULL, this);
    this->Disconnect(m_menuItem13->GetId(), wxEVT_COMMAND_MENU_SELECTED,
        wxCommandEventHandler(MainFrameBaseClass::OnScroll), NULL, this);
    this->Disconnect(m_menuItem9->GetId(), wxEVT_COMMAND_MENU_SELECTED,
        wxCommandEventHandler(MainFrameBaseClass::OnAbout), NULL, this);
}
