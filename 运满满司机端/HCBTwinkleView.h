//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAAnimationGroup, UIColor;

@interface HCBTwinkleView : UIView
{
    CDUnknownBlockType _clickBlock;
    UIView *_twinkleView;
    UIView *_centerView;
    UIView *_edgeView;
    UIColor *_edgeColor;
    double _centerWidth;
    double _edgeWidth;
    CAAnimationGroup *_groups;
    UIColor *_twinkleColor;
}

+ (id)twinkleViewWithColor:(id)arg1 edgeColor:(id)arg2 circleWidth:(double)arg3 edgeWidth:(double)arg4;
@property(retain, nonatomic) UIColor *twinkleColor; // @synthesize twinkleColor=_twinkleColor;
@property(retain, nonatomic) CAAnimationGroup *groups; // @synthesize groups=_groups;
@property(nonatomic) double edgeWidth; // @synthesize edgeWidth=_edgeWidth;
@property(nonatomic) double centerWidth; // @synthesize centerWidth=_centerWidth;
@property(retain, nonatomic) UIColor *edgeColor; // @synthesize edgeColor=_edgeColor;
@property(retain, nonatomic) UIView *edgeView; // @synthesize edgeView=_edgeView;
@property(retain, nonatomic) UIView *centerView; // @synthesize centerView=_centerView;
@property(retain, nonatomic) UIView *twinkleView; // @synthesize twinkleView=_twinkleView;
@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)startAnimation;
- (void)twinkViewClick;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (id)initWithColor:(id)arg1 edgeColor:(id)arg2 circleWidth:(double)arg3 edgeWidth:(double)arg4;

@end

