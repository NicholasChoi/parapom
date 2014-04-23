//
//  XYZMasterViewController.h
//  Test1
//
//  Created by Nicholas Choi on 2014. 4. 23..
//  Copyright (c) 2014년 TestCompany. All rights reserved.
//

#import <UIKit/UIKit.h>

@class XYZDetailViewController;

#import <CoreData/CoreData.h>

@interface XYZMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) XYZDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
