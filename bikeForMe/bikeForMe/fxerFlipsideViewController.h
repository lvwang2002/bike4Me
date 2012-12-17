//
//  fxerFlipsideViewController.h
//  bikeForMe
//
//  Created by zhaoRan on 12-12-17.
//  Copyright (c) 2012年 lvwang2002. All rights reserved.
//

#import <UIKit/UIKit.h>

@class fxerFlipsideViewController;

@protocol fxerFlipsideViewControllerDelegate
- (void)flipsideViewControllerDidFinish:(fxerFlipsideViewController *)controller;
@end

@interface fxerFlipsideViewController : UIViewController

@property (weak, nonatomic) id <fxerFlipsideViewControllerDelegate> delegate;

- (IBAction)done:(id)sender;

@end
