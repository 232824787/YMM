//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SFSafariViewControllerDelegate.h"
#import "YMMSchemeBaseProtocol.h"

@class NSString;

@interface Target_web : NSObject <SFSafariViewControllerDelegate, YMMSchemeBaseProtocol>
{
}

- (void)dealloc;
- (void)safariViewControllerDidFinish:(id)arg1;
- (void)Action_webevaschemejs:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)Action_webtransdict:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)SHWebAppViewControllerInit:(id)arg1 withUrl:(id)arg2;
- (id)GTWebAppViewControllerInit:(id)arg1 withUrl:(id)arg2;
- (id)Action_view:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

