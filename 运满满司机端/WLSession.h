//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WLJsApiClass.h"

#import "WLSessionJSExport.h"

@class WLJsSessionApi;

@interface WLSession : WLJsApiClass <WLSessionJSExport>
{
    WLJsSessionApi *_sessionApi;
}

@property(retain, nonatomic) WLJsSessionApi *sessionApi; // @synthesize sessionApi=_sessionApi;
- (void).cxx_destruct;
- (void)updateSession:(id)arg1;
- (void)getSessionInfo:(id)arg1;
- (void)didAutoLoginWithSessionInfo:(id)arg1;
- (void)registerApi;

@end

