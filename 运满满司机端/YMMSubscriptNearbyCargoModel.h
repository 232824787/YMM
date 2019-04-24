//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSArray, NSString;

@interface YMMSubscriptNearbyCargoModel : YMMCommonModel
{
    _Bool _showNearbyCargoList;
    NSString *_title;
    NSString *_subTitle;
    NSString *_subShortTitle;
    NSString *_countTips;
    NSArray *_pictures;
    NSString *_nearbyNewCargoTip;
    long long _supportDistanceFeature;
    long long _supportFilterByNearPickupFeature;
    long long _supportFilterByShipDistanceFeature;
}

+ (Class)ymm_classForCollectionPropertyName:(id)arg1;
@property(nonatomic) _Bool showNearbyCargoList; // @synthesize showNearbyCargoList=_showNearbyCargoList;
@property(nonatomic) long long supportFilterByShipDistanceFeature; // @synthesize supportFilterByShipDistanceFeature=_supportFilterByShipDistanceFeature;
@property(nonatomic) long long supportFilterByNearPickupFeature; // @synthesize supportFilterByNearPickupFeature=_supportFilterByNearPickupFeature;
@property(nonatomic) long long supportDistanceFeature; // @synthesize supportDistanceFeature=_supportDistanceFeature;
@property(copy, nonatomic) NSString *nearbyNewCargoTip; // @synthesize nearbyNewCargoTip=_nearbyNewCargoTip;
@property(retain, nonatomic) NSArray *pictures; // @synthesize pictures=_pictures;
@property(copy, nonatomic) NSString *countTips; // @synthesize countTips=_countTips;
@property(copy, nonatomic) NSString *subShortTitle; // @synthesize subShortTitle=_subShortTitle;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

