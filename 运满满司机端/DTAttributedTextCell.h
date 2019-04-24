//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class DTAttributedTextContentView, NSAttributedString, UITableView;

@interface DTAttributedTextCell : UITableViewCell
{
    DTAttributedTextContentView *_attributedTextContextView;
    id <DTAttributedTextContentViewDelegate> _textDelegate;
    unsigned long long _htmlHash;
    _Bool _hasFixedRowHeight;
    UITableView *_containingTableView;
}

@property(nonatomic) id <DTAttributedTextContentViewDelegate> textDelegate; // @synthesize textDelegate=_textDelegate;
@property(nonatomic) _Bool hasFixedRowHeight; // @synthesize hasFixedRowHeight=_hasFixedRowHeight;
- (void).cxx_destruct;
@property(readonly, nonatomic) DTAttributedTextContentView *attributedTextContextView; // @synthesize attributedTextContextView=_attributedTextContextView;
@property(retain, nonatomic) NSAttributedString *attributedString;
- (void)setHTMLString:(id)arg1 options:(id)arg2;
- (void)setHTMLString:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (double)requiredRowHeightInTableView:(id)arg1;
- (double)_groupedCellMarginWithTableWidth:(double)arg1;
- (void)didMoveToSuperview;
- (id)_findContainingTableView;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithReuseIdentifier:(id)arg1;

@end

