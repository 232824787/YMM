//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIControl, YMMBubbleViewOption;

@interface YMMBubbleView : UIView
{
    CDUnknownBlockType _willShowHandler;
    CDUnknownBlockType _willDismissHandler;
    CDUnknownBlockType _didShowHandler;
    CDUnknownBlockType _didDismissHandler;
    CDUnknownBlockType _didClickBubbleHandler;
    YMMBubbleViewOption *_option;
    UIView *_containerView;
    UIView *_contentView;
    UIControl *_blackOverLay;
    struct CGPoint _arrowShowPoint;
    struct CGRect _cacheFrame;
}

@property(nonatomic) struct CGRect cacheFrame; // @synthesize cacheFrame=_cacheFrame;
@property(retain, nonatomic) UIControl *blackOverLay; // @synthesize blackOverLay=_blackOverLay;
@property(nonatomic) struct CGPoint arrowShowPoint; // @synthesize arrowShowPoint=_arrowShowPoint;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) YMMBubbleViewOption *option; // @synthesize option=_option;
@property(copy, nonatomic) CDUnknownBlockType didClickBubbleHandler; // @synthesize didClickBubbleHandler=_didClickBubbleHandler;
@property(copy, nonatomic) CDUnknownBlockType didDismissHandler; // @synthesize didDismissHandler=_didDismissHandler;
@property(copy, nonatomic) CDUnknownBlockType didShowHandler; // @synthesize didShowHandler=_didShowHandler;
@property(copy, nonatomic) CDUnknownBlockType willDismissHandler; // @synthesize willDismissHandler=_willDismissHandler;
@property(copy, nonatomic) CDUnknownBlockType willShowHandler; // @synthesize willShowHandler=_willShowHandler;
- (void).cxx_destruct;
- (_Bool)accessibilityPerformEscape;
- (void)drawRect:(struct CGRect)arg1;
- (double)radiansDerees:(double)arg1;
- (_Bool)isCornerRightArrow;
- (_Bool)isCornerLeftArrow;
- (void)create;
- (void)show;
- (void)createHighlightLayerFromView:(id)arg1 inView:(id)arg2;
- (struct CGPoint)arrowPointWithView:(id)arg1 fromView:(id)arg2 inView:(id)arg3 popoverType:(long long)arg4;
- (struct CGPoint)originArrowPointWithView:(id)arg1 fromView:(id)arg2;
- (void)dismiss;
- (void)show:(id)arg1 atPoint:(struct CGPoint)arg2 inView:(id)arg3;
- (void)show:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)show:(id)arg1 fromView:(id)arg2 inView:(id)arg3;
- (void)show:(id)arg1 fromView:(id)arg2;
- (id)initWithOption:(id)arg1;
- (id)init;

@end

