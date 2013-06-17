//
//  DetailViewController.h
//  Thoughts
//
//  Created by Adrian Andrei on 17.06.2013.
//  Copyright (c) 2013 Adrian Andrei. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
