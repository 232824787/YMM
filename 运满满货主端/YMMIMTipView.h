//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMPopupMaskView.h"

@class NSString, UILabel, UIView;

@interface YMMIMTipView : YMMPopupMaskView
{
    UIView *_tipBackView;
    UILabel *_tipLB;
    NSString *_tipString;
}

+ (void)showTipToKeyWindowString:(id)arg1;
+ (void)showTipString:(id)arg1;
@property(retain, nonatomic) NSString *tipString; // @synthesize tipString=_tipString;
@property(retain, nonatomic) UILabel *tipLB; // @synthesize tipLB=_tipLB;
@property(retain, nonatomic) UIView *tipBackView; // @synthesize tipBackView=_tipBackView;
- (void).cxx_destruct;
- (void)ymm_maskDoDisappear;
- (void)ymm_maskDoAppear;
- (void)ymm_loadView;

@end

