//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HCBETCPublicExtensionTitleModel, NSArray;

@interface HCBETCPublicExtensionModel : NSObject
{
    _Bool _newUser;
    HCBETCPublicExtensionTitleModel *_titleBar;
    NSArray *_viewList;
}

@property(nonatomic) _Bool newUser; // @synthesize newUser=_newUser;
@property(retain, nonatomic) NSArray *viewList; // @synthesize viewList=_viewList;
@property(retain, nonatomic) HCBETCPublicExtensionTitleModel *titleBar; // @synthesize titleBar=_titleBar;
- (void).cxx_destruct;
- (id)convertViewListFormDictionary:(id)arg1;
- (_Bool)convertNewUserFormDictionary:(id)arg1;
- (id)convertTitleBarFormDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

