//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSDictionary, NSLayoutConstraint, UITextField;

@interface VFSDKPasswordCell : UITableViewCell
{
    _Bool _hasTrack;
    long long row;
    id <VFSDKPasswordCellDelegate> delegate;
    UITextField *_passwordTF;
    NSLayoutConstraint *_lineLConstraint;
    NSDictionary *_dataDic;
}

@property(nonatomic) _Bool hasTrack; // @synthesize hasTrack=_hasTrack;
@property(retain, nonatomic) NSDictionary *dataDic; // @synthesize dataDic=_dataDic;
@property(nonatomic) __weak NSLayoutConstraint *lineLConstraint; // @synthesize lineLConstraint=_lineLConstraint;
@property(nonatomic) __weak UITextField *passwordTF; // @synthesize passwordTF=_passwordTF;
@property(nonatomic) __weak id <VFSDKPasswordCellDelegate> delegate; // @synthesize delegate;
@property(nonatomic) long long row; // @synthesize row;
- (void).cxx_destruct;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)updateCell:(id)arg1;
- (void)awakeFromNib;

@end

