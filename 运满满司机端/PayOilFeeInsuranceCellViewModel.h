//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PayOilFeeBaseCellViewModel.h"

@class NSMutableAttributedString, NSString;

@interface PayOilFeeInsuranceCellViewModel : PayOilFeeBaseCellViewModel
{
    _Bool _isSelected;
    NSString *_insuranceName;
    NSString *_insurancePrice;
    NSMutableAttributedString *_insuranceOriginPrice;
    NSString *_insuranceDesc;
}

@property(copy, nonatomic) NSString *insuranceDesc; // @synthesize insuranceDesc=_insuranceDesc;
@property(copy, nonatomic) NSMutableAttributedString *insuranceOriginPrice; // @synthesize insuranceOriginPrice=_insuranceOriginPrice;
@property(copy, nonatomic) NSString *insurancePrice; // @synthesize insurancePrice=_insurancePrice;
@property(copy, nonatomic) NSString *insuranceName; // @synthesize insuranceName=_insuranceName;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
- (void).cxx_destruct;
- (id)priceAttributedStringWithPrice:(id)arg1;
- (id)initWithModel:(id)arg1;

@end

