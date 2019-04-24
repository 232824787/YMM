//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UILabel, UITapGestureRecognizer, YYLabel;

@interface YMMQuoteCompanyHeaderView : UIView
{
    NSString *_message;
    NSString *_linkMessage;
    NSString *_linkUrl;
    CDUnknownBlockType _switchPublishSceneCallback;
    CDUnknownBlockType _quoteADClickBlcok;
    YYLabel *_messageLabel;
    UIView *_switchView;
    UILabel *_switchLabel;
    UITapGestureRecognizer *_gesture;
}

@property(retain, nonatomic) UITapGestureRecognizer *gesture; // @synthesize gesture=_gesture;
@property(retain, nonatomic) UILabel *switchLabel; // @synthesize switchLabel=_switchLabel;
@property(retain, nonatomic) UIView *switchView; // @synthesize switchView=_switchView;
@property(retain, nonatomic) YYLabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(copy, nonatomic) CDUnknownBlockType quoteADClickBlcok; // @synthesize quoteADClickBlcok=_quoteADClickBlcok;
@property(copy, nonatomic) CDUnknownBlockType switchPublishSceneCallback; // @synthesize switchPublishSceneCallback=_switchPublishSceneCallback;
@property(copy, nonatomic) NSString *linkUrl; // @synthesize linkUrl=_linkUrl;
@property(copy, nonatomic) NSString *linkMessage; // @synthesize linkMessage=_linkMessage;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (void)switchAction;
- (void)render;
- (void)initMessage;
- (id)quoteMessageAttributeStr;
- (void)setViewConstraints;
- (void)initControls;
- (id)init;

@end

