//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class HCBGraph, NSString;

@interface HCBUIFilterTableViewCell : UITableViewCell
{
    _Bool _separateLineHidden;
    NSString *_text;
    HCBGraph *_separateLine;
}

@property(retain, nonatomic) HCBGraph *separateLine; // @synthesize separateLine=_separateLine;
@property(nonatomic) _Bool separateLineHidden; // @synthesize separateLineHidden=_separateLineHidden;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

