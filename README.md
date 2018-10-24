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
## 3) Set the Swift Bridging Header in your Project's Build Settings.

For example:<br>
![Swift Bridging Header](https://github.com/chilkatsoft/TestChilkatSwift/blob/master/images/BridgingHeader.png?raw=true "Swift Bridging Header Build Settings")

## 4) Add Chilkat Code

We added the following Chilkat code to AppDelegate.swift.  It does nothing and was only inserted to test compiling and linking.  The purpose of this project is simply to get a clean compile and build, not to run it..

```
    // Add code that uses Chilkat so we can test compiling/linking...
    //
    func chilkatCode() {
        let json = CkoJsonObject()!
        
        var success: Bool
        
        // The only reason for failure in the following lines of code would be an out-of-memory condition,
        // which isn't going to happen...
        
        //  An index value of -1 is used to append at the end.
        success = json.addString(at: -1, name: "Title", value: "Pan's Labyrinth")
        if (success) {
            success = json.addString(at: -1, name: "Director", value: "Guillermo del Toro")
        }
        if (success) {
            success = json.addString(at: -1, name: "Original_Title", value: "El laberinto del fauno")
        }
        if (success) {
            success = json.addInt(at: -1, name: "Year_Released", value: 2006)
        }
        
        json.emitCompact = false
        //print("\(json.emit()!)")
        
    }

    func applicationDidFinishLaunching(_ aNotification: Notification) {
        // Insert code here to initialize your application
        // test creating and using a Chilkat object.
        chilkatCode();
        
    }
```
## 5) Add the Chilkat Static Library (.a)

Go to your project's Build Phases (the tab located just to the right of Build Settings) and add the libChilkatCocoa.a (for MacOSX) or libChilkatIos.a (for iOS).   

Do this by expanding the <b>Link Binary with Libraries</b> section, then click on "+" to add items, then click on the <b>Add Other</b> button.   Navigate to the directory where the Chilkat static lib (.a) located and add it.

![Build Phases](https://github.com/chilkatsoft/TestChilkatSwift/blob/master/images/BuildPhases.png?raw=true "Add Static Link Lib in Build Phases")

## 6) Add -lresolv -lpthread -lstdc++ to Other Linker Flags

In <b>Build Settings</b>,  Add -lresolv -lpthread -lstdc++ to Other Linker Flags.

![Other Linker Flags](https://github.com/chilkatsoft/TestChilkatSwift/blob/master/images/OtherLinkerFlags.png?raw=true "Other Linker Flags")

## 7 Final Notes

That should be everything.  (If not, please let us know by sending email to support@chilkatsoft.com)

<b>Important</b> Chilkat provides documentation for both Swift 2 and Swift 3 / Swift 4.   When Objective-C is used in Swift version 2, the imported methods and properties (via the Bridging Header) have names that are unmodified.  

However..  when using Swift version 3 or Swift version 4, the method and property names imported from Objective-C are renamed.  The 1st letter of each method and property is changed to lowercase, and some method names may have been renamed.  Chilkat provides separate reference documentation and examples for Swift 2 and Swift 3/4.  Make sure you are aware of which documentaiton / examples you are viewing.
