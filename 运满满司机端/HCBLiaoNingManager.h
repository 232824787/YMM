//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface HCBLiaoNingManager : NSObject
{
    NSString *_terminalId;
    NSString *_netNodeId;
    NSString *_cardVersion;
    NSString *_adjustedCredit;
}

+ (id)sharedHCBLiaoNingManager;
@property(copy, nonatomic) NSString *adjustedCredit; // @synthesize adjustedCredit=_adjustedCredit;
@property(copy, nonatomic) NSString *cardVersion; // @synthesize cardVersion=_cardVersion;
@property(copy, nonatomic) NSString *netNodeId; // @synthesize netNodeId=_netNodeId;
@property(copy, nonatomic) NSString *terminalId; // @synthesize terminalId=_terminalId;
- (void).cxx_destruct;
- (void)etc_loadConfirm:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)vfj_loadApplyWithCardNo:(id)arg1 withMoney:(id)arg2 withOrderId:(id)arg3 withCardTrace:(id)arg4 withCardHistory:(id)arg5 withRandom:(id)arg6 withBalance:(id)arg7 withMac:(id)arg8 applyBlock:(CDUnknownBlockType)arg9;
- (void)obu_loadCreditGetMac1:(id)arg1 credit:(id)arg2 withCardId:(id)arg3 withTerminalNo:(id)arg4 withPinCode:(id)arg5 withOrderId:(id)arg6 applyBlock:(CDUnknownBlockType)arg7;
- (void)etc_loadApply:(id)arg1 credit:(id)arg2 withOrderId:(id)arg3 withapplyBlock:(CDUnknownBlockType)arg4;
- (void)setupOBUWithBlock:(CDUnknownBlockType)arg1;
- (void)etc_baseCheckWithBlock:(CDUnknownBlockType)arg1;
- (void)etc_obuReadObuInfomationwithBlock:(CDUnknownBlockType)arg1;
- (void)etc_obuReadCardIssueBaseInfowithBlock:(CDUnknownBlockType)arg1;
- (void)etc_hcbReadCardTransactionRecordWithReadNumber:(long long)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)etc_hcbRecharge:(id)arg1 credit:(id)arg2 withOrderId:(id)arg3 withCardHistory:(id)arg4 withBlock:(CDUnknownBlockType)arg5;
- (void)etc_hcbReadCardOwnerRecordWithBlock:(CDUnknownBlockType)arg1;
- (void)etc_hcbReadCardInformationWithBlock:(CDUnknownBlockType)arg1;
- (void)etc_hcbinitWithTerminalId:(id)arg1 withNetNodeId:(id)arg2;

@end

