//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface GVCardInfo : NSObject
{
    NSData *_file0015;
    NSString *_provider;
    NSString *_cardType;
    NSString *_cardVersion;
    NSString *_cardId;
    NSString *_signedDate;
    NSString *_expiredDate;
    NSString *_vehicleNumber;
    NSString *_userType;
    NSString *_plateColor;
    NSString *_vehicleModel;
    NSString *_balance;
}

@property(retain, nonatomic) NSString *balance; // @synthesize balance=_balance;
@property(retain, nonatomic) NSString *vehicleModel; // @synthesize vehicleModel=_vehicleModel;
@property(retain, nonatomic) NSString *plateColor; // @synthesize plateColor=_plateColor;
@property(retain, nonatomic) NSString *userType; // @synthesize userType=_userType;
@property(retain, nonatomic) NSString *vehicleNumber; // @synthesize vehicleNumber=_vehicleNumber;
@property(retain, nonatomic) NSString *expiredDate; // @synthesize expiredDate=_expiredDate;
@property(retain, nonatomic) NSString *signedDate; // @synthesize signedDate=_signedDate;
@property(retain, nonatomic) NSString *cardId; // @synthesize cardId=_cardId;
@property(retain, nonatomic) NSString *cardVersion; // @synthesize cardVersion=_cardVersion;
@property(retain, nonatomic) NSString *cardType; // @synthesize cardType=_cardType;
@property(retain, nonatomic) NSString *provider; // @synthesize provider=_provider;
@property(retain, nonatomic) NSData *file0015; // @synthesize file0015=_file0015;
- (void).cxx_destruct;
- (id)description;

@end

