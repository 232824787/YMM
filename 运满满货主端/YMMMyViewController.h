//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseViewController.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UITabBarControllerDelegate.h"
#import "YMMMineModuleControllerProtocol.h"
#import "YMMMyCustomCollectionViewDelegateFlowLayout.h"

@class NSDate, NSString, UIBarButtonItem, UICollectionView, UIImageView, YMMGuideView, YMMMineModulePresenter, YMMMyCustomViewFlowLayout;

@interface YMMMyViewController : YMMBaseViewController <UIScrollViewDelegate, YMMMineModuleControllerProtocol, UITabBarControllerDelegate, UICollectionViewDataSource, UICollectionViewDelegate, YMMMyCustomCollectionViewDelegateFlowLayout>
{
    _Bool _canRefreshWhenClickTab;
    _Bool _hided;
    _Bool _isShowingFeatureIndicator;
    id <YMMDependOnModuleProtocol> _tempDelegate;
    UICollectionView *_collectionView;
    UIBarButtonItem *_leftItem;
    UIBarButtonItem *_rightItem;
    UIImageView *_avatarView;
    YMMMyCustomViewFlowLayout *_flowLayout;
    YMMMineModulePresenter *_presenter;
    YMMGuideView *_guideView;
    NSDate *_startTime;
    NSDate *_firstLoadTime;
}

@property(retain, nonatomic) NSDate *firstLoadTime; // @synthesize firstLoadTime=_firstLoadTime;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(nonatomic) _Bool isShowingFeatureIndicator; // @synthesize isShowingFeatureIndicator=_isShowingFeatureIndicator;
@property(retain, nonatomic) YMMGuideView *guideView; // @synthesize guideView=_guideView;
@property(nonatomic) _Bool hided; // @synthesize hided=_hided;
@property(retain, nonatomic) YMMMineModulePresenter *presenter; // @synthesize presenter=_presenter;
@property(retain, nonatomic) YMMMyCustomViewFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UIBarButtonItem *rightItem; // @synthesize rightItem=_rightItem;
@property(retain, nonatomic) UIBarButtonItem *leftItem; // @synthesize leftItem=_leftItem;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) _Bool canRefreshWhenClickTab; // @synthesize canRefreshWhenClickTab=_canRefreshWhenClickTab;
@property(nonatomic) __weak id <YMMDependOnModuleProtocol> tempDelegate; // @synthesize tempDelegate=_tempDelegate;
- (void).cxx_destruct;
- (void)pageViewLog;
- (void)addCarrierCenterFirstLoadTimeJournal;
- (void)addCarrierCenterLoadTimeJournal;
- (void)tapEventLogWithElementId:(id)arg1 extra:(id)arg2;
- (void)tapEventLogWithElementId:(id)arg1;
- (void)presentToVCByScheme:(id)arg1;
- (void)syncPushToVCByScheme:(id)arg1;
- (void)pushToVCByScheme:(id)arg1;
- (void)reloadView;
- (void)stopLoading;
- (void)startLoading;
- (void)updateMineUIData;
- (void)reloadCollectionView;
- (void)showCreditSourceAletView;
- (double)calculateTextHeightWithWidth:(double)arg1 text:(id)arg2;
- (void)showDefineCarAlertWithCompletion:(CDUnknownBlockType)arg1;
- (void)showFeatureIndicator:(id)arg1 point:(struct CGPoint)arg2 arrowType:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)checkAlertsQueue;
- (void)reloadAuthenticatedStatus;
- (void)setNavigationBarAlpha:(double)arg1;
- (void)reloadNavigationBar;
- (void)gotoCopilotManagerVC;
- (void)gotoProfileVC;
- (void)gotoSystemViewController;
- (long long)countOfGroupList;
- (void)addNotification;
- (void)configNavItems;
- (void)registerCellForCollectionView;
- (void)scrollViewDidScroll:(id)arg1;
- (id)collectionView:(id)arg1 layout:(id)arg2 backgroundColorForSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)ymm_navBarTheme;
- (id)ymm_pageName;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

