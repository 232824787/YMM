//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString;

@interface VFSDKCashierFeePopView : UIView
{
    NSString *_fee;
    NSString *_payMoney;
    NSString *_content;
    NSString *_payTitle;
    UIView *_shadowView;
    UIView *_tipView;
}

@property(retain, nonatomic) UIView *tipView; // @synthesize tipView=_tipView;
@property(retain, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(copy, nonatomic) NSString *payTitle; // @synthesize payTitle=_payTitle;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *payMoney; // @synthesize payMoney=_payMoney;
@property(copy, nonatomic) NSString *fee; // @synthesize fee=_fee;
- (void).cxx_destruct;
- (void)animationHideActionSheet;
- (void)tapAction;
- (void)showInView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

