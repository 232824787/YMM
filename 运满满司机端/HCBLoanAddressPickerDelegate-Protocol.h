//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HCBLoanAddressPicker, NSString;

@protocol HCBLoanAddressPickerDelegate <NSObject>
- (void)addressPicker:(HCBLoanAddressPicker *)arg1 didSelectedAddress:(NSString *)arg2;
- (void)addressPickerDidCanceled:(HCBLoanAddressPicker *)arg1;
@end

