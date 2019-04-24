//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonNetworkTask.h"

@class NSNumber, NSString;

@interface GTTransLoadDesStatusTask : YMMCommonNetworkTask
{
    NSNumber *_waybillId;
    NSNumber *_lat;
    NSNumber *_lon;
    NSString *_address;
    unsigned long long _type;
}

@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(retain, nonatomic) NSNumber *lon; // @synthesize lon=_lon;
@property(retain, nonatomic) NSNumber *lat; // @synthesize lat=_lat;
@property(retain, nonatomic) NSNumber *waybillId; // @synthesize waybillId=_waybillId;
- (void).cxx_destruct;
- (Class)ymm_responseModelClass;
- (id)ymm_networkAPIPath;

@end

