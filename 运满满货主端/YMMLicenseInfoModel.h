//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseModel.h"

@class NSString;

@interface YMMLicenseInfoModel : YMMBaseModel
{
    NSString *_name;
    NSString *_hint;
    NSString *_date;
    NSString *_licenseName;
    long long _status;
    long long _licenseType;
    NSString *_licenseNo;
}

@property(copy, nonatomic) NSString *licenseNo; // @synthesize licenseNo=_licenseNo;
@property(nonatomic) long long licenseType; // @synthesize licenseType=_licenseType;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *licenseName; // @synthesize licenseName=_licenseName;
@property(copy, nonatomic) NSString *date; // @synthesize date=_date;
@property(copy, nonatomic) NSString *hint; // @synthesize hint=_hint;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

