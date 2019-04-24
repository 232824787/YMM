//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HCBModuleStorage.h"

@class NSString, NSUserDefaults;

@interface HCBUserDefaults : NSObject <HCBModuleStorage>
{
    NSString *_module;
    NSUserDefaults *_defaults;
    NSUserDefaults *_standardUserDefaults;
}

@property(retain, nonatomic) NSUserDefaults *standardUserDefaults; // @synthesize standardUserDefaults=_standardUserDefaults;
@property(readonly, nonatomic) NSUserDefaults *defaults; // @synthesize defaults=_defaults;
@property(readonly, nonatomic) NSString *module; // @synthesize module=_module;
- (void).cxx_destruct;
- (id)initWithModule:(id)arg1;
- (void)__removeObjectForKey:(id)arg1;
- (void)__setObject:(id)arg1 forKey:(id)arg2;
- (id)__objectForKey:(id)arg1;
- (_Bool)synchronize;
- (void)setURL:(id)arg1 forKey:(id)arg2;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (void)setFloat:(float)arg1 forKey:(id)arg2;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (id)URLForKey:(id)arg1;
- (_Bool)boolForKey:(id)arg1;
- (double)doubleForKey:(id)arg1;
- (float)floatForKey:(id)arg1;
- (long long)integerForKey:(id)arg1;
- (id)stringArrayForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

