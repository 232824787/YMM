//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class AMapNaviPoint;

@interface AMapNaviNotAvoidFacilityAndForbiddenInfo : NSObject <NSCopying, NSCoding>
{
    long long _type;
    long long _forbiddenType;
    long long _distance;
    AMapNaviPoint *_coordinate;
}

@property(retain, nonatomic) AMapNaviPoint *coordinate; // @synthesize coordinate=_coordinate;
@property(nonatomic) long long distance; // @synthesize distance=_distance;
@property(nonatomic) long long forbiddenType; // @synthesize forbiddenType=_forbiddenType;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

