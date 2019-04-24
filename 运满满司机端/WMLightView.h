//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, NSTimer, UIImageView;

@interface WMLightView : UIView
{
    UIView *_lightBackView;
    UIImageView *_centerLightIV;
    NSMutableArray *_lightViewArr;
    NSTimer *_timer;
}

+ (id)sharedLightView;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSMutableArray *lightViewArr; // @synthesize lightViewArr=_lightViewArr;
@property(retain, nonatomic) UIImageView *centerLightIV; // @synthesize centerLightIV=_centerLightIV;
@property(retain, nonatomic) UIView *lightBackView; // @synthesize lightBackView=_lightBackView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (void)updateLongView:(double)arg1;
- (void)hideLightView;
- (void)onOrientationDidChange:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)init;

@end

