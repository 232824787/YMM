//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HCBPetrolBaseJSONModel.h"

@class NSArray, NSString;

@interface HCBScanPayEstimateEnterpriceOrderAmountModel : HCBPetrolBaseJSONModel
{
    NSString *_payAmount;
    NSArray *_descItemList;
    NSString *_descItemTotal;
    NSString *_statementText;
    NSString *_oilOriginAmount;
    NSString *_hasOilCard;
    NSString *_balance;
    NSString *_oilAmount;
}

+ (id)modelContainerPropertyGenericClass;
@property(copy, nonatomic) NSString *oilAmount; // @synthesize oilAmount=_oilAmount;
@property(copy, nonatomic) NSString *balance; // @synthesize balance=_balance;
@property(copy, nonatomic) NSString *hasOilCard; // @synthesize hasOilCard=_hasOilCard;
@property(copy, nonatomic) NSString *oilOriginAmount; // @synthesize oilOriginAmount=_oilOriginAmount;
@property(copy, nonatomic) NSString *statementText; // @synthesize statementText=_statementText;
@property(copy, nonatomic) NSString *descItemTotal; // @synthesize descItemTotal=_descItemTotal;
@property(retain, nonatomic) NSArray *descItemList; // @synthesize descItemList=_descItemList;
@property(copy, nonatomic) NSString *payAmount; // @synthesize payAmount=_payAmount;
- (void).cxx_destruct;

@end

