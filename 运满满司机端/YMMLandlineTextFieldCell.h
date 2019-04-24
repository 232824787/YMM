//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseTableViewCell.h"

#import "UITextFieldDelegate.h"

@class NSString, UILabel, UITextField;

@interface YMMLandlineTextFieldCell : YMMBaseTableViewCell <UITextFieldDelegate>
{
    UILabel *_titleLabel;
    CDUnknownBlockType _textCallBack;
    UITextField *_areaCodeTextField;
    UILabel *_separetLine;
    UITextField *_phoneTextField;
    UILabel *_bottomLine;
}

+ (id)ymm_createCellForTableView:(id)arg1;
+ (id)cellIdentifiler;
@property(retain, nonatomic) UILabel *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UITextField *phoneTextField; // @synthesize phoneTextField=_phoneTextField;
@property(retain, nonatomic) UILabel *separetLine; // @synthesize separetLine=_separetLine;
@property(retain, nonatomic) UITextField *areaCodeTextField; // @synthesize areaCodeTextField=_areaCodeTextField;
@property(copy, nonatomic) CDUnknownBlockType textCallBack; // @synthesize textCallBack=_textCallBack;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)textFieldDidChanged:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)configConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

