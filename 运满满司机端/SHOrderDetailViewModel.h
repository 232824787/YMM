//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SHOrderDetailViewModel : NSObject
{
}

- (void)JounalForUploadReceiptSuccessWithPageName:(id)arg1 WithElementId:(id)arg2;
- (void)monitorForGoToDriverInfo:(id)arg1;
- (void)JounalForWitnessBtnTap:(long long)arg1 WithOrderId:(id)arg2 WithEntry:(long long)arg3;
- (void)JounalForDetailPageView:(long long)arg1;
- (void)JounalForReceiptBtnTap;
- (void)JounalForEnsureCellTap;
- (void)JounalForFreightCellTap;
- (void)JounalForPayFreightBtnTap;
- (void)JounalForDeliveredBtnTap:(id)arg1;
- (void)addJournalForIMStatus:(id)arg1 WithOrderId:(id)arg2 disableReason:(id)arg3;
- (void)addJournalWithElementId:(id)arg1 elementType:(id)arg2 WithOrderId:(id)arg3 needExtension:(_Bool)arg4;
- (void)addOrderDetailJournal:(id)arg1 WithErrorMsg:(id)arg2;
- (void)eContractTapJournal:(id)arg1;
- (void)showWitnessSealJournal:(id)arg1;
- (_Bool)mixProtocolShowWith:(id)arg1;
- (_Bool)witnessInfoCellShowWithWitnessInfo:(id)arg1;
- (_Bool)eProtocolCellShowWithPayStatus:(unsigned long long)arg1;
- (_Bool)receiptCellShowDriRegState:(long long)arg1 OrderType:(long long)arg2;
- (long long)commentCellShowWithOrderType:(long long)arg1;
- (long long)depositCellShowWithPayStatus:(long long)arg1;
- (_Bool)preciseLocalCellShowWithSMSLoc:(long long)arg1;
- (long long)mapViewShow:(long long)arg1 WithTracksArrayCount:(unsigned long long)arg2 WithOrderExpireFlag:(long long)arg3 WithRegisterState:(long long)arg4;

@end

