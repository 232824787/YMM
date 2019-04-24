//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HCBPetrolBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class HCBFreightCardDetailModel, HCBGasFilterCollectionView, HCBGasFilterInfoView, HCBGasFilterModel, HCBGasFilterView, HCBPerolHomeFilterModel, HCBPosition, HCBRegion, HCBRegionCollectionViewController, MBProgressHUD, NSArray, NSMutableArray, NSString, UIColor, UIImage, UINavigationController, UITableView, UIView;

@interface HCBFreightCardDetailViewController : HCBPetrolBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _isShowSelArea;
    _Bool _removeFromNavigationStackAfterPush;
    NSString *_source;
    UITableView *_freightCardTableView;
    HCBGasFilterView *_gasFilterView;
    HCBGasFilterInfoView *_gasFilterInfoView;
    HCBGasFilterCollectionView *_gasFilterCollectionView;
    UIView *_gasFilterCollectionViewContainer;
    NSArray *_homeFilterConditionArray;
    HCBGasFilterModel *_brandFilter;
    HCBRegion *_selectedCity;
    HCBRegionCollectionViewController *_selectCityController;
    HCBFreightCardDetailModel *_freightCardModel;
    MBProgressHUD *_hud;
    UIView *_emptyView;
    NSMutableArray *_gasStationListArray;
    HCBPerolHomeFilterModel *_perolHomefilterModel;
    HCBPosition *_curLoc;
    UINavigationController *_nav;
    UIColor *_originNavBarTintColor;
    UIImage *_originNavBarBackgroundImage;
}

@property(nonatomic) _Bool removeFromNavigationStackAfterPush; // @synthesize removeFromNavigationStackAfterPush=_removeFromNavigationStackAfterPush;
@property(retain, nonatomic) UIImage *originNavBarBackgroundImage; // @synthesize originNavBarBackgroundImage=_originNavBarBackgroundImage;
@property(retain, nonatomic) UIColor *originNavBarTintColor; // @synthesize originNavBarTintColor=_originNavBarTintColor;
@property(nonatomic) __weak UINavigationController *nav; // @synthesize nav=_nav;
@property(retain, nonatomic) HCBPosition *curLoc; // @synthesize curLoc=_curLoc;
@property(retain, nonatomic) HCBPerolHomeFilterModel *perolHomefilterModel; // @synthesize perolHomefilterModel=_perolHomefilterModel;
@property(retain, nonatomic) NSMutableArray *gasStationListArray; // @synthesize gasStationListArray=_gasStationListArray;
@property(retain, nonatomic) UIView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) MBProgressHUD *hud; // @synthesize hud=_hud;
@property(retain, nonatomic) HCBFreightCardDetailModel *freightCardModel; // @synthesize freightCardModel=_freightCardModel;
@property(nonatomic) _Bool isShowSelArea; // @synthesize isShowSelArea=_isShowSelArea;
@property(retain, nonatomic) HCBRegionCollectionViewController *selectCityController; // @synthesize selectCityController=_selectCityController;
@property(retain, nonatomic) HCBRegion *selectedCity; // @synthesize selectedCity=_selectedCity;
@property(retain, nonatomic) HCBGasFilterModel *brandFilter; // @synthesize brandFilter=_brandFilter;
@property(retain, nonatomic) NSArray *homeFilterConditionArray; // @synthesize homeFilterConditionArray=_homeFilterConditionArray;
@property(retain, nonatomic) UIView *gasFilterCollectionViewContainer; // @synthesize gasFilterCollectionViewContainer=_gasFilterCollectionViewContainer;
@property(retain, nonatomic) HCBGasFilterCollectionView *gasFilterCollectionView; // @synthesize gasFilterCollectionView=_gasFilterCollectionView;
@property(retain, nonatomic) HCBGasFilterInfoView *gasFilterInfoView; // @synthesize gasFilterInfoView=_gasFilterInfoView;
@property(retain, nonatomic) HCBGasFilterView *gasFilterView; // @synthesize gasFilterView=_gasFilterView;
@property(retain, nonatomic) UITableView *freightCardTableView; // @synthesize freightCardTableView=_freightCardTableView;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
- (void).cxx_destruct;
- (id)setupPVPageValues;
- (id)setupPVCurrentPageName;
- (void)didReceiveMemoryWarning;
- (void)removeEmptyView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)featchMoreStationList;
- (void)reqGetHomeStationListWithFilterInfo:(id)arg1 WithEnd:(CDUnknownBlockType)arg2;
- (void)featchStationListOnFinished:(CDUnknownBlockType)arg1;
- (void)reqFilterConditionWithLat:(id)arg1 lng:(id)arg2 end:(CDUnknownBlockType)arg3;
- (void)fetchFilterConditionOnFinished:(CDUnknownBlockType)arg1;
- (void)fetchFreightCardDetail;
- (void)fetchIsHaveFreightCard;
- (void)loadSourceData;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)didTapCitySwitcher:(id)arg1;
- (void)regionCollectionViewController:(id)arg1 didMultiselectRegions:(id)arg2;
- (void)persistentHistoryInAreaCollectionViewController:(id)arg1;
- (void)regionCollectionViewController:(id)arg1 didSelectRegion:(id)arg2;
- (void)filterCollectionViewAdditionCellDidSelect;
- (void)filterCollectionViewFinishFilterWithItemIndexPaths:(id)arg1;
- (void)gasFilterCollectionViewContainerTap;
- (void)hideGasFilterCollectionView;
- (void)showGasFilterCollectionView;
- (void)pushToGasDetailVCWithGasStationId:(long long)arg1;
- (id)tableView:(id)arg1 perolListCellWithIndexPath:(id)arg2;
- (id)tableView:(id)arg1 perolListNoNetworkCellWithIndexPath:(id)arg2;
- (id)tableView:(id)arg1 perolListNearTitleCellWithIndexPath:(id)arg2;
- (id)tableView:(id)arg1 perolListNoneCellWithIndexPath:(id)arg2;
- (double)getGasInfoCellHeightWithRowNum:(long long)arg1;
- (id)historySelectionsFromUDWithKey:(id)arg1;
- (void)handleLocWithHasLocation:(_Bool)arg1 position:(id)arg2 finished:(CDUnknownBlockType)arg3;
- (void)showAreaView:(id)arg1 isShow:(_Bool)arg2;
- (void)showGasFilterInfoView:(id)arg1 keyValue:(id)arg2 selected:(_Bool)arg3;
- (void)reloadTableView;
- (void)setupSelectedRegionInfo:(id)arg1;
- (void)setupFilterAndReReqGasStationList;
- (void)setupHomeFilter;
- (void)setupRefreshView;
- (void)setupUI;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)removeFromNavigationStack;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithHCBNavigatorURL:(id)arg1 query:(id)arg2 complete:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

