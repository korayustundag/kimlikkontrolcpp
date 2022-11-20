#pragma once
#ifdef KIMLIKNOKONTROL
#define KIMLIKNOKONTROL __declspec(dllexport)
#else
#define KIMLIKNOKONTROL __declspec(dllimport)
#endif

extern "C" KIMLIKNOKONTROL bool KimlikNo(long long _tcno);