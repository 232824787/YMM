//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSString, YMMCargoDepositGuaranteeModel;

@interface DepositGuarantee : YMMCommonModel
{
    long long _model;
    NSString *_depositGuaranteeReturn;
    NSString *_depositGuaranteeNotReturn;
    YMMCargoDepositGuaranteeModel *_depositGuaranteeItem;
}

+ (Class)ymm_classForCollectionPropertyName:(id)arg1;
@property(retain, nonatomic) YMMCargoDepositGuaranteeModel *depositGuaranteeItem; // @synthesize depositGuaranteeItem=_depositGuaranteeItem;
@property(copy, nonatomic) NSString *depositGuaranteeNotReturn; // @synthesize depositGuaranteeNotReturn=_depositGuaranteeNotReturn;
@property(copy, nonatomic) NSString *depositGuaranteeReturn; // @synthesize depositGuaranteeReturn=_depositGuaranteeReturn;
@property(nonatomic) long long model; // @synthesize model=_model;
- (void).cxx_destruct;

@end

