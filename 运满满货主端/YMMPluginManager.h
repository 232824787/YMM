//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface YMMPluginManager : NSObject
{
    NSMutableDictionary *_pluginMethodMap;
    NSMutableDictionary *_pluginClassCache;
}

+ (id)shared;
@property(retain, nonatomic) NSMutableDictionary *pluginClassCache; // @synthesize pluginClassCache=_pluginClassCache;
@property(retain, nonatomic) NSMutableDictionary *pluginMethodMap; // @synthesize pluginMethodMap=_pluginMethodMap;
- (void).cxx_destruct;
- (void)journalForRegister:(id)arg1;
- (void)journalForBridge:(id)arg1 response:(id)arg2 code:(unsigned long long)arg3;
- (void)performPlugin:(id)arg1 params:(id)arg2 callBack:(CDUnknownBlockType)arg3;
- (id)realMethodName:(id)arg1;
- (id)mapKey:(id)arg1 module:(id)arg2;
- (id)requestMapKey:(id)arg1;
- (_Bool)supportMethod:(id)arg1;
- (void)performPlugin:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)registerPlugin:(Class)arg1 supportModule:(id)arg2;

@end

