//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIButton, UILabel, UIScrollView;

@interface HCBETCNavigationBar : UIView
{
    UIScrollView *_scrollView;
    CDUnknownBlockType _backBlock;
    CDUnknownBlockType _rightItemClickBlock;
    NSString *_title;
    NSString *_rightTitle;
    UIView *_contentView;
    UIButton *_backButton;
    UILabel *_labTitle;
    long long _style;
    UIButton *_rightItemButton;
}

@property(retain, nonatomic) UIButton *rightItemButton; // @synthesize rightItemButton=_rightItemButton;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) UILabel *labTitle; // @synthesize labTitle=_labTitle;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSString *rightTitle; // @synthesize rightTitle=_rightTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) CDUnknownBlockType rightItemClickBlock; // @synthesize rightItemClickBlock=_rightItemClickBlock;
@property(copy, nonatomic) CDUnknownBlockType backBlock; // @synthesize backBlock=_backBlock;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)actionRightItemClick:(id)arg1;
- (void)actionBack:(id)arg1;
- (id)whiteBackImage;
- (void)updateContentOffset;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)willMoveToSuperview:(id)arg1;

@end

