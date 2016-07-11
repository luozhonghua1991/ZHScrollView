//
//  ViewController.m
//  ScrollViewTest
//
//  Created by Luo on 16/7/5.
//  Copyright © 2016年 Luo. All rights reserved.
//

#import "ViewController.h"
#import "HsScrollView.h"
@interface ViewController ()


@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    HsScrollView *scrollView = [HsScrollView HsScrollViewShow];
    scrollView.frame = CGRectMake(37, 50, 300, 150);
    scrollView.imageNames = @[@"image_0",
                              @"image_1",
                              @"image_2",
                            ];
    [self.view addSubview:scrollView];
    
}


@end
