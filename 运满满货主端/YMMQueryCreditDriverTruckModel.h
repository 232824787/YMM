//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSString;

@interface YMMQueryCreditDriverTruckModel : YMMCommonModel
{
    long long _truckType;
    long long _truckLoad;
    long long _truckAge;
    long long _truckLoadNew;
    NSString *_truckNumber;
    NSString *_truckLength;
}

@property(copy, nonatomic) NSString *truckLength; // @synthesize truckLength=_truckLength;
@property(copy, nonatomic) NSString *truckNumber; // @synthesize truckNumber=_truckNumber;
@property(nonatomic) long long truckLoadNew; // @synthesize truckLoadNew=_truckLoadNew;
@property(nonatomic) long long truckAge; // @synthesize truckAge=_truckAge;
@property(nonatomic) long long truckLoad; // @synthesize truckLoad=_truckLoad;
@property(nonatomic) long long truckType; // @synthesize truckType=_truckType;
- (void).cxx_destruct;

@end

