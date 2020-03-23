//
//  CLMosaicView.h
//  CLImageEditorDemo
//
//  Created by Yuuki on 2020/3/23.
//  Copyright © 2020 CALACULU. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CLMosaicView : UIView

//Mosaic Image
@property (nonatomic, strong) UIImage *image;

//Mark Image
@property (nonatomic, strong) UIImage *surfaceImage;

@end

NS_ASSUME_NONNULL_END
