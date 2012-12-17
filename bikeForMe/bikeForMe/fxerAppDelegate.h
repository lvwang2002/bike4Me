//
//  fxerAppDelegate.h
//  bikeForMe
//
//  Created by zhaoRan on 12-12-17.
//  Copyright (c) 2012年 lvwang2002. All rights reserved.
//

#import <UIKit/UIKit.h>

@class fxerMainViewController;

@interface fxerAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@property (strong, nonatomic) fxerMainViewController *mainViewController;

@end
