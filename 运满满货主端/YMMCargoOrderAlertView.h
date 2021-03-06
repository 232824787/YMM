//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMPopupMaskView.h"

@class NSString, UIButton, UILabel, UIView, YMMCargoNewOrderInfoModel;

@interface YMMCargoOrderAlertView : YMMPopupMaskView
{
    UILabel *_titleLabel;
    UILabel *_firstMsgLabel;
    UILabel *_roadLabel;
    UILabel *_goodsInfoLabel;
    UIView *_tipView;
    UILabel *_lineLabel;
    UILabel *_tipTitleLabel;
    UIButton *_actionButton;
    UIButton *_cancelButton;
    id <YMMCargoOrderAlertDelegate> _delegate;
    YMMCargoNewOrderInfoModel *_orderInfo;
    NSString *_telNumber;
}

@property(readonly, copy, nonatomic) NSString *telNumber; // @synthesize telNumber=_telNumber;
@property(retain, nonatomic) YMMCargoNewOrderInfoModel *orderInfo; // @synthesize orderInfo=_orderInfo;
@property(nonatomic) __weak id <YMMCargoOrderAlertDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dismissWithClickedButtonIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)show;
- (void)buttonClicked:(id)arg1;
- (void)newOrderViewLayout;
- (void)callViewLayout;
- (void)initUIControl;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 actionButtonTitle:(id)arg5;
- (id)initWithTitle:(id)arg1 telNumber:(id)arg2 message:(id)arg3 delegate:(id)arg4;
- (id)initWithTitle:(id)arg1 telNumber:(id)arg2 delegate:(id)arg3;

@end

