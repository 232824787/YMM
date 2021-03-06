//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface YMMGatherContext : NSObject
{
    NSString *_currentPageName;
    NSString *_currentPageLifecycleId;
    NSString *_currentPageDidLoadTime;
    NSString *_prePageName;
    NSString *_prePageLifecycleId;
    NSString *_appLifecycleId;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)shareInstance;
@property(copy, nonatomic) NSString *appLifecycleId; // @synthesize appLifecycleId=_appLifecycleId;
@property(readonly, copy, nonatomic) NSString *prePageLifecycleId; // @synthesize prePageLifecycleId=_prePageLifecycleId;
@property(readonly, copy, nonatomic) NSString *prePageName; // @synthesize prePageName=_prePageName;
@property(copy, nonatomic) NSString *currentPageDidLoadTime; // @synthesize currentPageDidLoadTime=_currentPageDidLoadTime;
@property(copy, nonatomic) NSString *currentPageLifecycleId; // @synthesize currentPageLifecycleId=_currentPageLifecycleId;
@property(copy, nonatomic) NSString *currentPageName; // @synthesize currentPageName=_currentPageName;
- (void).cxx_destruct;
- (id)mutablecopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clearContext;
- (void)clearContextForPage:(id)arg1;
- (void)addPageNetworkData:(id)arg1 forPage:(id)arg2;
- (void)setPageBizData:(id)arg1 forPage:(id)arg2;

@end

