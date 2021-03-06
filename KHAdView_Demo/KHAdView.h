//
//  KHAdView.h
//  KHAdView
//
//  Created by qianfeng on 16/9/25.
//  Copyright © 2016年 Arron_zkh. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, KHSourceType){
    KHSourceInternetType = 0,
    KHSourceLocalType = 1
};

typedef NS_ENUM(NSInteger, KHScrollDirection){
    KHScrollDirectionFromRight = 0,
    KHScrollDirectionFromLeft = 1
};

@interface KHAdView : UIView

/** timeInterval */
@property (nonatomic, assign) NSTimeInterval timeInterval;
/** bottomView_Color */
@property (nonatomic, strong)  UIColor *bottomViewColor;
/** pageIndicatorTintColor */
@property (nonatomic, strong)  UIColor *pageIndicatorTintColor;
/** currentPageIndicatorTintColor */
@property (nonatomic, strong)  UIColor *currentPageIndicatorTintColor;
/** bottomView_height */
@property (nonatomic, assign)  CGFloat bottomViewHeight;
/** alpha of bottomView's color */
@property (nonatomic, assign)  CGFloat alpha;

/** Scroll Direction */
@property (nonatomic, assign)  KHScrollDirection direction;

/** hide bottomView */
@property (nonatomic, assign)  BOOL hideBottomView;
/** hide pageControl */
@property (nonatomic, assign)  BOOL hidePageControl;


- (void)setDataSource:(NSArray<NSString *> *)dataSource WithSourceType:(KHSourceType)sourceType;

- (void)startTimer;

- (void)stopTimer;

- (void)invalidateTimer;



@end
