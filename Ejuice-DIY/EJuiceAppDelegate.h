//
//  EJuiceAppDelegate.h
//  Ejuice-DIY
//
//  Created by Nkio on 14/08/13.
//  Copyright (c) 2013 Alexandre Cloquet. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface EJuiceAppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;

@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;

- (IBAction)saveAction:(id)sender;

@end
