//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface HCBETCApplyCardEmployeeModel : NSObject
{
    NSString *_address;
    NSString *_distanceStr;
    double _distance;
    long long _source;
    NSString *_title;
    NSString *_message;
    NSString *_tel;
    NSString *_lat;
    NSString *_lng;
    NSString *_name;
    NSString *_distanceString;
    NSString *_distanceStringShort;
}

@property(retain, nonatomic) NSString *distanceStringShort; // @synthesize distanceStringShort=_distanceStringShort;
@property(retain, nonatomic) NSString *distanceString; // @synthesize distanceString=_distanceString;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *lng; // @synthesize lng=_lng;
@property(retain, nonatomic) NSString *lat; // @synthesize lat=_lat;
@property(retain, nonatomic) NSString *tel; // @synthesize tel=_tel;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(nonatomic) double distance; // @synthesize distance=_distance;
@property(retain, nonatomic) NSString *distanceStr; // @synthesize distanceStr=_distanceStr;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
- (void).cxx_destruct;

@end

