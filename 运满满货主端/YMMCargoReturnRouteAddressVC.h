//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCargoBaseViewController.h"

#import "BMKPoiSearchDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "YMMCargoReturnRouteAddressContentViewDelegate.h"

@class BMKCitySearchOption, BMKPoiSearch, NSArray, NSString, YMMBaseTableView, YMMCargoReturnRouteAddressContentView, YMMCargoReturnRouteAddressModel, YMMCargoReturnRouteAddressNewHeaderView, YMMRegion;

@interface YMMCargoReturnRouteAddressVC : YMMCargoBaseViewController <UITableViewDelegate, UITableViewDataSource, YMMCargoReturnRouteAddressContentViewDelegate, BMKPoiSearchDelegate>
{
    _Bool _onlyOneAddress;
    _Bool _showTableView;
    _Bool _tempNoPoi;
    NSString *_tip;
    unsigned long long _type;
    YMMCargoReturnRouteAddressModel *_model;
    YMMRegion *_region;
    NSArray *_associateAddressArray;
    BMKPoiSearch *_bmkPoiSearch;
    BMKCitySearchOption *_searchOption;
    NSString *_poi_backAddressMainTitle;
    YMMBaseTableView *_tableView;
    YMMCargoReturnRouteAddressNewHeaderView *_sectionHeaderView;
    YMMCargoReturnRouteAddressContentView *_contentView;
}

@property(retain, nonatomic) YMMCargoReturnRouteAddressContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) YMMCargoReturnRouteAddressNewHeaderView *sectionHeaderView; // @synthesize sectionHeaderView=_sectionHeaderView;
@property(retain, nonatomic) YMMBaseTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool tempNoPoi; // @synthesize tempNoPoi=_tempNoPoi;
@property(nonatomic) _Bool showTableView; // @synthesize showTableView=_showTableView;
@property(copy, nonatomic) NSString *poi_backAddressMainTitle; // @synthesize poi_backAddressMainTitle=_poi_backAddressMainTitle;
@property(retain, nonatomic) BMKCitySearchOption *searchOption; // @synthesize searchOption=_searchOption;
@property(retain, nonatomic) BMKPoiSearch *bmkPoiSearch; // @synthesize bmkPoiSearch=_bmkPoiSearch;
@property(retain, nonatomic) NSArray *associateAddressArray; // @synthesize associateAddressArray=_associateAddressArray;
@property(retain, nonatomic) YMMRegion *region; // @synthesize region=_region;
@property(retain, nonatomic) YMMCargoReturnRouteAddressModel *model; // @synthesize model=_model;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *tip; // @synthesize tip=_tip;
@property(nonatomic) _Bool onlyOneAddress; // @synthesize onlyOneAddress=_onlyOneAddress;
- (void).cxx_destruct;
- (void)pushSelectCityVC;
- (id)filterPoiList:(id)arg1;
- (void)onGetPoiResult:(id)arg1 result:(id)arg2 errorCode:(int)arg3;
- (void)requestForBaiduPoi;
- (void)didClickConfirmBtn;
- (void)didClickCitySelect:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)inputText:(id)arg1 view:(id)arg2;
- (void)autoLayoutFrameSize:(struct CGSize)arg1 view:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)initViews;
- (void)requestAddressAPI;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithType:(unsigned long long)arg1 model:(id)arg2 tip:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

