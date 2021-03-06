//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface WXMediaMessage : NSObject
{
    NSString *title;
    NSString *description;
    NSData *thumbData;
    NSString *mediaTagName;
    id mediaObject;
    NSString *messageExt;
    NSString *messageAction;
}

+ (id)message;
+ (id)messageWithTitle:(id)arg1 Description:(id)arg2 Object:(id)arg3 MessageExt:(id)arg4 MessageAction:(id)arg5 ThumbImage:(id)arg6 MediaTag:(id)arg7;
@property(retain, nonatomic) NSString *messageAction; // @synthesize messageAction;
@property(retain, nonatomic) NSString *messageExt; // @synthesize messageExt;
@property(retain, nonatomic) id mediaObject; // @synthesize mediaObject;
@property(retain, nonatomic) NSString *mediaTagName; // @synthesize mediaTagName;
@property(retain, nonatomic) NSData *thumbData; // @synthesize thumbData;
@property(retain, nonatomic) NSString *description; // @synthesize description;
@property(retain, nonatomic) NSString *title; // @synthesize title;
- (void)setThumbImage:(id)arg1;
- (void)dealloc;
- (id)init;

@end

