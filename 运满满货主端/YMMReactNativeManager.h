//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface YMMReactNativeManager : NSObject
{
    NSMutableDictionary *_bridgeRegistry;
}

+ (id)defaultManager;
@property(retain, nonatomic) NSMutableDictionary *bridgeRegistry; // @synthesize bridgeRegistry=_bridgeRegistry;
- (void).cxx_destruct;
- (void)freeBridgesCache;
- (void)stopBridge:(id)arg1;
- (id)loadRCTBridgeWithModuleName:(id)arg1;
- (void)reportError:(id)arg1;
- (void)setupRCT;

@end

