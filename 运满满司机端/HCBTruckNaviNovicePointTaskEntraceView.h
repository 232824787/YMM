//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface HCBTruckNaviNovicePointTaskEntraceView : UIView
{
    CDUnknownBlockType _clickBlock;
    CDUnknownBlockType _closeBlock;
    unsigned long long _totalPoint;
    UIImageView *_iconImageView;
    UILabel *_pointLabel;
    UILabel *_tipsLabel;
    UIView *_tipsView;
    UIView *_pointView;
}

@property(retain, nonatomic) UIView *pointView; // @synthesize pointView=_pointView;
@property(retain, nonatomic) UIView *tipsView; // @synthesize tipsView=_tipsView;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UILabel *pointLabel; // @synthesize pointLabel=_pointLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) unsigned long long totalPoint; // @synthesize totalPoint=_totalPoint;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
- (void).cxx_destruct;
- (_Bool)isLogin;
- (id)formatFloat:(float)arg1;
- (void)initSubviews;
- (void)updateViewByLoginStatus;
- (void)updateViewWithRewardPoint:(double)arg1 showTipsView:(_Bool)arg2;
- (void)pointBtnClick;
- (id)initWithFrame:(struct CGRect)arg1;

@end

