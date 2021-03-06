//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMPopupMaskView.h"

#import "UIViewDataBindingProviderProtocol.h"

@class MBComponentButton, NSString, UILabel, UIView;

@interface MBModuleAlertView : YMMPopupMaskView <UIViewDataBindingProviderProtocol>
{
    CDUnknownBlockType _sureBlock;
    CDUnknownBlockType _cancleBlock;
    NSString *_title;
    NSString *_message;
    NSString *_cancelTitle;
    NSString *_sureTitle;
    UIView *_horizontalLine;
    UIView *_verticalLine;
    UILabel *_titleView;
    UILabel *_contentTextView;
    UIView *_bottomView;
    MBComponentButton *_cancleButton;
    MBComponentButton *_sureButton;
}

+ (id)alertViewWithConfigJson:(id)arg1;
@property(retain, nonatomic) MBComponentButton *sureButton; // @synthesize sureButton=_sureButton;
@property(retain, nonatomic) MBComponentButton *cancleButton; // @synthesize cancleButton=_cancleButton;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UILabel *contentTextView; // @synthesize contentTextView=_contentTextView;
@property(retain, nonatomic) UILabel *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UIView *verticalLine; // @synthesize verticalLine=_verticalLine;
@property(retain, nonatomic) UIView *horizontalLine; // @synthesize horizontalLine=_horizontalLine;
@property(copy, nonatomic) NSString *sureTitle; // @synthesize sureTitle=_sureTitle;
@property(copy, nonatomic) NSString *cancelTitle; // @synthesize cancelTitle=_cancelTitle;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) CDUnknownBlockType cancleBlock; // @synthesize cancleBlock=_cancleBlock;
@property(copy, nonatomic) CDUnknownBlockType sureBlock; // @synthesize sureBlock=_sureBlock;
- (void).cxx_destruct;
- (void)cancleButtonClick:(id)arg1;
- (void)sureButtonClick:(id)arg1;
- (void)ymm_showView;
- (void)show;
- (void)addCancleAction:(CDUnknownBlockType)arg1;
- (void)addSureAction:(CDUnknownBlockType)arg1;
- (void)calculateFrame;
- (void)initContentView;
- (id)initWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 sureButtonTitle:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

