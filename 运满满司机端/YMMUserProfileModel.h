//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface YMMUserProfileModel : NSObject
{
    _Bool _isPartyTag;
    NSString *_userId;
    NSString *_userName;
    long long _userType;
    NSString *_avatarPicture;
    NSString *_telephone;
    long long _location;
    long long _truckType;
    double _truckLength;
    NSString *_truckNumber;
    double _truckLoad;
    long long _truckBirth;
    NSString *_commonLines;
    long long _isDefinitionCar;
    NSString *_definitionCarTipUrl;
    NSString *_companyAddress;
    NSString *_companyName;
    NSString *_landlines;
    long long _depositStatus;
}

@property(nonatomic) long long depositStatus; // @synthesize depositStatus=_depositStatus;
@property(copy, nonatomic) NSString *landlines; // @synthesize landlines=_landlines;
@property(copy, nonatomic) NSString *companyName; // @synthesize companyName=_companyName;
@property(copy, nonatomic) NSString *companyAddress; // @synthesize companyAddress=_companyAddress;
@property(copy, nonatomic) NSString *definitionCarTipUrl; // @synthesize definitionCarTipUrl=_definitionCarTipUrl;
@property(nonatomic) long long isDefinitionCar; // @synthesize isDefinitionCar=_isDefinitionCar;
@property(nonatomic) _Bool isPartyTag; // @synthesize isPartyTag=_isPartyTag;
@property(retain, nonatomic) NSString *commonLines; // @synthesize commonLines=_commonLines;
@property(nonatomic) long long truckBirth; // @synthesize truckBirth=_truckBirth;
@property(nonatomic) double truckLoad; // @synthesize truckLoad=_truckLoad;
@property(retain, nonatomic) NSString *truckNumber; // @synthesize truckNumber=_truckNumber;
@property(nonatomic) double truckLength; // @synthesize truckLength=_truckLength;
@property(nonatomic) long long truckType; // @synthesize truckType=_truckType;
@property(nonatomic) long long location; // @synthesize location=_location;
@property(retain, nonatomic) NSString *telephone; // @synthesize telephone=_telephone;
@property(retain, nonatomic) NSString *avatarPicture; // @synthesize avatarPicture=_avatarPicture;
@property(nonatomic) long long userType; // @synthesize userType=_userType;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;

@end

