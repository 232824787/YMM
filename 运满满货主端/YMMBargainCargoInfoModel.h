//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSString;

@interface YMMBargainCargoInfoModel : YMMCommonModel
{
    int _bargainFinalStatusCode;
    NSString *_cargoId;
    NSString *_address;
    NSString *_bargainFinalStatus;
    NSString *_loadAddress;
    NSString *_loadTime;
    NSString *_otherInfo;
}

@property(copy, nonatomic) NSString *otherInfo; // @synthesize otherInfo=_otherInfo;
@property(copy, nonatomic) NSString *loadTime; // @synthesize loadTime=_loadTime;
@property(copy, nonatomic) NSString *loadAddress; // @synthesize loadAddress=_loadAddress;
@property(copy, nonatomic) NSString *bargainFinalStatus; // @synthesize bargainFinalStatus=_bargainFinalStatus;
@property(nonatomic) int bargainFinalStatusCode; // @synthesize bargainFinalStatusCode=_bargainFinalStatusCode;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(copy, nonatomic) NSString *cargoId; // @synthesize cargoId=_cargoId;
- (void).cxx_destruct;

@end

