//
//  HSInifiteScrollView.h
//  无限滚动
//
//  Created by HS on 16/1/14.
//  Copyright © 2016年 HS. All rights reserved.
//

#import <UIKit/UIKit.h>

@class HSInifiteScrollView;

@protocol HSInifiteScrollViewDelegate <NSObject>
@optional
- (void)inifiteScrollView:(HSInifiteScrollView *)inifiteScrollView didClickImageAtIndex:(NSInteger)index;
@end

typedef NS_ENUM(NSInteger, HSInifiteScrollDirection) {
    /** 左右滑动 */
    HSInifiteScrollDirectionHorizontal = 0,
    /** 上下滑动 */
    HSInifiteScrollDirectionVertical
};

@interface HSInifiteScrollView : UIView
/** 图片数据(里面可以存放UIImage对象、NSString对象【本地图片名】、NSURL对象【远程图片的URL】) */
@property (nonatomic, strong) NSArray *images;
/** 占位图片 */
@property (nonatomic, strong) UIImage *placeholder;
/** 每张图片之间的时间间隔 */
@property (nonatomic, assign) NSTimeInterval interval;

@property (nonatomic, weak, readonly) UIPageControl *pageControl;

@property (nonatomic, assign) HSInifiteScrollDirection scrollDirection;

/** 代理 */
@property (nonatomic, weak) id<HSInifiteScrollViewDelegate> delegate;
@end
