//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ETCInfo.h"

@class NSString;

@interface HCBCardOwnerRecord : NSObject <ETCInfo>
{
    NSString *_ownerId;
    NSString *_staffId;
    NSString *_ownerName;
    NSString *_ownerLicenseNumber;
    NSString *_ownerLicenseType;
}

@property(retain, nonatomic) NSString *ownerLicenseType; // @synthesize ownerLicenseType=_ownerLicenseType;
@property(retain, nonatomic) NSString *ownerLicenseNumber; // @synthesize ownerLicenseNumber=_ownerLicenseNumber;
@property(retain, nonatomic) NSString *ownerName; // @synthesize ownerName=_ownerName;
@property(retain, nonatomic) NSString *staffId; // @synthesize staffId=_staffId;
@property(retain, nonatomic) NSString *ownerId; // @synthesize ownerId=_ownerId;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

