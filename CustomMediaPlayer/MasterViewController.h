//
//  MasterViewController.h
//  CustomMediaPlayer
//
//  Created by Liu Lei on 12-3-27.
//  Copyright (c) 2012年 Coolinsoft. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
