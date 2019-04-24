//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "NICell.h"

@class NSString, UIImageView, UILabel;

@interface HCBActionSheetRadioItemCell : UITableViewCell <NICell>
{
    _Bool _selected;
    UILabel *_contentLabel;
    UIImageView *_radioImageView;
}

+ (double)heightForObject:(id)arg1 atIndexPath:(id)arg2 tableView:(id)arg3;
@property(retain, nonatomic) UIImageView *radioImageView; // @synthesize radioImageView=_radioImageView;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
- (void)setSelected:(_Bool)arg1;
- (_Bool)isSelected;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)shouldUpdateCellWithObject:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

