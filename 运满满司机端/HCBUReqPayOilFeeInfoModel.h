//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HCBUStationBaseModel.h"

@class NSString;

@interface HCBUReqPayOilFeeInfoModel : HCBUStationBaseModel
{
    NSString *_jumpUrl;
    NSString *_isNeedPopUpPrompt;
    NSString *_title;
    NSString *_tipMsg;
    NSString *_name;
    long long _distance;
}

@property(nonatomic) long long distance; // @synthesize distance=_distance;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *tipMsg; // @synthesize tipMsg=_tipMsg;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *isNeedPopUpPrompt; // @synthesize isNeedPopUpPrompt=_isNeedPopUpPrompt;
@property(copy, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
- (void).cxx_destruct;

@end

