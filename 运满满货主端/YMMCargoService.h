//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YMMCargoCellDelegate.h"
#import "YMMCargoServiceProtocol.h"
#import "YMMRNServiceProtocol.h"

@class NSArray, NSDictionary, NSMutableArray, NSNumber, NSString;

@interface YMMCargoService : NSObject <YMMCargoCellDelegate, YMMRNServiceProtocol, YMMCargoServiceProtocol>
{
    NSNumber *_cargoId;
    NSString *_ymm_pageName;
    NSString *_ymm_referPageName;
    unsigned long long _cargoListType;
    NSDictionary *_filterDictForJournal;
    id <YMMMineServiceProtocol> _mineSerevice;
    NSMutableArray *_showedCargoList;
    NSMutableArray *_cargoViewArray;
    NSMutableArray *_cargoLoingViewArray;
    NSArray *_cargoListArray;
}

+ (id)getMianCargoListVC;
@property(retain, nonatomic) NSArray *cargoListArray; // @synthesize cargoListArray=_cargoListArray;
@property(retain, nonatomic) NSMutableArray *cargoLoingViewArray; // @synthesize cargoLoingViewArray=_cargoLoingViewArray;
@property(retain, nonatomic) NSMutableArray *cargoViewArray; // @synthesize cargoViewArray=_cargoViewArray;
@property(retain, nonatomic) NSMutableArray *showedCargoList; // @synthesize showedCargoList=_showedCargoList;
@property(retain, nonatomic) id <YMMMineServiceProtocol> mineSerevice; // @synthesize mineSerevice=_mineSerevice;
@property(retain, nonatomic) NSDictionary *filterDictForJournal; // @synthesize filterDictForJournal=_filterDictForJournal;
@property(nonatomic) unsigned long long cargoListType; // @synthesize cargoListType=_cargoListType;
@property(copy, nonatomic) NSString *ymm_referPageName; // @synthesize ymm_referPageName=_ymm_referPageName;
@property(copy, nonatomic) NSString *ymm_pageName; // @synthesize ymm_pageName=_ymm_pageName;
@property(retain, nonatomic) NSNumber *cargoId; // @synthesize cargoId=_cargoId;
- (void).cxx_destruct;
- (void)dealloc;
- (void)addJournalForNearbyPathCargoRecommendAppear;
- (void)addJournalForNearbyNewCargoesDidTapWithPosition:(long long)arg1 CargoModel:(id)arg2;
- (void)addJournalForContact:(id)arg1;
- (void)uploadCargoLongViewJournal;
- (void)uploadCargoViewJournal;
- (void)addJournalForCargoDisAppear:(id)arg1 indexPath:(id)arg2;
- (void)addJournalForCargoShowed:(id)arg1 indexPath:(id)arg2;
- (void)addJournalForCargoClick:(id)arg1 index:(id)arg2;
- (void)gotoViewController:(id)arg1 params:(id)arg2;
- (void)uploadCargoViews;
- (void)addUploadCargoViewsOberver;
- (void)clickedContactButton:(id)arg1;
- (void)ymm_tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 model:(id)arg4;
- (void)ymm_tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 model:(id)arg4 actionBlock:(CDUnknownBlockType)arg5;
- (id)ymm_tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 model:(id)arg3;
- (double)ymm_tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 model:(id)arg3;
- (void)ymm_tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 model:(id)arg3 actionBlock:(CDUnknownBlockType)arg4;
- (void)ymm_fetchReccomendCargos:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)ymm_fetchLocalCargoHistory:(unsigned long long)arg1;
- (void)ymm_saveCargoToLocalDB:(id)arg1 withCargoRecordType:(unsigned long long)arg2;
- (void)ymm_updateQuoteInfo:(id)arg1 quotePrice:(id)arg2;
- (void)ymm_setDetailId:(id)arg1 pageName:(id)arg2 refrePageName:(id)arg3;
- (void)scrollToTop:(id)arg1 journal:(_Bool)arg2;
- (void)performNativeMethod:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

