//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMPublishCommonNetworkTask.h"

@class NSNumber, NSString;

@interface YMMMyCargoDetailCallTask : YMMPublishCommonNetworkTask
{
    NSNumber *_cargoId;
    NSString *_driverId;
}

@property(retain, nonatomic) NSString *driverId; // @synthesize driverId=_driverId;
@property(retain, nonatomic) NSNumber *cargoId; // @synthesize cargoId=_cargoId;
- (void).cxx_destruct;
- (id)ymm_networkAPIPath;

@end

