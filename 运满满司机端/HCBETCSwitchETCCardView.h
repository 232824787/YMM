//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class ETCCardInfo, NSMutableArray, NSString, UIButton, UITableView;

@interface HCBETCSwitchETCCardView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    NSMutableArray *_dataSource;
    ETCCardInfo *_currentCard;
    CDUnknownBlockType _switchCardBlock;
    CDUnknownBlockType _backBlock;
    UITableView *_tableView;
    UIButton *_backBtn;
}

@property(nonatomic) __weak UIButton *backBtn; // @synthesize backBtn=_backBtn;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) CDUnknownBlockType backBlock; // @synthesize backBlock=_backBlock;
@property(copy, nonatomic) CDUnknownBlockType switchCardBlock; // @synthesize switchCardBlock=_switchCardBlock;
@property(retain, nonatomic) ETCCardInfo *currentCard; // @synthesize currentCard=_currentCard;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)clickBackBtn:(id)arg1;
- (void)loadUI;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

