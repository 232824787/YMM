//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"

@class NSArray, NSDictionary, NSString, UIPickerView;

@interface HCBLoanAddressPicker : UIView <UIPickerViewDataSource, UIPickerViewDelegate>
{
    NSDictionary *pickerDic;
    NSArray *provinceArray;
    NSArray *cityArray;
    NSArray *townArray;
    NSArray *selectedArray;
    NSString *_selectedAddress;
    id <HCBLoanAddressPickerDelegate> _delegate;
    UIPickerView *_pickerView;
}

@property(retain, nonatomic) UIPickerView *pickerView; // @synthesize pickerView=_pickerView;
@property(nonatomic) __weak id <HCBLoanAddressPickerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *selectedAddress; // @synthesize selectedAddress=_selectedAddress;
- (void).cxx_destruct;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)okBtnPressed:(id)arg1;
- (void)cancelBtnPressed:(id)arg1;
- (void)saveAddress;
- (void)getCurrentAddress;
- (void)initDataArray;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

