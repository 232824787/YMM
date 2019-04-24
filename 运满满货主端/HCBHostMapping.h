//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface HCBHostMapping : NSObject
{
    NSMutableDictionary *_hosts;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

+ (id)sharedMapping;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
@property(retain, nonatomic) NSMutableDictionary *hosts; // @synthesize hosts=_hosts;
- (void).cxx_destruct;
- (void)removeAllHosts;
- (void)removeHost:(id)arg1;
- (id)host:(id)arg1;
- (id)allHosts;
- (id)init;

@end

