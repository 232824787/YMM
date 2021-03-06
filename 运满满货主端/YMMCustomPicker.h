//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMPopupMaskView.h"

#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"

@class NSArray, NSString, UIButton, UILabel, UIPickerView;

@interface YMMCustomPicker : YMMPopupMaskView <UIPickerViewDataSource, UIPickerViewDelegate>
{
    NSString *_title;
    NSArray *_dataSource;
    id <YMMCustomPickerDelegate> _delegate;
    UIPickerView *_pickerView;
    UIButton *_cancelBtn;
    UIButton *_confirmBtn;
    UILabel *_titleLabel;
    UILabel *_lineView;
    long long _selectedRow;
}

@property(nonatomic) long long selectedRow; // @synthesize selectedRow=_selectedRow;
@property(retain, nonatomic) UILabel *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UIPickerView *pickerView; // @synthesize pickerView=_pickerView;
@property(nonatomic) __weak id <YMMCustomPickerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)showPicker;
- (void)dismissPicker;
- (void)ymm_doDismiss:(CDUnknownBlockType)arg1;
- (void)ymm_maskWillAppear;
- (void)configConstraints;
- (void)selectedAction;
- (void)confirm:(id)arg1;
- (long long)countOfDataSource;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

