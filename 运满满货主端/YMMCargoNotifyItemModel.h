//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSArray, NSString;

@interface YMMCargoNotifyItemModel : YMMCommonModel
{
    NSString *_title;
    NSString *_notifyMessage;
    long long _showCloseButton;
    long long _cancelable;
    long long _buttonDirection;
    NSArray *_buttons;
    long long _messageGravity;
    NSString *_topIconUrl;
    long long _showFooter;
}

+ (Class)ymm_classForCollectionPropertyName:(id)arg1;
@property(nonatomic) long long showFooter; // @synthesize showFooter=_showFooter;
@property(retain, nonatomic) NSString *topIconUrl; // @synthesize topIconUrl=_topIconUrl;
@property(nonatomic) long long messageGravity; // @synthesize messageGravity=_messageGravity;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(nonatomic) long long buttonDirection; // @synthesize buttonDirection=_buttonDirection;
@property(nonatomic) long long cancelable; // @synthesize cancelable=_cancelable;
@property(nonatomic) long long showCloseButton; // @synthesize showCloseButton=_showCloseButton;
@property(retain, nonatomic) NSString *notifyMessage; // @synthesize notifyMessage=_notifyMessage;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

