//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseTableViewCell.h"

#import "UITextFieldDelegate.h"

@class NSMutableString, NSString, UILabel, UIView;

@interface YMMWithdrawNameAuthCell : YMMBaseTableViewCell <UITextFieldDelegate>
{
    CDUnknownBlockType _nameAuthCallBack;
    NSString *_currAccountName;
    UILabel *_nameLab;
    UILabel *_leftDesLab;
    NSMutableString *_currentInputStr;
    UIView *_doneView;
}

+ (double)ymm_heightForCellWithItem:(id)arg1 contentWidth:(double)arg2;
+ (id)cellWithTableView:(id)arg1;
@property(retain, nonatomic) UIView *doneView; // @synthesize doneView=_doneView;
@property(retain, nonatomic) NSMutableString *currentInputStr; // @synthesize currentInputStr=_currentInputStr;
@property(retain, nonatomic) UILabel *leftDesLab; // @synthesize leftDesLab=_leftDesLab;
@property(retain, nonatomic) UILabel *nameLab; // @synthesize nameLab=_nameLab;
@property(copy, nonatomic) NSString *currAccountName; // @synthesize currAccountName=_currAccountName;
@property(copy, nonatomic) CDUnknownBlockType nameAuthCallBack; // @synthesize nameAuthCallBack=_nameAuthCallBack;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

