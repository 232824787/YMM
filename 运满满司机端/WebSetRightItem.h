//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WebAPI.h"

@class NSString, YMMWebView;

@interface WebSetRightItem : NSObject <WebAPI>
{
    YMMWebView *_webView;
    NSString *_js;
}

- (void).cxx_destruct;
- (void)callRightAction;
- (void)call:(id)arg1 from:(id)arg2;
- (long long)version;
- (id)name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

