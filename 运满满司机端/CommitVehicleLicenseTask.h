//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonNetworkTask.h"

@class NSString;

@interface CommitVehicleLicenseTask : YMMCommonNetworkTask
{
    NSString *_registerDate;
    NSString *_plateNo;
    NSString *_carType;
    NSString *_brand;
    NSString *_owner;
    NSString *_issueDate;
    NSString *_annualAuditValidDate;
    NSString *_licenseFirstPic;
    NSString *_licenseSecPic;
    NSString *_engineNo;
    NSString *_vin;
    NSString *_useCharacter;
    NSString *_address;
}

@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(copy, nonatomic) NSString *useCharacter; // @synthesize useCharacter=_useCharacter;
@property(copy, nonatomic) NSString *vin; // @synthesize vin=_vin;
@property(copy, nonatomic) NSString *engineNo; // @synthesize engineNo=_engineNo;
@property(copy, nonatomic) NSString *licenseSecPic; // @synthesize licenseSecPic=_licenseSecPic;
@property(copy, nonatomic) NSString *licenseFirstPic; // @synthesize licenseFirstPic=_licenseFirstPic;
@property(copy, nonatomic) NSString *annualAuditValidDate; // @synthesize annualAuditValidDate=_annualAuditValidDate;
@property(copy, nonatomic) NSString *issueDate; // @synthesize issueDate=_issueDate;
@property(copy, nonatomic) NSString *owner; // @synthesize owner=_owner;
@property(copy, nonatomic) NSString *brand; // @synthesize brand=_brand;
@property(copy, nonatomic) NSString *carType; // @synthesize carType=_carType;
@property(copy, nonatomic) NSString *plateNo; // @synthesize plateNo=_plateNo;
@property(copy, nonatomic) NSString *registerDate; // @synthesize registerDate=_registerDate;
- (void).cxx_destruct;
- (Class)ymm_responseModelClass;
- (id)ymm_networkAPIPath;

@end

