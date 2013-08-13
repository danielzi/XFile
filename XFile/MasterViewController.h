//
//  MasterViewController.h
//  XFile
//
//  Created by liaosiyuan on 13-8-13.
//  Copyright (c) 2013年 liaosiyuan. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
