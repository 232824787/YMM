//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface HCBLoanNetwork : NSObject
{
}

+ (void)createInsuranceOrderWith:(id)arg1 completion:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
+ (void)calculateInsuranceOrderWith:(id)arg1 completion:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
+ (void)commitAgreementDealInfoWithParam:(id)arg1 completion:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
+ (void)queryAgreementDealInfoWithParam:(id)arg1 completion:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
+ (void)query4ElemBankInfoWithParam:(id)arg1 completion:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
+ (void)applyQuickCashLoanWithParam:(id)arg1 completion:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
+ (void)queryTermProductWithParam:(id)arg1 completion:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
+ (void)queryDebitNotesWithParam:(id)arg1 completion:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
+ (void)fetchBorrowInfoPageConfigWithParam:(id)arg1 completion:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
+ (void)queryAdListWithParam:(id)arg1 completion:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
+ (void)sixElemsUploadIdCardsWithParam:(id)arg1 completion:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
+ (void)send6ElemsVerificationCodeWithParam:(id)arg1 completion:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
+ (void)check4ElemsWithParam:(id)arg1 completion:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
+ (void)sixElemAuthPageQuery4ElemAuthInfoWithCompletion:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
+ (void)fetch6ElemAuthPageConfigWithCompletion:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
+ (void)query6ElemAuthOpenStatusWithParam:(id)arg1 completion:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
+ (void)load6ElemAuthOpenSuccessInfoWithParam:(id)arg1 completion:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
+ (void)queryAppCardInfoWithParam:(id)arg1 completion:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
+ (void)queryUserRealNameWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)collectDeviceInformationWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)loanQueryUserIdcardWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)loanQueryAuthFourElementWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)loanConfirmAccountAuthWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)lciQueryContractListWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)lciAgainSignContractWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)lciCheckKinsfolkPhoneWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)applyCashLoanWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)cashProductListWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)memberCreditLimitWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)queryCreditRatingLimitWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)uploadExtendInfoWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)lciQueryUserCollectInfoWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)sendVerificationCodeWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)queryUserDepositInfoWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)queryAuditCaseWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)queryRiskStatusWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)queryCalculateCreditLimitCaseWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)uploadUserFileWithParam:(id)arg1 data:(id)arg2 onComplete:(CDUnknownBlockType)arg3 onError:(CDUnknownBlockType)arg4;
+ (void)uploadUserIdCardWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)authFourElementWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)queryNewUserWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)loadLoanNewUserHomeInfoWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)loanSendSignBankCodeWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)loanUploadCredentialsInfoWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)loanQueryUserCredentialsInfoWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)loanUpdateBankPhoneWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)loanValidateNewBankPhoneWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)loanQueryMyBankListWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)loanQueryMyHomePageWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)loanQueryRepayAmountWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)loanTopUpPageWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)loanSendVerifyCodeWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)loanConfirmUnfreezeWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)loanSMSCodePageInfoWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)loanApplyunfreezeWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)loanRunHomePageWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)queryMyBottomMsgWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)applyInsurancePledgeLoanWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)sendSMSCode4PPLoanWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)getInsuranceContractListWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)applyTentativeCaculationWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)queryDrawingsDetailWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)queryUserInsuranceCreditWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)queryUserAccountStatusWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)queryInsuracneProtocolWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)addCompanyEnterpriseWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)insuranceApplyQueryWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)loanRecordQueryWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)billRequestOrderNoWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)otherRepayWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)queryAllUnrepayWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)queryLoanBillListWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)queryHistoryRepayListWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)queryBillRecordWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)billDetailInfoWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)queryBillInfoWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)replenishGasLoanInforWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)queryCreditShowWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)validateProductWithCashWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)driverAuthFourWithCashWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)loanCollectUserInfoWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)queryLoanUserCollectInfoWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)queryLoanUseSceneWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)helpFillDataApplyWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)checkLoanUserStatusWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)queryCashLoanIndexWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)queryCashHomeOperationListWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)queryLoanHomeInfoWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)signContractByAccountTypeWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)queryUserIncompleteInfoWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)queryWaitRepayBarInfoWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)applyWithCashLoanWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)sendVerifyCodeWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)checkReplenishInforIsCompletedWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)queryProductsWithCashLoanWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)queryCashLoanCreditWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)queryDeferJumpURLWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)sendDeferInfoWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)queryDeferInfoDetailWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)checkKinsfolkPhoneWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)repayBillInfoWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)againSignContractWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)collectDriverInfoWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)driverAuthFourWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)couponReceiveWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)submitCreditExtraInfoWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)uploadDriverIdCardWithData:(id)arg1 param:(id)arg2 onComplete:(CDUnknownBlockType)arg3 onError:(CDUnknownBlockType)arg4;
+ (void)queryShouldRepaymentTotalWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)queryRepayPageURLWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)requestOrderNoWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)getUserWhiteProtocolWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)repayProjectInfoWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)queryLoanProjectListWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)queryWaitRepayListWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)queryHistoryRepayListRequestWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)queryWhiteDetailWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)checkIsopenWhiteWithParam:(id)arg1 onComplete:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
+ (void)startRequestNoToastApi:(id)arg1 param:(id)arg2 onComplete:(CDUnknownBlockType)arg3 onError:(CDUnknownBlockType)arg4;
+ (void)startRequestApi:(id)arg1 param:(id)arg2 configuration:(CDUnknownBlockType)arg3 onComplete:(CDUnknownBlockType)arg4 onError:(CDUnknownBlockType)arg5;
+ (void)p_setupCommonParamsForRequest:(id)arg1;
+ (id)supportedBankListUrl;
+ (id)host;
+ (_Bool)isDevEnv;

@end

