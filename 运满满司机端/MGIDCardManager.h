//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MGLicenseManager.h"

@interface MGIDCardManager : MGLicenseManager
{
    unsigned long long _screenOrientation;
}

+ (id)IDCardVersion;
+ (_Bool)getLicense;
+ (id)getLicenseDate;
@property(nonatomic) unsigned long long screenOrientation; // @synthesize screenOrientation=_screenOrientation;
- (void)IDCardStartDetection:(id)arg1 IdCardSide:(unsigned long long)arg2 finish:(CDUnknownBlockType)arg3 errr:(CDUnknownBlockType)arg4;
- (id)init;

@end

