//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class AMapNaviPoint, NSString;

@interface AMapNaviRouteForbiddenInfo : NSObject <NSCopying>
{
    long long _type;
    NSString *_vehicleType;
    AMapNaviPoint *_coordinate;
    NSString *_timeDescription;
    NSString *_roadName;
}

@property(retain, nonatomic) NSString *roadName; // @synthesize roadName=_roadName;
@property(retain, nonatomic) NSString *timeDescription; // @synthesize timeDescription=_timeDescription;
@property(retain, nonatomic) AMapNaviPoint *coordinate; // @synthesize coordinate=_coordinate;
@property(retain, nonatomic) NSString *vehicleType; // @synthesize vehicleType=_vehicleType;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

