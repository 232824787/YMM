//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseModel.h"

@class NSNumber, NSString;

@interface YFNetLocationBody : YMMBaseModel
{
    NSNumber *_lat;
    NSNumber *_lng;
    NSNumber *_gcjLat;
    NSNumber *_gcjLng;
    NSString *_addr;
}

@property(copy, nonatomic) NSString *addr; // @synthesize addr=_addr;
@property(retain, nonatomic) NSNumber *gcjLng; // @synthesize gcjLng=_gcjLng;
@property(retain, nonatomic) NSNumber *gcjLat; // @synthesize gcjLat=_gcjLat;
@property(retain, nonatomic) NSNumber *lng; // @synthesize lng=_lng;
@property(retain, nonatomic) NSNumber *lat; // @synthesize lat=_lat;
- (void).cxx_destruct;

@end

