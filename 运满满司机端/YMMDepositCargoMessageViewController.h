//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseViewController.h"

@class NSString, UIButton, UILabel, UITextField, UIView;

@interface YMMDepositCargoMessageViewController : YMMBaseViewController
{
    _Bool _canModify;
    NSString *_carNumber;
    CDUnknownBlockType _modifyCarNumber;
    UIView *_carMessageView;
    UILabel *_carTitleLab;
    UITextField *_carTextField;
    UIButton *_submitButton;
}

@property(retain, nonatomic) UIButton *submitButton; // @synthesize submitButton=_submitButton;
@property(retain, nonatomic) UITextField *carTextField; // @synthesize carTextField=_carTextField;
@property(retain, nonatomic) UILabel *carTitleLab; // @synthesize carTitleLab=_carTitleLab;
@property(retain, nonatomic) UIView *carMessageView; // @synthesize carMessageView=_carMessageView;
@property(copy, nonatomic) CDUnknownBlockType modifyCarNumber; // @synthesize modifyCarNumber=_modifyCarNumber;
@property(retain, nonatomic) NSString *carNumber; // @synthesize carNumber=_carNumber;
@property(nonatomic) _Bool canModify; // @synthesize canModify=_canModify;
- (void).cxx_destruct;
- (void)submitButtonClick:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

