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

#ifndef CEF_LIBCEF_DLL_CTOCPP_ZIP_READER_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_ZIP_READER_CTOCPP_H_
#pragma once

#if !defined(WRAPPING_CEF_SHARED)
#error This file can be included wrapper-side only
#endif

#include "include/cef_zip_reader.h"
#include "include/capi/cef_zip_reader_capi.h"
#include "libcef_dll/ctocpp/ctocpp.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class CefZipReaderCToCpp
    : public CefCToCpp<CefZipReaderCToCpp, CefZipReader, cef_zip_reader_t> {
 public:
  CefZipReaderCToCpp();

  // CefZipReader methods.
  bool MoveToFirstFile() OVERRIDE;
  bool MoveToNextFile() OVERRIDE;
  bool MoveToFile(const CefString& fileName, bool caseSensitive) OVERRIDE;
  bool Close() OVERRIDE;
  CefString GetFileName() OVERRIDE;
  int64 GetFileSize() OVERRIDE;
  CefTime GetFileLastModified() OVERRIDE;
  bool OpenFile(const CefString& password) OVERRIDE;
  bool CloseFile() OVERRIDE;
  int ReadFile(void* buffer, size_t bufferSize) OVERRIDE;
  int64 Tell() OVERRIDE;
  bool Eof() OVERRIDE;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_ZIP_READER_CTOCPP_H_
