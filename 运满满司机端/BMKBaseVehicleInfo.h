//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface BMKBaseVehicleInfo : NSObject
{
    NSString *_name;
    NSString *_departureStation;
    NSString *_arriveStation;
    NSString *_departureTime;
    NSString *_arriveTime;
}

@property(retain, nonatomic) NSString *arriveTime; // @synthesize arriveTime=_arriveTime;
@property(retain, nonatomic) NSString *departureTime; // @synthesize departureTime=_departureTime;
@property(retain, nonatomic) NSString *arriveStation; // @synthesize arriveStation=_arriveStation;
@property(retain, nonatomic) NSString *departureStation; // @synthesize departureStation=_departureStation;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

