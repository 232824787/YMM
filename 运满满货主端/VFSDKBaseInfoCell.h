//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSLayoutConstraint, UIImageView, UILabel, UITextField;

@interface VFSDKBaseInfoCell : UITableViewCell
{
    _Bool _isLastRow;
    UILabel *_titleLabel;
    UITextField *_contentTF;
    UIImageView *_arrowIV;
    NSLayoutConstraint *_contentTConstraint;
    NSLayoutConstraint *_lineLConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *lineLConstraint; // @synthesize lineLConstraint=_lineLConstraint;
@property(nonatomic) __weak NSLayoutConstraint *contentTConstraint; // @synthesize contentTConstraint=_contentTConstraint;
@property(nonatomic) __weak UIImageView *arrowIV; // @synthesize arrowIV=_arrowIV;
@property(nonatomic) __weak UITextField *contentTF; // @synthesize contentTF=_contentTF;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool isLastRow; // @synthesize isLastRow=_isLastRow;
- (void).cxx_destruct;
- (void)updateCell:(id)arg1;
- (void)awakeFromNib;

@end

