/* 
 * Here is where system computed values get stored.
 * These values should only change when the target compile platform changes.
 */

/* #undef VTKMY_BUILD_SHARED_LIBS */
#ifndef VTKMY_BUILD_SHARED_LIBS
#define VTKMY_STATIC
#endif

#if defined(_MSC_VER) && !defined(VTKMY_STATIC)
#pragma warning ( disable : 4275 )
#endif
