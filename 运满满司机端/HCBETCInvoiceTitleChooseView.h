//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CALayer, HCBETCInvoiceTitlesModel, NSMutableArray, NSString, UIActivityIndicatorView, UIButton, UILabel, UITableView;

@interface HCBETCInvoiceTitleChooseView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    NSMutableArray *_dataSource;
    CDUnknownBlockType _addTitleBlock;
    CDUnknownBlockType _cancleBlock;
    CDUnknownBlockType _bindBlock;
    CALayer *_lineLayer;
    CALayer *_lineLayerBottom;
    UIButton *_buttonAddTitle;
    UIButton *_buttonCancle;
    UIButton *_buttonBindTitle;
    UILabel *_labHead;
    UITableView *_tableView;
    HCBETCInvoiceTitlesModel *_selectedTitleModel;
    UIActivityIndicatorView *_indicatorView;
    UIView *_noticeView;
}

@property(retain, nonatomic) UIView *noticeView; // @synthesize noticeView=_noticeView;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) HCBETCInvoiceTitlesModel *selectedTitleModel; // @synthesize selectedTitleModel=_selectedTitleModel;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UILabel *labHead; // @synthesize labHead=_labHead;
@property(retain, nonatomic) UIButton *buttonBindTitle; // @synthesize buttonBindTitle=_buttonBindTitle;
@property(retain, nonatomic) UIButton *buttonCancle; // @synthesize buttonCancle=_buttonCancle;
@property(retain, nonatomic) UIButton *buttonAddTitle; // @synthesize buttonAddTitle=_buttonAddTitle;
@property(retain, nonatomic) CALayer *lineLayerBottom; // @synthesize lineLayerBottom=_lineLayerBottom;
@property(retain, nonatomic) CALayer *lineLayer; // @synthesize lineLayer=_lineLayer;
@property(copy, nonatomic) CDUnknownBlockType bindBlock; // @synthesize bindBlock=_bindBlock;
@property(copy, nonatomic) CDUnknownBlockType cancleBlock; // @synthesize cancleBlock=_cancleBlock;
@property(copy, nonatomic) CDUnknownBlockType addTitleBlock; // @synthesize addTitleBlock=_addTitleBlock;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)updateSelectedTitleStatus;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)actionCancle:(id)arg1;
- (void)actionAddTitle:(id)arg1;
- (void)actionBindTitle:(id)arg1;
- (void)refreshTitlesList;
- (void)setupTitlesListData;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1 selectedTitle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

