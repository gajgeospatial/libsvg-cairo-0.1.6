#pragma once

#ifdef CAIROSVG_EXPORTS
#define cairosvg_public __declspec(dllexport)
#else
#define cairosvg_public
#endif