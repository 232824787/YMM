//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HCBLoanBaseViewModel.h"

@class HCBLoanDeferInfoModel, HCBLoanDeferStatusModel, NSString;

@interface HCBLoanDeferInfoViewModel : HCBLoanBaseViewModel
{
    _Bool _selectProtocol;
    HCBLoanDeferInfoModel *_deferModel;
    HCBLoanDeferStatusModel *_deferStatusModel;
    NSString *_loanProjNo;
    NSString *_installId;
}

+ (id)deferInfoWithloanProjNo:(id)arg1 installId:(id)arg2;
@property(copy, nonatomic) NSString *installId; // @synthesize installId=_installId;
@property(copy, nonatomic) NSString *loanProjNo; // @synthesize loanProjNo=_loanProjNo;
@property(retain, nonatomic) HCBLoanDeferStatusModel *deferStatusModel; // @synthesize deferStatusModel=_deferStatusModel;
@property(retain, nonatomic) HCBLoanDeferInfoModel *deferModel; // @synthesize deferModel=_deferModel;
@property(nonatomic) _Bool selectProtocol; // @synthesize selectProtocol=_selectProtocol;
- (void).cxx_destruct;
- (void)startSendDeferWithCompletion:(CDUnknownBlockType)arg1;
- (void)startRequestDeferInfoWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

@end

