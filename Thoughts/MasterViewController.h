//
//  MasterViewController.h
//  Thoughts
//
//  Created by Adrian Andrei on 17.06.2013.
//  Copyright (c) 2013 Adrian Andrei. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
