//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseViewController.h"

#import "YMMTopTabbarDatasource.h"
#import "YMMTopTabbarDelegate.h"

@class NSMutableArray, NSString, UIImageView, UILabel, UIView, YMMCommentCenterConfigModel, YMMCommentTagsManager, YMMTopTabbarView;

@interface YMMOrderCommentCenterViewController : YMMBaseViewController <YMMTopTabbarDelegate, YMMTopTabbarDatasource>
{
    YMMTopTabbarView *_commentNavView;
    UIView *_noCommentedView;
    UILabel *_noCommentLabel;
    UIImageView *_noCommentArrowImageView;
    YMMCommentCenterConfigModel *_configModel;
    NSMutableArray *_itemArray;
    YMMCommentTagsManager *_tagsManager;
}

@property(retain, nonatomic) YMMCommentTagsManager *tagsManager; // @synthesize tagsManager=_tagsManager;
@property(retain, nonatomic) NSMutableArray *itemArray; // @synthesize itemArray=_itemArray;
@property(retain, nonatomic) YMMCommentCenterConfigModel *configModel; // @synthesize configModel=_configModel;
@property(retain, nonatomic) UIImageView *noCommentArrowImageView; // @synthesize noCommentArrowImageView=_noCommentArrowImageView;
@property(retain, nonatomic) UILabel *noCommentLabel; // @synthesize noCommentLabel=_noCommentLabel;
@property(retain, nonatomic) UIView *noCommentedView; // @synthesize noCommentedView=_noCommentedView;
@property(retain, nonatomic) YMMTopTabbarView *commentNavView; // @synthesize commentNavView=_commentNavView;
- (void).cxx_destruct;
- (id)ymm_pageName;
- (void)tabTapJournal;
- (void)tabPVJournal;
- (void)notificationTapJournal;
- (void)notificationPVJournal;
- (void)topTabbarView:(id)arg1 didSelectColumnAtIndex:(long long)arg2 fromIndex:(long long)arg3;
- (id)topTabbarView:(id)arg1 contentViewControllerForColumnAtIndex:(long long)arg2;
- (id)topTabbarView:(id)arg1 itemForColumnAtIndex:(long long)arg2;
- (long long)numberOfColumsInTopTabbarView:(id)arg1;
- (void)gotoNoCommentVC;
- (void)commentDesBtnClick:(id)arg1;
- (void)updateNoCommentInfo;
- (void)didReceiveMemoryWarning;
- (void)requestPopupComment;
- (void)setupTopBarItemArray;
- (_Bool)getCommentCenterExpr;
- (void)initViews;
- (void)getPageconfigTask;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

