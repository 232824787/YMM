//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, YMMWebView;

@protocol WebAPI <NSObject>
- (void)call:(NSDictionary *)arg1 from:(YMMWebView *)arg2;
- (long long)version;
- (NSString *)name;
@end

