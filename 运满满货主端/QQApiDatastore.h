//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QQApiDatastore : NSObject
{
    NSString *_scheme;
    NSString *_openId;
    NSString *_uin;
    NSString *_appId;
    NSString *_appName;
    NSString *_webviewToken;
}

+ (id)instance;
@property(retain, nonatomic) NSString *webviewToken; // @synthesize webviewToken=_webviewToken;
@property(retain, nonatomic) NSString *uin; // @synthesize uin=_uin;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSString *openId; // @synthesize openId=_openId;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
- (_Bool)isQQSupportApiGeneralPastboard;
- (void)clearApiLargeData;
- (id)getApiLargeDataByGeneralPastboard;
- (id)getApiLargeData;
- (int)setApiLargeData:(id)arg1;
- (void)clearApiMessage;
- (id)getApiMessage;
- (int)setApiMessage:(id)arg1;
- (id)getAdItemArray;
- (int)setAdItemArray:(id)arg1;
- (int)registerWithMetadata:(id)arg1;

@end

