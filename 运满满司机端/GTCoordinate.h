//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DecodableObject.h"

@class GTLocation, NSNumber;

@interface GTCoordinate : DecodableObject
{
    NSNumber *_identifier;
    NSNumber *_locationId;
    NSNumber *_longitude;
    NSNumber *_latitude;
    NSNumber *_updateTime;
    NSNumber *_cityId;
    GTLocation *_location;
}

@property(retain, nonatomic) GTLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) NSNumber *cityId; // @synthesize cityId=_cityId;
@property(retain, nonatomic) NSNumber *updateTime; // @synthesize updateTime=_updateTime;
@property(retain, nonatomic) NSNumber *latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) NSNumber *longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) NSNumber *locationId; // @synthesize locationId=_locationId;
@property(retain, nonatomic) NSNumber *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;

@end

