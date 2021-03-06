//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CAAnimationDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NSString, NSTimer;

@interface HCBIdentificationPhotoDisplayer : UIView <UIGestureRecognizerDelegate, CAAnimationDelegate>
{
    _Bool _keepOthers;
    long long _displayStyle;
    double _showTime;
    UIView *_displayedView;
    NSTimer *_showTimer;
    long long _animationStyle;
}

+ (void)removeView:(Class)arg1;
+ (void)removeAll;
+ (id)showView:(id)arg1;
+ (id)showView:(id)arg1 animationStyle:(long long)arg2;
@property(nonatomic) long long animationStyle; // @synthesize animationStyle=_animationStyle;
@property(nonatomic) _Bool keepOthers; // @synthesize keepOthers=_keepOthers;
@property(nonatomic) __weak NSTimer *showTimer; // @synthesize showTimer=_showTimer;
@property(retain, nonatomic) UIView *displayedView; // @synthesize displayedView=_displayedView;
@property(nonatomic) double showTime; // @synthesize showTime=_showTime;
@property(nonatomic) long long displayStyle; // @synthesize displayStyle=_displayStyle;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)positionAnimationOffset:(struct CGPoint)arg1;
- (void)defaultAnimation;
- (void)showWithAnimated;
- (void)invalidTimer;
- (void)timerRepeat;
- (void)removeSubViews;
- (void)remove;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

