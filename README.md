# TestChilkatSwift
Demonstrate adding Chilkat to a MacOSX Swift Project, just for the sake of compiling and linking successfully.

The steps to add Chilkat to your Swift project are:

## 1) Download the Chilkat Cocoa Library for MacOSX or iOS

<blockquote>
  For MacOSX applications, download the <a href="http://chilkatsoft.com/downloads_objc.asp">Chilkat Cocoa library for MacOSX</a>.
  
  For iOS applications, download the <a href="http://chilkatsoft.com/downloads_ios.asp">Chilkat iOS Objective-C Libs w/ bitcode enabled and libstdc++</a>
</blockquote>

## 2) Add an Objective-C Bridging Header to your project.

Create a .h header file named YourProject-Bridging-Header.h, and insert the following:
```
#import <Foundation/NSObject.h>

#import "chilkat-9.5.0-macosx-objc/include/CkoJsonObject.h"
#import "chilkat-9.5.0-macosx-objc/include/CkoXml.h"
#import "chilkat-9.5.0-macosx-objc/include/CkoZip.h"

// The import path to each Cko*.h header depends on where you downloaded/extracted the Chilkat lib.
// Import the Chilkat "Cko" classes used by your application...
```
##3) 
