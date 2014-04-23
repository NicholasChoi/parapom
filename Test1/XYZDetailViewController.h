//
//  XYZDetailViewController.h
//  Test1
//
//  Created by Nicholas Choi on 2014. 4. 23..
//  Copyright (c) 2014년 TestCompany. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface XYZDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
