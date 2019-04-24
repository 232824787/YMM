//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AMapNaviSearchBaseRequest.h"

@class NSString;

@interface AMapNaviPOIKeywordsRequest : AMapNaviSearchBaseRequest
{
    NSString *_keywords;
    NSString *_city;
    NSString *_poiType;
    long long _offset;
    struct CLLocationCoordinate2D _coordinate;
}

@property(nonatomic) long long offset; // @synthesize offset=_offset;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property(copy, nonatomic) NSString *poiType; // @synthesize poiType=_poiType;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *keywords; // @synthesize keywords=_keywords;
- (void).cxx_destruct;
- (id)init;

@end

