//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCargoDetailCommonNetworkTask.h"

@class NSNumber;

@interface YMMCargoDetailTask : YMMCargoDetailCommonNetworkTask
{
    NSNumber *_cargoId;
    NSNumber *_lon;
    NSNumber *_lat;
}

@property(retain, nonatomic) NSNumber *lat; // @synthesize lat=_lat;
@property(retain, nonatomic) NSNumber *lon; // @synthesize lon=_lon;
@property(retain, nonatomic) NSNumber *cargoId; // @synthesize cargoId=_cargoId;
- (void).cxx_destruct;
- (Class)ymm_responseModelClass;
- (id)ymm_networkAPIPath;
- (id)ymm_networkAPIDomain;

@end

