//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface HCBPetrolGasPayInfo : NSObject
{
    NSString *_gasStationId;
    NSString *_gasStationName;
    NSString *_gasStationAddress;
    NSArray *_payMethodList;
}

+ (id)modelContainerPropertyGenericClass;
@property(retain, nonatomic) NSArray *payMethodList; // @synthesize payMethodList=_payMethodList;
@property(copy, nonatomic) NSString *gasStationAddress; // @synthesize gasStationAddress=_gasStationAddress;
@property(copy, nonatomic) NSString *gasStationName; // @synthesize gasStationName=_gasStationName;
@property(copy, nonatomic) NSString *gasStationId; // @synthesize gasStationId=_gasStationId;
- (void).cxx_destruct;
- (id)getPayMethodWithPayChannel:(long long)arg1;

@end

