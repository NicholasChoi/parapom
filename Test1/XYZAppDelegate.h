//
//  XYZAppDelegate.h
//  Test1
//
//  Created by Nicholas Choi on 2014. 4. 23..
//  Copyright (c) 2014년 TestCompany. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface XYZAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
