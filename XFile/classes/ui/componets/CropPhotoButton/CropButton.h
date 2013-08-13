//
//  CropButton.h
//  PEPhotoCropEditor
//
//  Created by liaosiyuan on 13-8-8.
//  Copyright (c) 2013年 kishikawa katsumi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CrpoButtonDelegate.h"

@interface CropButton : UIButton<UIImagePickerControllerDelegate, UINavigationControllerDelegate, UIActionSheetDelegate>

@property (weak, nonatomic)  UIViewController *viewController;
@property (nonatomic, retain) id<CrpoButtonDelegate> delegate;
 
@end
