//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VFSDKBaseModelObject.h"

@class NSString;

@interface VFSDKVouChargeModel : VFSDKBaseModelObject
{
    NSString *_voucherId;
    NSString *_voucherNo;
    NSString *_status;
}

@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *voucherNo; // @synthesize voucherNo=_voucherNo;
@property(copy, nonatomic) NSString *voucherId; // @synthesize voucherId=_voucherId;
- (void).cxx_destruct;
- (id)attributeMapDictionary;

@end

