//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSArray, NSString;

@interface YMMCompanyQuoteMoneyModel : YMMCommonModel
{
    unsigned long long _quoteMoneyType;
    long long _currentSceneType;
    NSString *_extraMesssage;
    NSArray *_depositGuarantee;
    long long _buttonChooseTag;
    unsigned long long _dealModel;
}

@property(nonatomic) unsigned long long dealModel; // @synthesize dealModel=_dealModel;
@property(nonatomic) long long buttonChooseTag; // @synthesize buttonChooseTag=_buttonChooseTag;
@property(retain, nonatomic) NSArray *depositGuarantee; // @synthesize depositGuarantee=_depositGuarantee;
@property(retain, nonatomic) NSString *extraMesssage; // @synthesize extraMesssage=_extraMesssage;
@property(nonatomic) long long currentSceneType; // @synthesize currentSceneType=_currentSceneType;
@property(nonatomic) unsigned long long quoteMoneyType; // @synthesize quoteMoneyType=_quoteMoneyType;
- (void).cxx_destruct;

@end

