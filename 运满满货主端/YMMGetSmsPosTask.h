//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonNetworkTask.h"

@class NSNumber;

@interface YMMGetSmsPosTask : YMMCommonNetworkTask
{
    NSNumber *_driverId;
    long long _type;
}

@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSNumber *driverId; // @synthesize driverId=_driverId;
- (void).cxx_destruct;
- (id)ymm_errorMapping;
- (id)ymm_propertiesMap;
- (Class)ymm_responseModelClass;
- (id)ymm_networkAPIPath;

@end

