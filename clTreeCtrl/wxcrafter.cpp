//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: wxcrafter.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "wxcrafter.h"

// Declare the bitmap loading function
extern void wxC9ED9InitBitmapResources();

static bool bBitmapLoaded = false;

MainFrameBaseClass::MainFrameBaseClass(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos,
                                       const wxSize& size, long style)
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

    m_mainPanel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), wxTAB_TRAVERSAL);

    boxSizer1->Add(m_mainPanel, 1, wxEXPAND, WXC_FROM_DIP(5));

    wxBoxSizer* boxSizer11 = new wxBoxSizer(wxVERTICAL);
    m_mainPanel->SetSizer(boxSizer11);

    m_textCtrlLog = new wxTextCtrl(m_mainPanel, wxID_ANY, wxT(""), wxDefaultPosition,
                                   wxDLG_UNIT(m_mainPanel, wxSize(-1, 150)), wxTE_RICH | wxTE_MULTILINE);

    boxSizer11->Add(m_textCtrlLog, 0, wxEXPAND, WXC_FROM_DIP(5));

    m_menuBar = new wxMenuBar(0);
    this->SetMenuBar(m_menuBar);

    File = new wxMenu();
    m_menuBar->Append(File, _("File"));

    m_menuItem13 = new wxMenuItem(File, ID_OPEN_FOLDER, _("Open folder..."), wxT(""), wxITEM_NORMAL);
    File->Append(m_menuItem13);

    File->AppendSeparator();

    m_menuItemExpandAll = new wxMenuItem(File, wxID_ANY, _("Expand All"), wxT(""), wxITEM_NORMAL);
    File->Append(m_menuItemExpandAll);

    m_menuItemCollapseAll = new wxMenuItem(File, wxID_ANY, _("Collapse All"), wxT(""), wxITEM_NORMAL);
    File->Append(m_menuItemCollapseAll);

    m_menuItemFirstVisible = new wxMenuItem(File, wxID_ANY, _("First Visible Item\tShift-F4"), wxT(""), wxITEM_NORMAL);
    File->Append(m_menuItemFirstVisible);

    m_menuItemNextVisibleItem = new wxMenuItem(File, wxID_ANY, _("Next Visible Item\tF4"), wxT(""), wxITEM_NORMAL);
    File->Append(m_menuItemNextVisibleItem);

    m_menuItemEnsureVisible = new wxMenuItem(File, wxID_ANY, _("Ensure Item Visible"), wxT(""), wxITEM_NORMAL);
    File->Append(m_menuItemEnsureVisible);

    m_menuItemSelectChildren = new wxMenuItem(File, ID_SELECT_CHILDREN, _("Select Children"), wxT(""), wxITEM_NORMAL);
    File->Append(m_menuItemSelectChildren);

    m_menuItemNextSibling = new wxMenuItem(File, ID_NEXT_SIBLING, _("Next Sibling\tF2"), wxT(""), wxITEM_NORMAL);
    File->Append(m_menuItemNextSibling);

    m_menuItemPrevSibling = new wxMenuItem(File, ID_PREV_SIBLING, _("Prev Sibling\tShift-F2"), wxT(""), wxITEM_NORMAL);
    File->Append(m_menuItemPrevSibling);

    File->AppendSeparator();

    m_menuItemExit = new wxMenuItem(File, wxID_EXIT, _("Exit\tAlt-X"), _("Quit"), wxITEM_NORMAL);
    File->Append(m_menuItemExit);

    m_menu53 = new wxMenu();
    m_menuBar->Append(m_menu53, _("Style"));

    m_menuItemZebra = new wxMenuItem(m_menu53, ID_ZEBRA, _("Zebra Colouring..."), wxT(""), wxITEM_CHECK);
    m_menu53->Append(m_menuItemZebra);

    m_menuItemThemes = new wxMenuItem(m_menu53, ID_TOGGLE_THEMES, _("Toggle Themes"), wxT(""), wxITEM_NORMAL);
    m_menu53->Append(m_menuItemThemes);

    m_menuItemHideRoot = new wxMenuItem(m_menu53, ID_HIDE_ROOT, _("Hide Root"), wxT(""), wxITEM_CHECK);
    m_menu53->Append(m_menuItemHideRoot);

    m_menuItemSingleSelection =
        new wxMenuItem(m_menu53, ID_SINGLE_SELECTION, _("Single Selection Tree"), wxT(""), wxITEM_CHECK);
    m_menu53->Append(m_menuItemSingleSelection);

    m_menuItemShowSBOnFocus =
        new wxMenuItem(m_menu53, ID_SHOW_SB_ON_FOCUS, _("Show Scrollbar when focused Only"), wxT(""), wxITEM_CHECK);
    m_menu53->Append(m_menuItemShowSBOnFocus);

    SetName(wxT("MainFrameBaseClass"));
    SetSize(wxDLG_UNIT(this, wxSize(-1, -1)));
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
    this->Connect(m_menuItem13->GetId(), wxEVT_COMMAND_MENU_SELECTED,
                  wxCommandEventHandler(MainFrameBaseClass::OnOpenFolder), NULL, this);
    this->Connect(m_menuItemExpandAll->GetId(), wxEVT_COMMAND_MENU_SELECTED,
                  wxCommandEventHandler(MainFrameBaseClass::OnExpandAll), NULL, this);
    this->Connect(m_menuItemCollapseAll->GetId(), wxEVT_COMMAND_MENU_SELECTED,
                  wxCommandEventHandler(MainFrameBaseClass::OnCollapseAll), NULL, this);
    this->Connect(m_menuItemFirstVisible->GetId(), wxEVT_COMMAND_MENU_SELECTED,
                  wxCommandEventHandler(MainFrameBaseClass::OnFirstVisible), NULL, this);
    this->Connect(m_menuItemNextVisibleItem->GetId(), wxEVT_COMMAND_MENU_SELECTED,
                  wxCommandEventHandler(MainFrameBaseClass::OnNextVisible), NULL, this);
    this->Connect(m_menuItemEnsureVisible->GetId(), wxEVT_COMMAND_MENU_SELECTED,
                  wxCommandEventHandler(MainFrameBaseClass::OnEnsureItemVisible), NULL, this);
    this->Connect(m_menuItemSelectChildren->GetId(), wxEVT_COMMAND_MENU_SELECTED,
                  wxCommandEventHandler(MainFrameBaseClass::OnSelectChildren), NULL, this);
    this->Connect(m_menuItemNextSibling->GetId(), wxEVT_COMMAND_MENU_SELECTED,
                  wxCommandEventHandler(MainFrameBaseClass::OnNextSibling), NULL, this);
    this->Connect(m_menuItemPrevSibling->GetId(), wxEVT_COMMAND_MENU_SELECTED,
                  wxCommandEventHandler(MainFrameBaseClass::OnPrevSibling), NULL, this);
    this->Connect(m_menuItemExit->GetId(), wxEVT_COMMAND_MENU_SELECTED,
                  wxCommandEventHandler(MainFrameBaseClass::OnExit), NULL, this);
    this->Connect(m_menuItemZebra->GetId(), wxEVT_COMMAND_MENU_SELECTED,
                  wxCommandEventHandler(MainFrameBaseClass::OnZebraColouring), NULL, this);
    this->Connect(m_menuItemThemes->GetId(), wxEVT_COMMAND_MENU_SELECTED,
                  wxCommandEventHandler(MainFrameBaseClass::OnToggleTheme), NULL, this);
    this->Connect(m_menuItemHideRoot->GetId(), wxEVT_COMMAND_MENU_SELECTED,
                  wxCommandEventHandler(MainFrameBaseClass::OnHideRoot), NULL, this);
    this->Connect(m_menuItemSingleSelection->GetId(), wxEVT_COMMAND_MENU_SELECTED,
                  wxCommandEventHandler(MainFrameBaseClass::OnSingleSelection), NULL, this);
    this->Connect(m_menuItemShowSBOnFocus->GetId(), wxEVT_COMMAND_MENU_SELECTED,
                  wxCommandEventHandler(MainFrameBaseClass::OnShowSBOnFocus), NULL, this);
}

MainFrameBaseClass::~MainFrameBaseClass()
{
    this->Disconnect(m_menuItem13->GetId(), wxEVT_COMMAND_MENU_SELECTED,
                     wxCommandEventHandler(MainFrameBaseClass::OnOpenFolder), NULL, this);
    this->Disconnect(m_menuItemExpandAll->GetId(), wxEVT_COMMAND_MENU_SELECTED,
                     wxCommandEventHandler(MainFrameBaseClass::OnExpandAll), NULL, this);
    this->Disconnect(m_menuItemCollapseAll->GetId(), wxEVT_COMMAND_MENU_SELECTED,
                     wxCommandEventHandler(MainFrameBaseClass::OnCollapseAll), NULL, this);
    this->Disconnect(m_menuItemFirstVisible->GetId(), wxEVT_COMMAND_MENU_SELECTED,
                     wxCommandEventHandler(MainFrameBaseClass::OnFirstVisible), NULL, this);
    this->Disconnect(m_menuItemNextVisibleItem->GetId(), wxEVT_COMMAND_MENU_SELECTED,
                     wxCommandEventHandler(MainFrameBaseClass::OnNextVisible), NULL, this);
    this->Disconnect(m_menuItemEnsureVisible->GetId(), wxEVT_COMMAND_MENU_SELECTED,
                     wxCommandEventHandler(MainFrameBaseClass::OnEnsureItemVisible), NULL, this);
    this->Disconnect(m_menuItemSelectChildren->GetId(), wxEVT_COMMAND_MENU_SELECTED,
                     wxCommandEventHandler(MainFrameBaseClass::OnSelectChildren), NULL, this);
    this->Disconnect(m_menuItemNextSibling->GetId(), wxEVT_COMMAND_MENU_SELECTED,
                     wxCommandEventHandler(MainFrameBaseClass::OnNextSibling), NULL, this);
    this->Disconnect(m_menuItemPrevSibling->GetId(), wxEVT_COMMAND_MENU_SELECTED,
                     wxCommandEventHandler(MainFrameBaseClass::OnPrevSibling), NULL, this);
    this->Disconnect(m_menuItemExit->GetId(), wxEVT_COMMAND_MENU_SELECTED,
                     wxCommandEventHandler(MainFrameBaseClass::OnExit), NULL, this);
    this->Disconnect(m_menuItemZebra->GetId(), wxEVT_COMMAND_MENU_SELECTED,
                     wxCommandEventHandler(MainFrameBaseClass::OnZebraColouring), NULL, this);
    this->Disconnect(m_menuItemThemes->GetId(), wxEVT_COMMAND_MENU_SELECTED,
                     wxCommandEventHandler(MainFrameBaseClass::OnToggleTheme), NULL, this);
    this->Disconnect(m_menuItemHideRoot->GetId(), wxEVT_COMMAND_MENU_SELECTED,
                     wxCommandEventHandler(MainFrameBaseClass::OnHideRoot), NULL, this);
    this->Disconnect(m_menuItemSingleSelection->GetId(), wxEVT_COMMAND_MENU_SELECTED,
                     wxCommandEventHandler(MainFrameBaseClass::OnSingleSelection), NULL, this);
    this->Disconnect(m_menuItemShowSBOnFocus->GetId(), wxEVT_COMMAND_MENU_SELECTED,
                     wxCommandEventHandler(MainFrameBaseClass::OnShowSBOnFocus), NULL, this);
}

MyImages::MyImages()
    : wxImageList(16, 16, true)
    , m_imagesWidth(16)
    , m_imagesHeight(16)
{
    if(!bBitmapLoaded) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxC9ED9InitBitmapResources();
        bBitmapLoaded = true;
    }

    {
        wxBitmap bmp;
        wxIcon icn;
        bmp = wxXmlResource::Get()->LoadBitmap(wxT("folder"));
        if(bmp.IsOk()) {
            if((m_imagesWidth == bmp.GetWidth()) && (m_imagesHeight == bmp.GetHeight())) {
                icn.CopyFromBitmap(bmp);
                this->Add(icn);
            }
            m_bitmaps.insert(std::make_pair(wxT("folder"), bmp));
        }
    }
    {
        wxBitmap bmp;
        wxIcon icn;
        bmp = wxXmlResource::Get()->LoadBitmap(wxT("folder@2x"));
        if(bmp.IsOk()) {
            if((m_imagesWidth == bmp.GetWidth()) && (m_imagesHeight == bmp.GetHeight())) {
                icn.CopyFromBitmap(bmp);
                this->Add(icn);
            }
            m_bitmaps.insert(std::make_pair(wxT("folder@2x"), bmp));
        }
    }

    {
        wxBitmap bmp;
        wxIcon icn;
        bmp = wxXmlResource::Get()->LoadBitmap(wxT("folder_open"));
        if(bmp.IsOk()) {
            if((m_imagesWidth == bmp.GetWidth()) && (m_imagesHeight == bmp.GetHeight())) {
                icn.CopyFromBitmap(bmp);
                this->Add(icn);
            }
            m_bitmaps.insert(std::make_pair(wxT("folder_open"), bmp));
        }
    }
    {
        wxBitmap bmp;
        wxIcon icn;
        bmp = wxXmlResource::Get()->LoadBitmap(wxT("folder_open@2x"));
        if(bmp.IsOk()) {
            if((m_imagesWidth == bmp.GetWidth()) && (m_imagesHeight == bmp.GetHeight())) {
                icn.CopyFromBitmap(bmp);
                this->Add(icn);
            }
            m_bitmaps.insert(std::make_pair(wxT("folder_open@2x"), bmp));
        }
    }

    {
        wxBitmap bmp;
        wxIcon icn;
        bmp = wxXmlResource::Get()->LoadBitmap(wxT("file"));
        if(bmp.IsOk()) {
            if((m_imagesWidth == bmp.GetWidth()) && (m_imagesHeight == bmp.GetHeight())) {
                icn.CopyFromBitmap(bmp);
                this->Add(icn);
            }
            m_bitmaps.insert(std::make_pair(wxT("file"), bmp));
        }
    }
    {
        wxBitmap bmp;
        wxIcon icn;
        bmp = wxXmlResource::Get()->LoadBitmap(wxT("file@2x"));
        if(bmp.IsOk()) {
            if((m_imagesWidth == bmp.GetWidth()) && (m_imagesHeight == bmp.GetHeight())) {
                icn.CopyFromBitmap(bmp);
                this->Add(icn);
            }
            m_bitmaps.insert(std::make_pair(wxT("file@2x"), bmp));
        }
    }
}

MyImages::~MyImages() {}
