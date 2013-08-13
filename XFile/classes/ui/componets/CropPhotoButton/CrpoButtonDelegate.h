//
//  CrpoButtonDelegate.h
//  PEPhotoCropEditor
//
//  Created by liaosiyuan on 13-8-8.
//  Copyright (c) 2013年 kishikawa katsumi. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol CrpoButtonDelegate <NSObject>

@optional
-(void) crpoPhotoButton:(UIButton*)button cropPhoto:(UIImage*) image;

@end
