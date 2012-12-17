//
//  fxerMainViewController.h
//  bikeForMe
//
//  Created by zhaoRan on 12-12-17.
//  Copyright (c) 2012年 lvwang2002. All rights reserved.
//

#import "fxerFlipsideViewController.h"

#import <CoreData/CoreData.h>

@interface fxerMainViewController : UIViewController <fxerFlipsideViewControllerDelegate>

@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@property (strong, nonatomic) UIPopoverController *flipsidePopoverController;

- (IBAction)showInfo:(id)sender;

@end
