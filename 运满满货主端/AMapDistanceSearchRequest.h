//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AMapSearchObject.h"

@class AMapGeoPoint, NSArray;

@interface AMapDistanceSearchRequest : AMapSearchObject
{
    NSArray *_origins;
    AMapGeoPoint *_destination;
    long long _type;
}

+ (id)ajo_arrayClassMapping;
+ (id)ajo_mapping;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) AMapGeoPoint *destination; // @synthesize destination=_destination;
@property(retain, nonatomic) NSArray *origins; // @synthesize origins=_origins;
- (void).cxx_destruct;
- (id)init;

@end

