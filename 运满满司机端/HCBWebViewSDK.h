//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface HCBWebViewSDK : NSObject
{
    unsigned long long _clientType;
}

+ (id)sharedSDK;
+ (void)setupWithClientType:(unsigned long long)arg1 appUserDomainId:(int)arg2;
@property(readonly, nonatomic) unsigned long long clientType; // @synthesize clientType=_clientType;
- (void)setClientType:(unsigned long long)arg1;

@end

