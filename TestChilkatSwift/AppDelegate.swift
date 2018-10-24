//
//  AppDelegate.swift
//  TestChilkatSwift
//
//  Created by Chilkat Software on 10/16/18.
//  Copyright © 2018 Chilkat Software. All rights reserved.
//



import Cocoa

@NSApplicationMain
class AppDelegate: NSObject, NSApplicationDelegate {

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

    func applicationWillTerminate(_ aNotification: Notification) {
        // Insert code here to tear down your application
    }


}

