//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMPopupMaskView.h"

@class NSArray, NSMutableAttributedString, NSString, UIButton, UIImageView, UILabel, UIView, YYLabel;

@interface UserDataSyncNoticeView : YMMPopupMaskView
{
    double _viewWidth;
    NSArray *_messageArr;
    _Bool _hideCloseBtn;
    CDUnknownBlockType _closeCallback;
    CDUnknownBlockType _agreeCallback;
    CDUnknownBlockType _protocolCallback;
    NSString *_noticeMessage;
    NSArray *_protocolArr;
    NSArray *_btnList;
    UIButton *_topCloseButton;
    UIView *_noticeView;
    UIImageView *_topImageView;
    UILabel *_topTitleLabel;
    UILabel *_noticeTitleLabel;
    UILabel *_noticeContentLabel;
    YYLabel *_noticeProtocolLabel;
    UIButton *_cancelButton;
    UIButton *_confirmButton;
    NSMutableAttributedString *_attributedString;
}

@property(retain, nonatomic) NSMutableAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) YYLabel *noticeProtocolLabel; // @synthesize noticeProtocolLabel=_noticeProtocolLabel;
@property(retain, nonatomic) UILabel *noticeContentLabel; // @synthesize noticeContentLabel=_noticeContentLabel;
@property(retain, nonatomic) UILabel *noticeTitleLabel; // @synthesize noticeTitleLabel=_noticeTitleLabel;
@property(retain, nonatomic) UILabel *topTitleLabel; // @synthesize topTitleLabel=_topTitleLabel;
@property(retain, nonatomic) UIImageView *topImageView; // @synthesize topImageView=_topImageView;
@property(retain, nonatomic) UIView *noticeView; // @synthesize noticeView=_noticeView;
@property(retain, nonatomic) UIButton *topCloseButton; // @synthesize topCloseButton=_topCloseButton;
@property(retain, nonatomic) NSArray *btnList; // @synthesize btnList=_btnList;
@property(retain, nonatomic) NSArray *protocolArr; // @synthesize protocolArr=_protocolArr;
@property(retain, nonatomic) NSString *noticeMessage; // @synthesize noticeMessage=_noticeMessage;
@property(copy, nonatomic) CDUnknownBlockType protocolCallback; // @synthesize protocolCallback=_protocolCallback;
@property(copy, nonatomic) CDUnknownBlockType agreeCallback; // @synthesize agreeCallback=_agreeCallback;
@property(copy, nonatomic) CDUnknownBlockType closeCallback; // @synthesize closeCallback=_closeCallback;
@property(nonatomic) _Bool hideCloseBtn; // @synthesize hideCloseBtn=_hideCloseBtn;
- (void).cxx_destruct;
- (void)dealloc;
- (void)btnClickedAction:(id)arg1;
- (void)closeDialog;
- (void)dismiss;
- (void)show;
- (void)setViewFrame;
- (struct CGSize)noticeProtocolSize;
- (struct CGSize)noticeContentSize;
- (void)setViewConstraints;
- (void)initControls;
- (id)actionBtn:(id)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2 protocolList:(id)arg3 btnList:(id)arg4;

@end

