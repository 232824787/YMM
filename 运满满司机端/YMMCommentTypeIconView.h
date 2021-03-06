//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface YMMCommentTypeIconView : UIView
{
    _Bool _selected;
    CDUnknownBlockType _selectedCallBack;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    long long _type;
}

@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(copy, nonatomic) CDUnknownBlockType selectedCallBack; // @synthesize selectedCallBack=_selectedCallBack;
@property(readonly, nonatomic) _Bool selected; // @synthesize selected=_selected;
- (void).cxx_destruct;
- (void)tapTypeAction:(id)arg1;
- (void)selectedViewForType:(long long)arg1;
- (void)unSelectedViewForType:(long long)arg1;
- (void)selectedTypeView;
- (void)resetTypeView;
- (id)initWithType:(long long)arg1;
- (void)layoutSubviews;

@end

