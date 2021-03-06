//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YMMPluginProtocol.h"

@class NSString;

@interface YMMCargoPlugin : NSObject <YMMPluginProtocol>
{
}

+ (void)load;
- (void)getHistory:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)saveHistory:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)clearCarpoolMessage:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)getCarpoolCargoCount:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)changeCarpoolingState:(id)arg1 callBack:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

