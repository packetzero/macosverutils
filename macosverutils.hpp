#include <CoreFoundation/CFBase.h>

// NOTE: This has to be kept up-to-date as new versions of MacOS are released

#ifndef kCFCoreFoundationVersionNumber10_12
#define kCFCoreFoundationVersionNumber10_12 1348.1
#endif

#ifndef kCFCoreFoundationVersionNumber10_13
#define kCFCoreFoundationVersionNumber10_13 1443
#define kCFCoreFoundationVersionNumber10_13_X 1443.13  // observed value with supplemental update
#endif

int GetMacOSMinorVersion()
{
  if (kCFCoreFoundationVersionNumber < kCFCoreFoundationVersionNumber10_7) return 6;
  if (kCFCoreFoundationVersionNumber < kCFCoreFoundationVersionNumber10_8) return 7;
  if (kCFCoreFoundationVersionNumber < kCFCoreFoundationVersionNumber10_9) return 8;
  if (kCFCoreFoundationVersionNumber < kCFCoreFoundationVersionNumber10_10) return 9;
  if (kCFCoreFoundationVersionNumber < kCFCoreFoundationVersionNumber10_11) return 10;
  if (kCFCoreFoundationVersionNumber < kCFCoreFoundationVersionNumber10_12) return 11;
  if (kCFCoreFoundationVersionNumber < kCFCoreFoundationVersionNumber10_13) return 12;
  return 13;
}
