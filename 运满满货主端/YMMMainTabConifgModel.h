//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSArray, NSString;

@interface YMMMainTabConifgModel : YMMCommonModel
{
    long long _globalSwitch;
    NSString *_tabBackgroundColor;
    long long _selectedPos;
    NSArray *_tabList;
}

+ (Class)ymm_classForCollectionPropertyName:(id)arg1;
@property(retain, nonatomic) NSArray *tabList; // @synthesize tabList=_tabList;
@property(nonatomic) long long selectedPos; // @synthesize selectedPos=_selectedPos;
@property(copy, nonatomic) NSString *tabBackgroundColor; // @synthesize tabBackgroundColor=_tabBackgroundColor;
@property(nonatomic) long long globalSwitch; // @synthesize globalSwitch=_globalSwitch;
- (void).cxx_destruct;

@end

