//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSMutableSet, NSRecursiveLock;

@interface MBNativeConfigCenter : NSObject
{
    NSMutableDictionary *_internalNativeComponents;
    NSMutableSet *_registeredComponentsPlistNames;
    NSMutableDictionary *_internalNetWorkPaths;
    NSMutableSet *_registeredPathsPlistNames;
    NSRecursiveLock *_configLock;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSRecursiveLock *configLock; // @synthesize configLock=_configLock;
@property(retain, nonatomic) NSMutableSet *registeredPathsPlistNames; // @synthesize registeredPathsPlistNames=_registeredPathsPlistNames;
@property(retain, nonatomic) NSMutableDictionary *internalNetWorkPaths; // @synthesize internalNetWorkPaths=_internalNetWorkPaths;
@property(retain, nonatomic) NSMutableSet *registeredComponentsPlistNames; // @synthesize registeredComponentsPlistNames=_registeredComponentsPlistNames;
@property(retain, nonatomic) NSMutableDictionary *internalNativeComponents; // @synthesize internalNativeComponents=_internalNativeComponents;
- (void).cxx_destruct;
- (id)configJsonForComponentStyleJson:(id)arg1;
- (id)configJsonForComponentRenderType:(long long)arg1 componentType:(id)arg2;
- (void)registerNativeNetWorkPaths:(id)arg1 forModuleName:(id)arg2;
- (void)registerRemoteNetWorkPaths;
- (void)registerNativeNetWorkPathsFromPlistName:(id)arg1;
- (void)registerNativeComponents:(id)arg1 forModuleName:(id)arg2;
- (void)registerRemoteComponents;
- (void)registerNativeComponentsFromPlistName:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *netWorkPaths;
@property(readonly, copy, nonatomic) NSDictionary *nativeComponents;
- (id)init;

@end

