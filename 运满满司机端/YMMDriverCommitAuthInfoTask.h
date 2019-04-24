//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonNetworkTask.h"

@class NSArray, NSNumber, NSString;

@interface YMMDriverCommitAuthInfoTask : YMMCommonNetworkTask
{
    NSString *_userName;
    NSString *_idCard;
    NSString *_licenceNo;
    long long _truckType;
    NSNumber *_truckLength;
    NSNumber *_truckLoad;
    long long _truckBirth;
    NSString *_brand;
    NSArray *_picParams;
    long long _userProtocol;
    NSString *_driverLicenseRequestId;
    NSString *_vehicleLicenseRequestId;
}

@property(copy, nonatomic) NSString *vehicleLicenseRequestId; // @synthesize vehicleLicenseRequestId=_vehicleLicenseRequestId;
@property(copy, nonatomic) NSString *driverLicenseRequestId; // @synthesize driverLicenseRequestId=_driverLicenseRequestId;
@property(nonatomic) long long userProtocol; // @synthesize userProtocol=_userProtocol;
@property(copy, nonatomic) NSArray *picParams; // @synthesize picParams=_picParams;
@property(copy, nonatomic) NSString *brand; // @synthesize brand=_brand;
@property(nonatomic) long long truckBirth; // @synthesize truckBirth=_truckBirth;
@property(retain, nonatomic) NSNumber *truckLoad; // @synthesize truckLoad=_truckLoad;
@property(retain, nonatomic) NSNumber *truckLength; // @synthesize truckLength=_truckLength;
@property(nonatomic) long long truckType; // @synthesize truckType=_truckType;
@property(copy, nonatomic) NSString *licenceNo; // @synthesize licenceNo=_licenceNo;
@property(copy, nonatomic) NSString *idCard; // @synthesize idCard=_idCard;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (void).cxx_destruct;
- (_Bool)ymm_needActionResponse;
- (id)ymm_requestBody;
- (Class)ymm_responseModelClass;
- (id)ymm_networkAPIPath;

@end

