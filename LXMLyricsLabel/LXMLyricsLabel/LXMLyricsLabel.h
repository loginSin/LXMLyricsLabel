//
//  LXMLyricsLabel.h
//  LXMLyricsLabel
//
//  Created by luxiaoming on 15/9/8.
//  Copyright (c) 2015年 luxiaoming. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LXMLyricsLabel : UIView

@property (nonatomic, strong, readonly) UILabel *textLabel;
@property (nonatomic, strong, readonly) UILabel *maskLabel;


- (void)setFont:(UIFont *)font;

- (void)setText:(NSString *)text;

//设置背景颜色,默认为白色
- (void)setTextBackgroundColor:(UIColor *)color;
//设置渲染颜色,默认为橘黄色
- (void)setTextMaskColor:(UIColor *)color;

- (void)setTextAlignment:(NSTextAlignment)textAlignment;

/**
 *  根据设置显示动画(变速显示动画)
 *
 *  @param timeArray     数组的内容是各个时间点，第一个必须是0，最后一个必须是总时间
 *  @param locationArray 对应各个时间点的位置，值从0~1，第一个必须是0，最后一个必须是1
 *  @discussion 以上两个数组的长度必须一样
 */
- (void)startLyricsAnimationWithTimeArray:(NSArray *)timeArray andLocationArray:(NSArray *)locationArray;

/**
 *  匀速显示动画
 *
 *  @param duration 动画的持续时间
 *  @param count    歌词的字数
 */
- (void)startLyricsAnimationWithDuration:(NSTimeInterval)duration andWordsCount:(NSUInteger)count;

- (void)stopAnimation;

@end
