//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, WXOMTADataConfig;

@interface WXOMTADataConfigHolder : NSObject
{
    struct dispatch_queue_s *task_queue;
    struct sqlite3 *db;
    WXOMTADataConfig *_sdkCfg;
    WXOMTADataConfig *_appCfg;
    NSMutableDictionary *_appProperties;
}

+ (id)getInstance;
+ (id)initSingleton:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NSMutableDictionary *appProperties; // @synthesize appProperties=_appProperties;
@property(retain, nonatomic) WXOMTADataConfig *appCfg; // @synthesize appCfg=_appCfg;
@property(retain, nonatomic) WXOMTADataConfig *sdkCfg; // @synthesize sdkCfg=_sdkCfg;
- (void).cxx_destruct;
- (void)updateOnlineConfig:(id)arg1;
- (void)updateConfig:(id)arg1 Type:(unsigned int)arg2;
- (id)getConfig:(unsigned int)arg1;
- (void)encode:(id)arg1;
- (void)setConfig:(id)arg1;
- (id)getAppProperty:(id)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end

