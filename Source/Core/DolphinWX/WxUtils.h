// Copyright 2013 Dolphin Emulator Project
// Licensed under GPLv2
// Refer to the license.txt file included.

#pragma once

#include <string>
#include <wx/string.h>

class wxBitmap;

// A shortcut to access the bitmaps
#define wxGetBitmapFromMemory(name) WxUtils::_wxGetBitmapFromMemory(name, sizeof(name))

namespace WxUtils
{

// Launch a file according to its mime type
void Launch(const char *filename);

// Launch an file explorer window on a certain path
void Explore(const char *path);

double GetCurrentBitmapLogicalScale();

wxBitmap _wxGetBitmapFromMemory(const unsigned char* data, int length);

}  // namespace

std::string WxStrToStr(const wxString& str);
wxString StrToWxStr(const std::string& str);
