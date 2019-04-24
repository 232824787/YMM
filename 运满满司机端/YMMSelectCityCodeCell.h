//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonTextFieldCell.h"

#import "UITextFieldDelegate.h"

@class NSString, YMMRegion, YmmAddressSelecttionView;

@interface YMMSelectCityCodeCell : YMMCommonTextFieldCell <UITextFieldDelegate>
{
    long long _cityCode;
    CDUnknownBlockType _cityCallback;
    YmmAddressSelecttionView *_regionPicker;
    YMMRegion *_city;
    YMMRegion *_area;
    YMMRegion *_prionce;
}

+ (id)cellIdentifiler;
+ (id)ymm_createCellForTableView:(id)arg1;
@property(retain, nonatomic) YMMRegion *prionce; // @synthesize prionce=_prionce;
@property(retain, nonatomic) YMMRegion *area; // @synthesize area=_area;
@property(retain, nonatomic) YMMRegion *city; // @synthesize city=_city;
@property(retain, nonatomic) YmmAddressSelecttionView *regionPicker; // @synthesize regionPicker=_regionPicker;
@property(copy, nonatomic) CDUnknownBlockType cityCallback; // @synthesize cityCallback=_cityCallback;
@property(nonatomic) long long cityCode; // @synthesize cityCode=_cityCode;
- (void).cxx_destruct;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

