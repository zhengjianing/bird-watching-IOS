//
//  BirdsMasterViewController.h
//  BirdWatching
//
//  Created by jianing on 10/19/13.
//  Copyright (c) 2013 jianing. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BirdsDetailViewController.h"

@class BirdSightingDataController;

@interface BirdsMasterViewController : UITableViewController
@property (strong, nonatomic) BirdSightingDataController *dataController;

@end
