//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableAttributedString;

@interface HCBPetrolPayOilFeeVCModel : NSObject
{
    NSMutableArray *_cellViewModels;
    NSMutableAttributedString *_priceAttributedString;
}

@property(copy, nonatomic) NSMutableAttributedString *priceAttributedString; // @synthesize priceAttributedString=_priceAttributedString;
@property(retain, nonatomic) NSMutableArray *cellViewModels; // @synthesize cellViewModels=_cellViewModels;
- (void).cxx_destruct;
- (id)cellViewModelWithIdentify:(id)arg1;
- (id)priceAttributedStringWithPrice:(id)arg1;

@end

