//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMPopupMaskView.h"

@class NSString, UIView, YMMLoadingIndicatorView;

@interface YMMLoadingView : YMMPopupMaskView
{
    NSString *_loadingText;
    UIView *_activityIndicatorBackgroundView;
    YMMLoadingIndicatorView *_indicatorView;
}

@property(retain, nonatomic) YMMLoadingIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) UIView *activityIndicatorBackgroundView; // @synthesize activityIndicatorBackgroundView=_activityIndicatorBackgroundView;
@property(retain, nonatomic) NSString *loadingText; // @synthesize loadingText=_loadingText;
- (void).cxx_destruct;
- (void)ymm_maskDidDisappear;
- (void)ymm_maskWillAppear;
- (void)ymm_loadView;
- (void)ymm_dismiss;
- (void)ymm_showInView:(id)arg1 offsetInsets:(struct UIEdgeInsets)arg2;

@end

