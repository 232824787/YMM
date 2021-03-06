//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, YMMCargoCardItem, YMMIMBaseTableView, YMMIMCharOrderEmptyView;

@interface YMMIMCargoDataView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    CDUnknownBlockType _selectBlock;
    YMMIMBaseTableView *_tableView;
    YMMCargoCardItem *_listModel;
    unsigned long long _showType;
    long long _pageNo;
    YMMIMCharOrderEmptyView *_emptyView;
}

@property(retain, nonatomic) YMMIMCharOrderEmptyView *emptyView; // @synthesize emptyView=_emptyView;
@property(nonatomic) long long pageNo; // @synthesize pageNo=_pageNo;
@property(nonatomic) unsigned long long showType; // @synthesize showType=_showType;
@property(retain, nonatomic) YMMCargoCardItem *listModel; // @synthesize listModel=_listModel;
@property(retain, nonatomic) YMMIMBaseTableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) CDUnknownBlockType selectBlock; // @synthesize selectBlock=_selectBlock;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateEmptyViewIfNeccessary;
- (void)beginLoadData;
- (void)handleRefreshStateWithIsRefreshing:(_Bool)arg1;
- (void)handleRequestResult:(id)arg1 after:(long long)arg2 withError:(id)arg3 withIsRefresh:(_Bool)arg4;
- (void)requestServerAPIWithIsRefresh:(_Bool)arg1;
- (void)initContentView;
- (id)initWithCargoShowType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

