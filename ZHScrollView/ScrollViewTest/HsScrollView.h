//
//  HsScrollView.h
//  ScrollViewTest
//
//  Created by Luo on 16/7/5.
//  Copyright © 2016年 Luo. All rights reserved.
//

#import <UIKit/UIKit.h>
@protocol HsScrollViewDelegate <NSObject>

-(void)HsScrollViewClick;

@end

@interface HsScrollView : UIView
/** 图片数组  */
@property(strong,nonatomic)  NSArray     *imageNames;
/** 其他圆点颜色  */
@property(strong,nonatomic)  UIColor     *color;
/** 当前圆点的颜色  */
@property(strong,nonatomic)  UIColor     *currentColor;
+(instancetype)HsScrollViewShow;
@property (weak,nonatomic) id<HsScrollViewDelegate>delegate;
//**一个简单的block*/
@property(strong,nonatomic)void(^HsScrollViewBlock)(void);
@end
