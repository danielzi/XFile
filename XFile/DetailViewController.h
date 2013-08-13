//
//  DetailViewController.h
//  XFile
//
//  Created by liaosiyuan on 13-8-13.
//  Copyright (c) 2013年 liaosiyuan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
