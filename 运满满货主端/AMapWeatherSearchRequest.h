//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AMapSearchObject.h"

@class NSString;

@interface AMapWeatherSearchRequest : AMapSearchObject
{
    NSString *_city;
    long long _type;
}

+ (id)ajo_mapping;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
- (void).cxx_destruct;
- (id)init;

@end

