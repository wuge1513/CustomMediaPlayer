//
//  DetailViewController.h
//  CustomMediaPlayer
//
//  Created by Liu Lei on 12-3-27.
//  Copyright (c) 2012年 Coolinsoft. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end
