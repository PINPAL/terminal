/*++
Copyright (c) Microsoft Corporation
Licensed under the MIT license.

Module Name:
- SettingsTab.h

Abstract:
- The SettingsTab is a tab whose content is a Settings UI control. They can
  coexist in a TabView with all other types of tabs, like the TerminalTab.
  There should only be at most one SettingsTab open at any given time.

Author(s):
- Leon Liang - October 2020

--*/

#pragma once
#include "ITab.h"
#include "SettingsTab.g.h"
#include <winrt/TerminalApp.h>
#include <winrt/Microsoft.Terminal.Settings.Editor.h>
#include "../../cascadia/inc/cppwinrt_utils.h"

namespace winrt::TerminalApp::implementation
{
    struct SettingsTab : SettingsTabT<SettingsTab, ITab>
    {
    public:
        SettingsTab(winrt::Microsoft::Terminal::Settings::Model::CascadiaSettings settings);

    private:
        void _MakeTabViewItem();
        winrt::fire_and_forget _CreateIcon();
    };
}
