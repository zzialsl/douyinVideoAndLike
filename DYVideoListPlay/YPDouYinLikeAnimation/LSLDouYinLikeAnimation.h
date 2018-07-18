//
//  LSLDouYinLikeAnimation.h
//  LSLDouYinLikeAnimationDemo
//
//  Created by LiShuangLong on 2018/7/18.
//  Copyright © 2018年 Work_Zyp. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface LSLDouYinLikeAnimation : NSObject

/**  获取单例对象*/
+ (instancetype)shareInstance;

/**  系统touch来触发的动画*/
- (void)createAnimationWithTouch:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event;

/**  点击来触发的动画*/
- (void)createAnimationWithTap:(UITapGestureRecognizer *)tap;

@end
