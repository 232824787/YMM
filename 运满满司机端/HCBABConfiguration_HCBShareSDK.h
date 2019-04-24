//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HCBABConfiguration.h"

@class NSString;

@interface HCBABConfiguration_HCBShareSDK : NSObject <HCBABConfiguration>
{
    id <HCBABConfiguration> _parent;
    CDUnknownBlockType _ext;
    NSString *_WXAppKey;
    NSString *_QQAppKey;
    NSString *_QQScheme;
}

+ (id)defaultConfiguration;
+ (id)defaultQQScheme;
+ (id)defaultQQAppKey;
+ (id)defaultWXAppKey;
@property(retain, nonatomic) NSString *QQScheme; // @synthesize QQScheme=_QQScheme;
@property(retain, nonatomic) NSString *QQAppKey; // @synthesize QQAppKey=_QQAppKey;
@property(retain, nonatomic) NSString *WXAppKey; // @synthesize WXAppKey=_WXAppKey;
@property(copy, nonatomic) CDUnknownBlockType ext; // @synthesize ext=_ext;
@property(nonatomic) __weak id <HCBABConfiguration> parent; // @synthesize parent=_parent;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

