//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseAlertView.h"

@class NSString, UIButton, UILabel, UIView;

@interface YMMHCBMsgProtocolAlertView : YMMBaseAlertView
{
    NSString *_titleString;
    NSString *_contentString;
    NSString *_checkboxContentHeader;
    NSString *_checkboxContent;
    NSString *_protocolUrl;
    UILabel *_messageLabel;
    UIButton *_protocolLinkButton;
    UIButton *_isAgreedButton;
    CDUnknownBlockType _protocolLinkClickBlock;
    CDUnknownBlockType _confirmClickBlock;
    CDUnknownBlockType _cancelClickBlock;
    UIView *_innerView;
}

@property(retain, nonatomic) UIView *innerView; // @synthesize innerView=_innerView;
@property(copy, nonatomic) CDUnknownBlockType cancelClickBlock; // @synthesize cancelClickBlock=_cancelClickBlock;
@property(copy, nonatomic) CDUnknownBlockType confirmClickBlock; // @synthesize confirmClickBlock=_confirmClickBlock;
@property(copy, nonatomic) CDUnknownBlockType protocolLinkClickBlock; // @synthesize protocolLinkClickBlock=_protocolLinkClickBlock;
@property(retain, nonatomic) UIButton *isAgreedButton; // @synthesize isAgreedButton=_isAgreedButton;
@property(retain, nonatomic) UIButton *protocolLinkButton; // @synthesize protocolLinkButton=_protocolLinkButton;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(copy, nonatomic) NSString *protocolUrl; // @synthesize protocolUrl=_protocolUrl;
@property(copy, nonatomic) NSString *checkboxContent; // @synthesize checkboxContent=_checkboxContent;
@property(copy, nonatomic) NSString *checkboxContentHeader; // @synthesize checkboxContentHeader=_checkboxContentHeader;
@property(copy, nonatomic) NSString *contentString; // @synthesize contentString=_contentString;
@property(copy, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
- (void).cxx_destruct;
- (void)buttonClicked:(id)arg1;
- (void)updateConstraints;
- (void)ymm_doDismiss;
- (void)isAgreedButtonDidClick;
- (void)protocolLinkButtonDidClick;
- (struct UIEdgeInsets)padding;
- (double)gap;
- (id)title;
- (id)actionAttrDisableTitle;
- (id)actionAttrTitle;
- (id)cancelAttrTitle;
- (id)contentView;

@end

