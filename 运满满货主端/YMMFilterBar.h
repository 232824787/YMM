//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableArray, UIButton, UIScrollView;

@interface YMMFilterBar : UIView
{
    NSMutableArray *_currentFilterItemArr;
    NSMutableArray *_filterItemViewArr;
    id <YMMFilterBarDelegate> _delegate;
    NSArray *_filterItemArray;
    UIScrollView *_scrollView;
    UIButton *_clearFilterItemButton;
}

@property(retain, nonatomic) UIButton *clearFilterItemButton; // @synthesize clearFilterItemButton=_clearFilterItemButton;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSArray *filterItemArray; // @synthesize filterItemArray=_filterItemArray;
@property(nonatomic) __weak id <YMMFilterBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)clearFilterItem;
- (void)renderFilterItemView;
- (void)removeFilterItemViews;
- (void)loadControls;
- (id)init;

@end

