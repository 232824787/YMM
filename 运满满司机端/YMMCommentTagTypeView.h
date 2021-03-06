//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextViewDelegate.h"

@class NSArray, NSMutableArray, NSString, UILabel, UIScrollView, YMMCommentTypeIconView;

@interface YMMCommentTagTypeView : UIView <UITextViewDelegate>
{
    _Bool _canScrollFlag;
    _Bool _hadLayout;
    id <YMMCommentTagTypeViewDelegate> _delegate;
    long long _selectedCommentType;
    long long _layoutType;
    NSMutableArray *_selectedTagsArray;
    UILabel *_tipsLabel;
    YMMCommentTypeIconView *_badTypeView;
    YMMCommentTypeIconView *_norTypeView;
    YMMCommentTypeIconView *_goodTypeView;
    UIView *_typeBtnsView;
    UIScrollView *_tagBtnsView;
    NSArray *_dataSource;
    NSMutableArray *_goodBtns;
    NSMutableArray *_normalBtns;
    NSMutableArray *_badBtns;
    NSMutableArray *_selectedTagsBtns;
}

@property(retain, nonatomic) NSMutableArray *selectedTagsBtns; // @synthesize selectedTagsBtns=_selectedTagsBtns;
@property(retain, nonatomic) NSMutableArray *badBtns; // @synthesize badBtns=_badBtns;
@property(retain, nonatomic) NSMutableArray *normalBtns; // @synthesize normalBtns=_normalBtns;
@property(retain, nonatomic) NSMutableArray *goodBtns; // @synthesize goodBtns=_goodBtns;
@property(copy, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UIScrollView *tagBtnsView; // @synthesize tagBtnsView=_tagBtnsView;
@property(retain, nonatomic) UIView *typeBtnsView; // @synthesize typeBtnsView=_typeBtnsView;
@property(retain, nonatomic) YMMCommentTypeIconView *goodTypeView; // @synthesize goodTypeView=_goodTypeView;
@property(retain, nonatomic) YMMCommentTypeIconView *norTypeView; // @synthesize norTypeView=_norTypeView;
@property(retain, nonatomic) YMMCommentTypeIconView *badTypeView; // @synthesize badTypeView=_badTypeView;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(nonatomic) _Bool hadLayout; // @synthesize hadLayout=_hadLayout;
@property(readonly, nonatomic) NSMutableArray *selectedTagsArray; // @synthesize selectedTagsArray=_selectedTagsArray;
@property(nonatomic) _Bool canScrollFlag; // @synthesize canScrollFlag=_canScrollFlag;
@property(readonly, nonatomic) long long layoutType; // @synthesize layoutType=_layoutType;
@property(nonatomic) long long selectedCommentType; // @synthesize selectedCommentType=_selectedCommentType;
@property(nonatomic) __weak id <YMMCommentTagTypeViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)markSelectedTags;
- (void)autoLayoutTagBtns;
- (void)fixLayoutTagBtns;
- (void)layoutTagBtns;
- (id)currentTagBtns;
- (void)removeTagFromTagsBtnsView;
- (void)pickTag:(id)arg1;
- (void)resetSelectedTags;
- (void)selectedTagBtn:(id)arg1;
- (id)tagBtn:(id)arg1;
- (void)layoutSubviews;
- (void)reloadTagBtns;
- (void)setUpFroView;
- (id)init;
- (id)initWithLayout:(long long)arg1;
- (id)initWithTitle:(id)arg1 layoutType:(long long)arg2;
- (id)initWithTitle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

