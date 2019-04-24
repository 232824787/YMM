//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ETCCardInfo, NSArray, NSDictionary, NSString;

@interface HCBETCRootViewModel : NSObject
{
    _Bool _bindCard;
    _Bool _qiluBindCard;
    NSString *_module;
    CDUnknownBlockType _freshUIBlock;
    NSDictionary *_tempLoanChannelDic;
    long long _transferActivityStatus;
    NSDictionary *_popWindowDic;
    NSArray *_tabBarItemArray;
    NSDictionary *_rightBtnDic;
    NSString *_title;
}

@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSDictionary *rightBtnDic; // @synthesize rightBtnDic=_rightBtnDic;
@property(retain, nonatomic) NSArray *tabBarItemArray; // @synthesize tabBarItemArray=_tabBarItemArray;
@property(retain, nonatomic) NSDictionary *popWindowDic; // @synthesize popWindowDic=_popWindowDic;
@property(nonatomic) long long transferActivityStatus; // @synthesize transferActivityStatus=_transferActivityStatus;
@property(retain, nonatomic) NSDictionary *tempLoanChannelDic; // @synthesize tempLoanChannelDic=_tempLoanChannelDic;
@property(nonatomic) _Bool qiluBindCard; // @synthesize qiluBindCard=_qiluBindCard;
@property(nonatomic) _Bool bindCard; // @synthesize bindCard=_bindCard;
@property(copy, nonatomic) CDUnknownBlockType freshUIBlock; // @synthesize freshUIBlock=_freshUIBlock;
@property(retain, nonatomic) NSString *module; // @synthesize module=_module;
- (void).cxx_destruct;
- (void)setCardInfo:(id)arg1;
@property(readonly, nonatomic) ETCCardInfo *cardInfo;
@property(readonly, nonatomic) long long index;
- (id)tabBarDicArray;
@property(readonly, nonatomic) NSString *rightBtnTitle;
- (void)requestPopWindow;
- (id)currentSelectedDic;
- (void)handleLoginNotification:(id)arg1;
- (void)receiveNotification:(id)arg1;
- (void)requestCardList;
- (void)requestQiluStatus;
- (void)qiluBindNoti:(id)arg1;
- (void)selectedCardChangedNoti:(id)arg1;
- (void)clear;
- (void)clickTabBarWithTitle:(id)arg1;
- (void)dealloc;
- (id)initWithModule:(id)arg1;

@end

