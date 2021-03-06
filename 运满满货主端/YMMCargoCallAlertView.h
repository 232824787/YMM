//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMPopupMaskView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSDictionary, NSString, UIImageView, UITableView, UITapGestureRecognizer, UIViewController, YMMAdvertisementModel, YMMCallCargoInfoView, YMMCargoAlertContactModel, YMMCargoCallViewModel, YMMCargoModel, YMMRightCornerCloseButton;

@interface YMMCargoCallAlertView : YMMPopupMaskView <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _contactGetError;
    _Bool _showIM;
    _Bool _showIMMessage;
    _Bool _hasShowView;
    _Bool _hasShowAdView;
    YMMRightCornerCloseButton *_rightCornerCloseButton;
    UIImageView *_adsImageView;
    YMMCallCargoInfoView *_cargoInfoView;
    UIViewController *_currentVC;
    UITapGestureRecognizer *_advertisementSegueGesture;
    YMMCargoAlertContactModel *_contactModel;
    YMMAdvertisementModel *_adModel;
    YMMCargoCallViewModel *_viewModel;
    YMMCargoModel *_cargoMode;
    UITableView *_tableView;
    NSDictionary *_journalDict;
    struct CGRect _beginFrame;
}

@property(retain, nonatomic) NSDictionary *journalDict; // @synthesize journalDict=_journalDict;
@property(nonatomic) _Bool hasShowAdView; // @synthesize hasShowAdView=_hasShowAdView;
@property(nonatomic) _Bool hasShowView; // @synthesize hasShowView=_hasShowView;
@property(nonatomic) _Bool showIMMessage; // @synthesize showIMMessage=_showIMMessage;
@property(nonatomic) _Bool showIM; // @synthesize showIM=_showIM;
@property(nonatomic) _Bool contactGetError; // @synthesize contactGetError=_contactGetError;
@property(nonatomic) struct CGRect beginFrame; // @synthesize beginFrame=_beginFrame;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) YMMCargoModel *cargoMode; // @synthesize cargoMode=_cargoMode;
@property(retain, nonatomic) YMMCargoCallViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) YMMAdvertisementModel *adModel; // @synthesize adModel=_adModel;
@property(retain, nonatomic) YMMCargoAlertContactModel *contactModel; // @synthesize contactModel=_contactModel;
@property(retain, nonatomic) UITapGestureRecognizer *advertisementSegueGesture; // @synthesize advertisementSegueGesture=_advertisementSegueGesture;
@property(retain, nonatomic) UIViewController *currentVC; // @synthesize currentVC=_currentVC;
@property(retain, nonatomic) YMMCallCargoInfoView *cargoInfoView; // @synthesize cargoInfoView=_cargoInfoView;
@property(retain, nonatomic) UIImageView *adsImageView; // @synthesize adsImageView=_adsImageView;
@property(retain, nonatomic) YMMRightCornerCloseButton *rightCornerCloseButton; // @synthesize rightCornerCloseButton=_rightCornerCloseButton;
- (void).cxx_destruct;
- (void)addJournalForPageview;
- (void)addJournalForChat;
- (void)addJournalForCallShipper;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)gotoIMViewController;
- (void)chatShipperAction;
- (void)requetIM:(id)arg1;
- (void)requestAd;
- (void)requestTelephone:(id)arg1;
- (void)reloadView;
- (void)reloadAdImageView;
- (void)segueSchemeAdvertisement:(id)arg1;
- (void)closeAdsAlertView:(id)arg1;
- (void)showAlertView;
- (void)dismiss;
- (void)ymm_maskDoDisappear;
- (void)ymm_maskDidAppear;
- (void)ymm_maskDoAppear;
- (void)ymm_loadView;
- (double)ymm_animationDuration;
- (long long)cellNumber;
- (double)tableViewHeight;
- (double)heightOfButton;
- (double)widthOfContent;
- (double)heightOfFlexibleWidth;
- (double)heightOfFlexibleHeight;
- (id)initWithCargo:(id)arg1 beginFrame:(struct CGRect)arg2 currentVC:(id)arg3 journalDict:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

