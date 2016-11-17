// Copyright (c) 2016 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_DOWNLOAD_HANDLER_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_DOWNLOAD_HANDLER_CTOCPP_H_
#pragma once

#if !defined(BUILDING_CEF_SHARED)
#error This file can be included DLL-side only
#endif

#include "include/cef_download_handler.h"
#include "include/capi/cef_download_handler_capi.h"
#include "libcef_dll/ctocpp/ctocpp.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed DLL-side only.
class CefDownloadHandlerCToCpp
    : public CefCToCpp<CefDownloadHandlerCToCpp, CefDownloadHandler,
        cef_download_handler_t> {
 public:
  CefDownloadHandlerCToCpp();

  // CefDownloadHandler methods.
  void OnBeforeDownload(CefRefPtr<CefBrowser> browser,
      CefRefPtr<CefDownloadItem> download_item,
      const CefString& suggested_name,
      CefRefPtr<CefBeforeDownloadCallback> callback) override;
  void OnDownloadUpdated(CefRefPtr<CefBrowser> browser,
      CefRefPtr<CefDownloadItem> download_item,
      CefRefPtr<CefDownloadItemCallback> callback) override;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_DOWNLOAD_HANDLER_CTOCPP_H_
